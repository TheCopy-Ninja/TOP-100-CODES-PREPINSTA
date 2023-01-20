//C++ Program to check HARSHAD Number >>>
#include<iostream>

using namespace std;
int SumofDigits(int n){
    int sum=0;

    for (int i = 1; n > 0; i++)
    {
        sum+=n % 10;
        n=n/10;
    }
    return sum;   
}
bool CheckHarshad(int n){
    if (n % SumofDigits(n)==0)
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
    CheckHarshad(n) ? cout << n << " is a Harshad Number":
                      cout << n << " is NOT a Harshad Number";
    return 0;
}