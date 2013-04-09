//
//  main.cpp
//  projecteuler
//
//  Created by Bradley Bosher on 07/10/2012.
//  Copyright (c) 2012 Bradley Bosher. All rights reserved.
//

#include "number.h"


using namespace std;

int main()
{
    
    number p;
    
    long double number = 600851475143;
    
//    cout.precision(16);
//    cout << number << "\n";
    
    //long double nom = number - 2;
    
    
    p.primesUpTo(number, number);
    
  
    
    return 0;
}


