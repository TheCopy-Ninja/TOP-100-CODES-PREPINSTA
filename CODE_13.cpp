//C++ Program to Return sum of Prime Numbers in Given Range >>>
#include<iostream>

using namespace std;

int check_prime(int n){
     if(n < 2)
        return false;
    
    // checking the number of divisors b/w 1 and the number n
    for(int i = 2;i <= n/2; i++) 
    { 
        if(n % i == 0) 
            return false;
    }
    
    // if reached here then must be true
    return true;
}
int Sum_Prime(int Lower, int Upper){
    int sum=0;
    for (int i = Lower ; i <= Upper; i++)
    {
        bool isPrime=check_prime(i);
        if (isPrime)
        {
           sum+=i;
        }
        
    }
    return sum;
}
int main()
{
    int Lower, Upper;
    cout << "Enter Lower and Upper Range:" << endl;
    cin >> Lower >> Upper;
    cout << "The Sum of Prime Numbers Between " << Lower << " & " << Upper << " is " << Sum_Prime(Lower, Upper);
    return 0;
}