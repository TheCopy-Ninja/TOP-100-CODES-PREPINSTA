//C++ Program to check whether a number is positive or negative >>>
#include<iostream>
using namespace std;

//Method 1 >>> By using if else condition >>>

int main()
{
    int num = 96;
    
    //Conditions to check if the number is negative or positive
    if (num > 0)
         cout << "The number is positive";
    else if (num < 0)
        cout << "The number is negative";
    else
        cout << "Zero";
    
    return 0;
}

//Method 2 >>> By using Terinary Operator >>>

int main()
{
    int num = -15;
    
    //Condition to check if the 0, positive or negative
    
    if(num == 0)
            cout << "Zero"; else (num > 0) ? cout << "Positive": cout << "Negative";
    
    return 0;
}