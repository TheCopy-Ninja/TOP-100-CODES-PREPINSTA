//C++ Program to return Greatest of two numbers >>>
#include<iostream>

using namespace std;

//Method 1 >>> By using if else condition >>>

int main()
{
    int N1,N2;
    cout << "Enter the Number 1:" << endl; cin >> N1;
    cout << "Enter the Number 2:" << endl; cin >> N2; 

    if (N1==N2)
    {
        cout << "both are equal" << endl;
    }
    else if (N1>N2)
    {
        cout << N1 << " is greater than " << N2;
    }
    else
        cout << N2 << " is greater than " << N1;
      
    return 0;
}

//Method 2 >>> By using max() function >>>

#include <iostream>  
// function max available in here
#include <math.h>
using namespace std;

int main ()
{
    int num1, num2;
    num1=45,num2=14;
 
    if (num1 == num2)
        cout << "both are equal";
    else
        cout << max(num1,num2) << " is greater";

    return 0;
}
