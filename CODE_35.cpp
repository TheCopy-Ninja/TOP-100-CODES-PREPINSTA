// C++ Program for Decimal to Binary Conversion >>>

//Method 1 >>> Using Array to store Binary value >>> 

#include<iostream>

using namespace std;

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
    cout<< "Enter the number in Decimal: " << endl; cin>>n;
    cout<< "The Binary equivalent of " << n << " is ";
    Decimal_Binary(n);
    return 0;
}

//Method 2 >>> Using Variable to store Binary value >>> 

#include<iostream>
using namespace std;

void convertBinary(int num)
{
    // long long used to store large binary values
    long long binary = 0;
    int rem, i = 1;
    
    while(num!=0)
    {
        rem = num % 2;
        num /= 2;
        binary += rem * i;
        
        // moving to next position ex: units -> tens
        i *= 10;
    }
    cout << binary;
}
 
int main()
{
    int decimal_num = 21;
    convertBinary(decimal_num);
    return 0;
}
