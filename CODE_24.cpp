//C++ Program to check PERFECT Square >>>
#include<iostream>
#include<cmath>
using namespace std;

bool isPerfectSquare(long double x)
{
    if (x >= 0) {
 
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    
    return false;
}

int main()
{
    long long x = 36;
    if (isPerfectSquare(x))
        cout << "It is  perfect square";
    else
        cout << "It is not perfect square";
    return 0;
}