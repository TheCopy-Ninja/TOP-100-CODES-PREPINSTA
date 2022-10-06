//C++ Program to check whether a number is odd or even >>>
#include<iostream>

using namespace std;

//Method 1 >>> By using if else condition >>>

int main ()
{
    int number;
    cout << "Enter a number:"; cin >> number;
 
    //checking whether the number is even or odd
    if (number % 2 == 0)
        cout << number << " : Even";
    else
        cout << number << " : Odd";
        
    return 0;
}

//Method 2 >>> By using Terinary Operator >>>

int main ()
{
    int number;
    cout << "Enter a number:"; cin >> number;

    
    //Checking if the number is divisible by 2
    number % 2 == 0 ? cout << "Even":cout << "Odd";
    
    return 0;
}

//Method 3 >>> By using Bitwise Operator >>>


// Returns true if n is even, else odd
bool isEven(int number)
{
     
    // n & 1 is 1, then odd, else even
    return (!(number & 1));
}
 
// Driver code
int main()
{
    int number;
    
    cout << "Enter the number: "; cin >> number;

    if(isEven(number))
        cout << "Even";
    else
        cout << "Odd";

    //below can also be used instead of if else conditions
    //isEven(number)? cout << "Even" : cout << "Odd";
 
    return 0;
}
