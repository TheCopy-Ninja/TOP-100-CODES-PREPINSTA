// C++ Program for Hexadecimal to Decimal Conversion >>>

//Method 1 >>> Algorithmic Method >>> 

#include<iostream>

#include<math.h>


using namespace std;

int convert(string num)
{
    int len = num.size();
    int dec = 0, index = 0;
    
    for(int i = len - 1; i >= 0; i--)
    {
        // Here we check if current array char is between (0-9)
        if (num[i] >= '0' && num[i] <= '9') 
        {
            // whenever current num[i] is in range '0' - '9' 
            // ascii int value can be fetched 
            // by subtracting 48 (Refer Ascii table) as ASCII val 0 : 48 
            int digit = int(num[i]) - 48; 
            dec += digit * pow(16, index); 
            index++; 
        } 

        // Here we check if current array char is between (A-F) 
        else if (num[i] >= 'A' && num[i] <= 'F') 
        { 
            // whenever current num[i] is in range 'A' - 'F' 
            // ascii int value can be fetched 
            // by subtracting 55 (Refer Ascii table) as 
            // ASCII val A : 65 and A must result 10 as value 
            int digit = int(num[i]) - 55; 
            dec += digit * pow(16, index); 
            index++; 
        } 
    } 
    return dec; 
} 

int main() 
{ 
    string num; 
    cin >> num;
 
    cout << (convert(num));
 
    return 0;
}

//Method 2 >>> Hexadecimal to decimal conversion using inbuilt function stoi() >>> 

#include<iostream>

using namespace std;
 
int main()
{
    string hexNumber;
    cin >> hexNumber;
    
    int base = 16;
    // format stoi(hexaDecimal_in_string_format, 0, base_value)
    cout << stoi(hexNumber, 0, base);
 
    return 0;
}
