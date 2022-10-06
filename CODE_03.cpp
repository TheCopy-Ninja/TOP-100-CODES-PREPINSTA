//C++ Program to return Sum of First N Natural numbers >>>
#include<iostream>

using namespace std;

//Method 1 >>> By using Loop >>>

int Sum_Natural(int n){
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the Number:" << endl; cin >> n;
    cout << "Sum of First" << n << "Natural Numbers is:" << Sum_Natural(n);
    return 0;
}

//Method 1 >>> By using Formula Sum of Nth Term >>>

int main()
{
    int n;
    
    cout << "Enter a number : "; 
    cin >> n;
    
    cout << n*(n+1)/2;
    
    return 0;
}

//Method 3 >>> By using Recursion >>> 

int recurSum(int n)
{
    if (n > 0)   
        return n + recurSum(n - 1);
    else
        return 0;
}
 
// Driver code
int main()
{
    int n = 5;
    cout << recurSum(n);
    return 0;
}