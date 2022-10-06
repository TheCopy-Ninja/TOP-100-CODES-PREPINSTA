//C++ Program to Return Fibonacci Numbers upto nth term >>>
#include<iostream>

using namespace std;

//Method 1 >>> By using iteration >>> 

int main()
{
    int n;
    cout << "Enter the Number:" << endl;
    cin >> n;

    int a=0, b=1;
    int nextterm;
    cout << a << "," << b << ",";
    for (int i = 3; i <= n; i++)
    {
        nextterm= a+b;
        cout << nextterm << ",";
        a=b;
        b=nextterm;
    }
    

    return 0;
}
//Method 2 >>> By using Recursion >>> 

#include <iostream>
using namespace std;

int fibonacci(int n){
    
    if(n <= 1)
        return n;
        
    return fibonacci(n-1) + fibonacci(n-2);
    
}

int main()
{
    int n = 15;

    for(int i = 0; i < n; i++)
        cout << fibonacci(i) << ", ";

    return 0;
}