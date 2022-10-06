#include<iostream>
#include<math.h>
using namespace std;

//Method 1 >>> By using in-built function from math.h libarary >>>

int power(double base, double expo){

    //Power function takes arguments in Double >>>
    return pow(base,expo);
}
int main()
{   
    int base,expo;
    cout << "Enter the base number:" << endl;
    cin >> base;
    cout << "Enter the exponential:" << endl;
    cin >> expo;
    cout << base << "^" << expo << " = " <<power(base,expo);
    return 0;
}

//Method 2 >>> without using in-built function >>> 

#include<iostream>

using namespace std;
int power(int base, int expo){
    int power=1;
    for (int i = 1; i <=expo; i++)
    {
        power*=base;
    }
    return power;      
}
int main()
{   
    int base,expo;
    cout << "Enter the base number:" << endl;
    cin >> base;
    cout << "Enter the exponential:" << endl;
    cin >> expo;
    cout << base << "^" << expo << " = " <<power(base,expo);
    return 0;
}