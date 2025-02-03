//
//  currency.cpp
//  Data-Structure-Algorithm-cpp-code
//
//  Created by Yuelin Wen on 2025-02-02.
//

#include "currency.h"

currency::currency(signType theSign, unsigned long theDollars, unsigned int theCents) {
    setValue(theSign, theDollars, theCents);
}

void currency::setValue(signType theSign, unsigned long theDollars, unsigned int theCents) {
    if (theCents >= 99) {
        std::cout << "Illegal parameter value" << std::endl;
    }
    else{    amount = theDollars * 100 + theCents;
        if(theSign == signType::minus){
            amount = -amount;
        }}

}

void currency::setValue(double theAmount) {
    if (theAmount < 0) {
        amount = (long)((theAmount - 0.001)*100);
    } else {
        amount = (long)((theAmount + 0.001)*100);
    }
}

currency currency::operator+(const currency& x) const {
    currency result;
    result.amount = amount + x.amount;
    return result;
}

void currency::output(ostream& out) const {
    long theAmount = amount;
    if(theAmount < 0){
        out << '-';
        theAmount = -theAmount;
    }
    long dollars = theAmount / 100;
    out << '$' << dollars << '.';
    int cents = theAmount - dollars * 100;
    if(cents < 10) out << '0';
    out << cents;
}


ostream& operator<<(ostream& out, const currency& x) // cannot access private member, have to use public method to access such as output(ostream& out) 或者直接定义friend function
{x.output(out); return out;}
