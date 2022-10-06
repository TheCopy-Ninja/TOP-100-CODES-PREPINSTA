//C++ Program to check whether a number is Armstrong or not >>>
#include<iostream>

using namespace std;
bool CheckArmstrong(int n){
    int sum_digits=0;
    int temp=n;
    for (int i = 1; temp > 0; i++)
    {
       sum_digits+= (temp % 10)*(temp % 10)*(temp % 10);
       temp=temp/10;
       
    }
if (sum_digits == n)
{
    return true;
}
else
    return false;
        
}
int main()
{
    int n;
    cout << "Enter The Number:" << endl;
    cin >> n;
    (CheckArmstrong(n)) ? cout << n << " is a Armstrong Number" :  
                          cout << n << " is not a Armstrong Number";

    return 0;
}