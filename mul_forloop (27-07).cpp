#include <iostream>
#include <string>
#include <bitset>
using namespace std;


int main()
{
    int num1;
    cout<<"Enter a number to find multiplication table :";
    cin>>num1; 

    int num2;
    cout<<"Enter the range of multiplication :";
    cin>>num2;

    for(int i=1;i<=num2;i++)
    {
        cout<<num1<<" * "<<i<<" = "<<num1*i<<endl;
    }

    return 0;
}