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

    int i = 1;

    while(i<=num2)
    {
        cout<<num1<<" * "<<i<<" = "<<num1*i<<endl;
        i++;
    }

    return 0;
}