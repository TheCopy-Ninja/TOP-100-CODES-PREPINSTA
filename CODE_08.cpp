//C++ Program to check whether the number is  prime or not >>>
#include<iostream>

using namespace std;

bool CheckPrime(int n){
    if (n < 2)
        {
            return false;
        }
    else if (n) 
    {
       for (int i = 2; i < n/2; i++)
            {
                if (n % i == 0)
                    {
                        return false;
                    }   
            }    
    }  
    return true;   
}

int main()
{
    int n;
    cout << "Enter the Number:" << endl;
    cin >> n;
    CheckPrime(n) ? cout << n << " is a prime number " : 
                    cout << n << " is not a prime number";

    return 0;
}