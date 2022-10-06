//C++ Program to return Greatest of three numbers >>>
#include<iostream>

using namespace std;

//Method 1 >>> By using if else condition >>>

int GreatestofTwo(int a,int b,int c){
    if (a>b && a>c)
    {
        return a;
    }
    else if (b>c && b>c)
    {
        return b;
    }
    else
        return c;      
}

int main()
{
    int x, y, z;
    cout << "Enter Three Numbers:" << endl;
    cin >> x >> y >> z;
    cout << GreatestofTwo(x,y,z) << " is greatest Number " << endl;
    return 0;
}

//Method 2 >>> By using Another Temperoray Variable >>>

int GreatestofTwo(int a,int b,int c){
    int G=0;
    if (a>G)
    {
        G=a;       
    }
        if (b>G)
            {
                G=b;   
            }

            if (c>G)
                {
                    G=c;
                }
    return G;
          
}

int main()
{
    int x, y, z;
    cout << "Enter Three Numbers:" << endl;
    cin >> x >> y >> z;
    cout << GreatestofTwo(x,y,z) << " is greatest Number " << endl;
    return 0;
}

//Method 3 >>> By using max() Function >>>

#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int first, second, third;
    
    first=10,second=20,third=30;
    
    int result;

    result =  max(first,max(second, third));
    
    cout << result << " is the largest";

 
    return 0;
}