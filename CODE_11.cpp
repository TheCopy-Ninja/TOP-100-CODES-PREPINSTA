//C++ Program to Reverse a Number >>>
#include <iostream>
using namespace std;

//main program
int main ()
{
    //variables initialization
    int num, reverse = 0, rem;
    num=1234;
    cout <<"\nThe number is"<<num; 
  
    //loop to find reverse number
    while(num != 0)
    {
      rem = num % 10;
      reverse = reverse * 10 + rem;
      num /= 10;
    };
 
    //output
    cout <<"\nReversed Number: "<<reverse;
    
    return 0;
}