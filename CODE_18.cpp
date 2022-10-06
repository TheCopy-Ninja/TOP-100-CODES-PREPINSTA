//C++ Program to Return the factorial of a Number >>>
#include<iostream>


//Method 1 >>> By using iteration >>> 

using namespace std;
int factorial(int n)
{
    int fact=1;
    if (n==0)
    {
        return n;
        
    }
    else
    {
        for (int i = n; i >= 1 ; i--)
        {
            fact*=i;
        }
        
    }
    return fact;
}
int main()
{
    int n;
    cout << "Enter the Number:" << endl;
    cin >> n;
    cout << "The factorial of " << n << " is " << factorial(n);
    
    return 0;
}

//Method 2 >>> By using Recursion >>> 

#include<iostream>

using namespace std;
int factorial(int n)
{ 
    if (n==0)
    {
        return 1; 
    }
   
        return n * factorial(n-1);
}    
int main()
{   
    int n;
    cout << "Enter the Number:" << endl;
    cin >> n;
    cout << "The factorial of " << n << " is " << factorial(n);
    return 0;
}