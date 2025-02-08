//
//  complexity.h
//  Data-Structure-Algorithm-cpp-code
//
//  Created by Yuelin Wen on 2025-02-06.
//

#include <iostream>
using namespace std;

// 空间复杂度例子
// 2.形参a,n,i,theSum,常数0及其指令都为常数级没有额外调用战增长 所以 Srsum(n) = 0
template<class T>
T sum(T a[],int n){
    T theSum = 0;
    for (int i=0; i < n; i++)
        theSum += a[i];
    return theSum;
}

// 2. 实例特征为n,递归战空间包括形式参数a,n和返回地址的空间。a=4bytes, n=int=4bytes,返回地址也是4bytes，每次递归需要12bytes，递归深度n+1 所以Srsum(n) = 12(n+1)
template<class T>
T rSum(T a[], int n)
{
    if(n>0)
        return rSum(a, n-1 + a[n-1]);
    return 0;
}





