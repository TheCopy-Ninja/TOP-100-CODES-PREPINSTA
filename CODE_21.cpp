#include<iostream>

using namespace std;

bool isPrime(int n){
    
    // 0, 1 negative numbers are not prime
    if(n < 2)
        return false;
    
    // checking the number of divisors b/w 1 and the number n
    for(int i = 2;i <= n/2; i++) 
    { 
        if(n % i == 0) 
            return false;
    }
    
    // if reached here then must be true
    return true;
}

int main()
{
    
    int n;
    cout << "Enter the Number:" << endl;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
       if (n % i == 0)
       {
                if(isPrime(i)) // Used isprime function which already programmed to filter factors >>>
                    cout << i << "\t";      
       }
    }


}