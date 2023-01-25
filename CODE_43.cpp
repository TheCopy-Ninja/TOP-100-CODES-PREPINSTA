// C++ program to Return the Addition of Two Fractions >>>

#include<iostream>

using namespace std;

int Find_GCD(int a, int b){

    int GCD=0;
    for (int  i = 1; i <= a || i<=b ; i++)
    {
        if (a%i==0 && b%i==0)
        {
           GCD=i;
        }       
    }
    return GCD; 
}

void Fraction_Addition(int Num1, int  Num2, int Den1, int Den2)   {

    //We can perform cross multiplication to Normalize Fractions

    int sum_num=(Num1*Den2)+(Num2*Den1);
    int sum_den= Den1*Den2;
    int GCD= Find_GCD(sum_num,sum_den);

    sum_num/=GCD;
    sum_den/=GCD;

    cout<<Num1<<"/"<<Den1<<" + "<<Num2<<"/"<<Den2<<" = "<<sum_num<<"/"<<sum_den;
      
}
int main()
{
    int Num1, Num2, Den1, Den2;

    cout<<"Enter the Numerator and Denominator of first Number: "; cin >> Num1 >> Den1;
    cout<<"Enter the Numerator and Denominator of second Number: "; cin >> Num2 >> Den2;

    Fraction_Addition(Num1, Num2, Den1, Den2);
    
}