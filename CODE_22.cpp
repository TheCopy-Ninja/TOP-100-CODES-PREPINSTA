//C++ Program to check STRONG number >>>
#include<iostream>

using namespace std;
int factorial(int n)
{ 
    if (n==0)
    {
        return 1; 
    }
    return n * factorial(n-1);
}  

bool check_strong(int n){
    int temp=n;
    int sum_fact=0; 
    for (int i = 1; temp > 0; i++)
    {
        sum_fact+= factorial(temp%10);
        temp=temp/10;  
    }
    if (sum_fact==n)
    {
        return true;
    }
return false;   
}
int main()
{
    int n;
    cout << "Enter the Number:" << endl;
    cin >> n;
    check_strong(n) ?  cout << n << " is a STRONG number":
                       cout << n << " is not a STRONG number";
       
    return 0;
}