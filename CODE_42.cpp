// C++ program to find the maximum number of handshakes >>>

#include<iostream>

using namespace std;

//Method 1 >>> By using Iteration >>> 

int main()
{
    int n;
    int count_handshakes=0;
    cout<< "Enter the Number of People: ";cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j=i+1; j <= n; j++)
        {
            count_handshakes++;
        }   
    }
    cout<<"For "<<n<<" people there will "<<count_handshakes<<" handshakes";

    return 0;
}

//Method 2 >>> By using Formula >>> 

#include<iostream>
using namespace std; 

int main()
{

    //fill the code
    int num = 9;

    int total = num * (num-1) / 2; // Combination nC2

    cout<<"For "<<num<<" people there will "<<total<<" handshakes";

    return 0;

}