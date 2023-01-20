//C++ Program to check Abundant Number or not >>>
#include <iostream>
using namespace std;

int main ()
{
    int n = 12, sum = 0;
    
    for(int i = 1; i < n; i++) {
        
        if(n % i == 0) sum = sum + i; } 
            if(sum > n)
                { 
                    cout << n << " is an Abundant Number\n"; 
                    cout << "The Abundance is: " << (sum-n);
                }else 
                    cout << n << " is not an Abundant Number\n"; 
} 