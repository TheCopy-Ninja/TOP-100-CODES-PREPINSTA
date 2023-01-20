//C++ Program to Return Decimal of a Binary Number >>>

//Method 1 >>> Algorithmic Method >>> 

#include<iostream>
#include<math.h>

using namespace std;
int Binary_Decimal(int n){
    int bit=0,decimal=0;
    double power=0,base=2;
    while (n!=0)
    {
        bit=n%10;
        decimal+=bit* pow(base,power);
        power++;
        n=n/10;
    }
    return decimal;
}
int main()
{   
    int n;
    cout<< "Enter the number in binary: " << endl; cin>>n;
    cout<< "The Decimal equivalent of " << n << " is " << Binary_Decimal(n) << endl;
    return 0;
}

//Method 2 >>> Using in built function stoi() >>> 

#include <iostream>
using namespace std;
 
int main()
{
  string binaryNumber;
    cin >> binaryNumber;
    
    // format stoi(binary_in_string_format, 0, base_value)
    cout << stoi(binaryNumber, 0, 2);
 
    return 0;
}