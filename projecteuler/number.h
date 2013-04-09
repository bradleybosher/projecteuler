//
//  prime.h
//  projecteuler
//
//  Created by Bradley Bosher on 12/10/2012.
//  Copyright (c) 2012 Bradley Bosher. All rights reserved.
//


#include <iostream>
#include <vector>
#include <math.h>
#include <limits>

using namespace std;



class number
{
    int x;
    long long v;
    long double w;
    
public:
    void isPrime(int);
    void isPrime(long long);
    void primesUpTo(int);
    void primesUpTo(long long);
    void primesUpTo(long double, long double);
    void fibonacciUpTo(int);
    void fibonacciUpTo(long long);
};


void number::isPrime (int a)
{
    x = a;
    int j;
    bool k=true;
    
    for (int i=2; i<=sqrt(x); i++)
    {
        j = x%i;
    
        if (j==0)
        k=false;
    
    }
    
    if (k)
        cout << x << " is a prime number!" << "\n";
    else
        cout << x << " is NOT a prime number!" << "\n";
    
}

void number::isPrime (long long a)
{
    v = a;
    long long j;
    bool k=true;
    
    for (long long i=2; i<=sqrt(v); i++)
    {
        j = v%i;
        
        if (j==0)
            k=false;
        
    }

    
    if (k)
        cout << v << " is a prime number!" << "\n";
    else
        cout << v << " is NOT a prime number!" << "\n";
    
}


void number::primesUpTo(int b)
{
    x = b;
   
    
    int sqrtmaxnum=sqrt(x);
    
    vector <bool> sieve(x+1, false);
    
    for (int i=4;i<x+1;i=i+2)
    {
        sieve[i]=true;
    }
    
    for (int i=3; i <= sqrtmaxnum;i=i+2)
    {
        if (!sieve[i])
        {
            for (int j= i*i; j <= x; j=j+(2*i))
            {
                sieve[j]=true;
            }
        }
        
    }
    for(int i=2;i<=x;i++)
    {
        if(!sieve[i])
        {
            
            cout<<i<<"\n";
        }
    }

    
    
    
}


void number::primesUpTo(long long b)
{
    
    v = b;
    
    
    long long sqrtmaxnum=sqrt(v);
    
    vector <bool> sieve(v+1, false);
    
    for (int i=4;i<v+1;i=i+2)
    {
        sieve[i]=true;
    }
    
    for (int i=3; i <= sqrtmaxnum;i=i+2)
    {
        if (!sieve[i])
        {
            for (int j= i*i; j <= v; j=j+(2*i))
            {
                sieve[j]=true;
            }
        }
        
    }
    for(int i=2;i<=v;i++)
    {
        if(!sieve[i])
        {
            cout<<i<<"\n";
        }
    }
    
}

void number::fibonacciUpTo(int g)
{
    x = g;
    
    int i = 1;
    int j = 1;
    int k = 0;
    
    cout << i << "\n";
    
    while (j < x)
    {
        k= j;
        j= i + j;
        i=k;
        
        cout << k << "\n";
        
    }
    
    
}

void number::fibonacciUpTo(long long g)
{
    v = g;
    
    int i = 1;
    int j = 1;
    int k = 0;
    
    cout << i << "\n";
    
    while (j < v)
    {
        k= j;
        j= i + j;
        i=k;
        
  
        cout << k << "\n";
        
    }
    
    
}

void number::primesUpTo(long double b, long double c)
{
    
    w = b;
    
    
    long double sqrtmaxnum=sqrt(w);
    
    vector <bool> sieve(sqrtmaxnum+1, false);
    
    for (long double i=4;i<w+1;i=i+2)
    {
        sieve[i]=true;
    }
    
    for (long double i=3; i <= sqrtmaxnum;i=i+2)
    {
        if (!sieve[i])
        {
            for (long double j= i*i; j <= w; j=j+(2*i))
            {
                sieve[j]=true;
            }
        }
        
    }
    for(long double i=2;i<=sqrtmaxnum;i++)
    {
        if(!sieve[i])
        {
            //cout << i << "\n";
            
            if(fmod(w,i ) == 0)
            {
                cout.precision(16);
                cout<< "This is a prime factor: "<< i <<"\n";
                
            }
        }
    }
    
}

