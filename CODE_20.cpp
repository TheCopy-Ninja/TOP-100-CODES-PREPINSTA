#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the Number:" << endl;
    cin >> n;
    int a=1;
    cout << "The factors of " << n << " are " << a << "," ;
    for (int i = 2; i <= n; i++)
    {
       if (n % i == 0)
       {
            cout << i <<"," ;
       }
    }
    return 0;
}