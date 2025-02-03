//
//  currency.h
//  Data-Structure-Algorithm-cpp-code
//
//  Created by Yuelin Wen on 2025-02-02.
//

#ifndef CURRENCY_H
#define CURRENCY_H
#include <iostream>
using namespace std;

enum signType { plus, minus };  // 枚举值必须通过作用域访问

class currency
{
    friend std::ostream& operator<<(std::ostream& out, const currency& x); //friend function，为了可以访问class private member
public:
    currency(signType theSign = signType::plus, unsigned long theDollars = 0, unsigned int theCents = 0);
    ~currency(){}
    void setValue(signType, unsigned long, unsigned int);
    void setValue(double);
    signType getSign()const
    {if (amount <0) return signType::minus;
        else return signType::plus;}
    unsigned long getDollars() const
    {if (amount < 0) return (-amount) / 100;
        else return amount / 100;}
    unsigned int getCents() const {
        if(amount < 0) return -amount - getDollars() * 100;
        else return amount - getDollars() * 100;
    }
    //    currency add(const currency&) const;  //
    //    currency& increment(const currency&); //
    currency operator+(const currency&) const;  //operator overload 替代add, increment
    currency& operator+=(const currency& x)  //
    {amount += x.amount; return *this;} //
    void output(ostream& ) const;  // 支持输出文件
    
private:
    long amount;
//    signType sign;
//    unsigned long dollars;
//    unsigned int cents;
};





#endif // CURRENCY_H
