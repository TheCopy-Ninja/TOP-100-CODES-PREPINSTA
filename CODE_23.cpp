//C++ Program to check PERFECT number >>>
#include<iostream>

using namespace std;

bool checkPerfectNum(int n)
{
    int sum = 0;
    
    for (int i = 1; i <= n/2; i++){
        if (n % i == 0)
            sum = sum + i;
        }

    if (sum == n)
        return true;

    return false;
}

int main ()
{
    int n;
    cout << "Enter the Number:" << endl;
    cin >> n;
    
    if(checkPerfectNum(n))
        cout << n << " is a perfect number";
    else
        cout << n << " is not a perfect number";
    
    return 0;
}