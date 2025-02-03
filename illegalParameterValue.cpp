//
//  illegalParameterValue.cpp 异常类
//  Data-Structure-Algorithm-cpp-code
//
//  Created by Yuelin Wen on 2025-02-03.
//
#include <iostream>
using namespace std;

class illegalParameterValue{
public:
    illegalParameterValue():
    message("Illegal parameter value"){}
    illegalParameterValue (char* theMessage)
    {message = theMessage;}
    void outputMessage(){cout << message << endl;}
    
private:
    std::string message;
};
