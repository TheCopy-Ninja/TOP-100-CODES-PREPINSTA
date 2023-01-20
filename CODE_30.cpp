//C++ Program to Return LCM of a Number >>>
#include<iostream>

using namespace std;
int Multiple(int A, int B){
    int LCM=0;
    for (int i = 1; i ; i++)
    {
        if (i%A==0 && i%B==0)
        {
           LCM=i;
           break;
        }  
        
    }
    return LCM;
}
int main()
{
    int A,B;
    cout<< "enter the Number 1: "<< endl; cin>>A;
    cout<< "enter the Number 2: "<< endl; cin>>B;

    cout<< "LCM of " << A << " and " << B << " is " << Multiple(A,B)<< endl; 
    
    return 0;
}