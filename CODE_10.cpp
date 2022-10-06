//C++ Program to Return Sum of Digits of a Number >>>
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
int main()
{
    int n;
    cout << "Enter the Number:" << endl;
    cin >> n;
    cout << "Sum of digits of number: " << n << " is " << SumofDigits(n);
    return 0;
}