// C++ Program for Octal to Binary Conversion >>>

#include<iostream>
#include<math.h>

using namespace std;

//Function to convert Octal to Decimal>>>

int Octal_Decimal(int n){
    int bit=0,decimal=0;
    double power=0,base=8;
    while (n!=0)
    {
        bit=n%10;
        decimal+=bit* pow(base,power);
        power++;
        n=n/10;
    }
    return decimal;
}
//Function to convert Decimal to Binary>>>

void Decimal_Binary(int n){
    int Binary_Array[32];
    int i=0;
    while (n>0)
    {   
         
        Binary_Array[i]=n%2;
        n/=2;
        i++;
    }
    for (int j=i-1; j >=0 ;j-- )
    {
        cout<<Binary_Array[j];
    }
     
}

int main()
{
    int n;
    cout<< "Enter the number in Octal: " << endl; cin>>n;
    int decimal_Value=Octal_Decimal(n);
    
    cout<< "The Binary equivalent of " << n << " is " ;
    Decimal_Binary(decimal_Value);


    return 0;
}