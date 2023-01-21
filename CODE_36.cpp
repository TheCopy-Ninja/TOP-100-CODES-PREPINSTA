// C++ Program for Decimal to Octal Conversion >>>

//Method 1 >>> Using Array to store Octal value >>> 

#include<iostream>

using namespace std;

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
    cout<< "Enter the number in Decimal: " << endl; cin>>n;
    cout<< "The Octal equivalent of " << n << " is ";
    Decimal_Octal(n);
    return 0;
}

//Method 2 >>> Using Variable to store Octal value >>> 

#include<iostream>
using namespace std;

void convertOctal(int num)
{
    int octal = 0;
    int rem, i = 1;
    
    while(num!=0)
    {
        rem = num % 8;
        num /= 8;
        octal += rem * i;
        
        // moving to next position ex: units -> tens
        i *= 10;
    }
    cout << octal;
}
 
int main()
{
    int decimal_num = 221;
    convertOctal(decimal_num);
    return 0;
}
