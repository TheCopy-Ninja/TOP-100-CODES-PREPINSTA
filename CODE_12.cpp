//C++ Program to check whether a number is palindrome or not >>>
#include <iostream>
using namespace std;

//main program
int main ()
{
    //variables initialization
    int num, reverse = 0, rem, temp;
    num=12321;
    cout <<"\nThe number is: "<<num; 
   
 
    temp = num;
    //loop to find reverse number
    while(temp != 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp /= 10;
    };
    
    // palindrome if num and reverse are equal
    if (num == reverse)
        cout << num << " is Palindrome";
    else
        cout << num << " is not a Palindrome";

}