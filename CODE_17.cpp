//C++ Program to Return nth term of Fibonacci series >>>
#include<iostream>

using namespace std;

//Method 1 >>> By using iteration >>> 

int fib(int n){
    int a=0, b=1, nextterm;

    if (n==0)
    {
        return a;
    }
    else if (n==1)
    {
        return b;
    }
    else{
        for (int i = 2; i <= n; i++)
        {
            nextterm=a+b;
            a=b;
            b=nextterm;
        }
        return nextterm;
        
    } 
    
}
int main()
{   
    int n;
    cout << "Enter the Number:" << endl;
    cin >> n;
    cout << "The " <<  n << "th term of fibonacci series is: " << fib(n);
    return 0;
}

//Method 2 >>> By using Recursion >>> 

#include<iostream>

using namespace std;

int fib(int n){

    if (n<=1)
    {
        return  n;
    }
    return fib(n-1)+fib(n-2);
    
}
int main()
{
    int n;
    cout << "Enter the Number:" << endl;
    cin >> n;
    cout << "The " <<  n << "th term of fibonacci series is: " << fib(n);
    return 0;
}