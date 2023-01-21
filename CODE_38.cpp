// C++ Program for Binary to Octal Conversion >>>

#include<iostream>
#include<math.h>

using namespace std;

//Function to convert Binary to Decimal>>>

int Binary_Decimal(long long n){
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
//Function to convert Decimal to octal>>>

void Decimal_Octal(int n){

    int Octal_Array[32];
    int i=0;
    while (n>0)
    {   
         
        Octal_Array[i]=n%8;
        n/=8;
        i++;
    }
    for (int j=i-1; j >=0 ;j-- )
    {
        cout<<Octal_Array[j];
    }
}

int main()
{
    int n;
    cout<< "Enter the number in binary: " << endl; cin>>n;
    int decimal_Value=Binary_Decimal(n);
    
    cout<< "The Octal equivalent of " << n << " is " ;
    Decimal_Octal(decimal_Value);


    return 0;
}