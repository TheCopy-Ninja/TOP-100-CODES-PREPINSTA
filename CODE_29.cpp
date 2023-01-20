//C++ Program to Return HCF of a Number >>>
#include<iostream>

using namespace std;
int factors(int A, int B){
    int HCF=0;
    for (int i = 1; i <= A/2 || i<=B/2; i++)
    {
        if (A%i==0 && B%i==0)
        {
           HCF=i;
        }  
        
    }
    return HCF;
}
int main()
{
    int A,B;
    cout<< "enter the Number 1: "<< endl; cin>>A;
    cout<< "enter the Number 2: "<< endl; cin>>B;

    cout<< "HCF of " << A << " and " << B << " is " << factors(A,B)<< endl; 
    
    return 0;
}