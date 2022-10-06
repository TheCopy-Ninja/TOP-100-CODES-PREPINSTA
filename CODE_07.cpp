//C++ Program to check whether the year is Leap year or not >>>
#include<iostream>

using namespace std;

bool Leap_Year(int y){
    if (y % 400 == 0)
    {
        return true;
    }
    else if (y % 4 == 0 && y % 100 != 0 ) 
    {
        return true;
    }
    else {
        return false;
    }

}

int main()
{
    int year;
    cout << "Enter The Year:" << endl;
    cin >> year;
    Leap_Year(year) ? cout << year << " is leap Year" :  cout << year << " is not leap Year";

    return 0;
}