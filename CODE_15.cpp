//C++ Program to Return Armstrong Numbers in Given Range >>>
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
    int lower, upper;
    cout << "Enter the lower and upper Range:" << endl;
    cin >> lower >> upper;

    for (int i = lower; i <= upper; i++)
        if (CheckArmstrong(i))
        {
            cout << i << " ";
        }
    return 0;
}