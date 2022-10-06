//C++ Program to return Sum of numbers in a given range >>>
#include<iostream>

using namespace std;

//Method 1 >>> By using Loop >>>
int Sum_num(int LowerRange, int UpperRange){

    int sum=0;
    for (int i = LowerRange; i <= UpperRange; i++)
    {
        sum+=i;

    }
    return sum;   
}
int main()
{
    int N1,N2;
    cout << "Enter N1 :" << endl; cin >> N1;
    cout << "Enter N2; :" << endl; cin >> N2;
    cout << "Sum of Numbers from  " << N1 << " To  " << N2 << " Is " << Sum_num(N1,N2);
}

//Method 2 >>> By using Recursion >>> 
#include <iostream>
using namespace std;

int calcSum(int a, int b){
        
    // stop when any recursion call tries to go over b (larger number)
    if (a > b)
        return 0;

    return a + calcSum(a + 1, b);
}

int main()
{
    int a = 10;
    int b = 15;
    
    int sum = calcSum(a, b);
    
    cout << sum;
    
    return 0;
}