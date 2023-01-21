// C++ Program for Decimal to Hexadecimal Conversion >>>

#include<iostream>

using namespace std;

void Decimal_Hexadecimal(int n){
    
    int i=0,rem=0;
    char Hexadecimal_Array[32];
    while (n!=0)
    {   
        rem=n%16;
        if (rem<10)
        {
            Hexadecimal_Array[i]=rem+48;
            i++;
        }
        else{
            Hexadecimal_Array[i]=rem+55;
            i++;

        }
        n/=16;
        
    }
    for (int j =i-1; j >=0; j--)
    {
        cout<<Hexadecimal_Array[j];
    }
    
    
}
int main()
{
    int n;
    cout<< "Enter the number in Decimal: " << endl; cin>>n;
    cout<< "The Hexadecimal equivalent of " << n << " is ";
    Decimal_Hexadecimal(n);
    return 0;
}