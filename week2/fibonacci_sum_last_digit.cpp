#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 

long long fib(long long n)
{
     
    
    long long f0 = 0;
    long long f1 = 1;
 
    
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    else
    {
        
        long long rem = n % 60;
 
        
        if(rem == 0)
           return 0;
        for(long long i = 2; i < rem + 3; i++)
        {
           long long f = (f0 + f1) % 60;
           f0 = f1;
           f1 = f;
        }
         
        long long s = f1 - 1;
        return s%10;
    }
}

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << fib(n);
}
