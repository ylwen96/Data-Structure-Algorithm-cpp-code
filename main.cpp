//
//  main.cpp
//  Data-Structure-Algorithm-cpp-code
//
//  Created by Yuelin Wen on 2025-02-02.
//

#include <iostream>
#include "currency.h"
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    currency g, i, j;
    currency h = currency(signType::plus,3,50);
    
    g.setValue(signType::minus, 2, 25);
    i.setValue(-6.45);
    
    j = h + g;
    cout << h << " + " << g << " = " << j << endl;
    
    j = i + g + h;
    j= (i += g) + h;
    cout << "results j = " << i << "increment by " << g << "and then add " << h << endl;
    
    return 0;
}
