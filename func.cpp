//
//  func.cpp
//  Data-Structure-Algorithm-cpp-code
//
//  Created by Yuelin Wen on 2025-02-02.
//

int abc(int a, int b, int c){  //format parameter
    return a+b*c;
}

template <class T>   // template
T abc(T &a, T &b, T &c) // pass by const reference
{
    return a + b * c;
}

template<class T>
bool make2dArray(T ** &x, int numberOfRows, int numberOfColumns){
//    try{
        x = new T * [numberOfRows];
        
        for(int i=0;i<numberOfRows;i++)
            x[i] = new int [numberOfColumns];
        return true;
//    }
//    catch (bad_alloc) {return false;}
}

template<class T>
void delete2dArray(T** &x, int numberOfRows){
    for(int i=0;i<numberOfRows;i++){
        delete [] x[i];
    }
    delete []x;
    x= nullptr;
}
