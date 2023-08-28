#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main()
{
    int num1;
    cout<<"Enter a number to count the number of '1s' in their binary number :";
    cin>>num1; 

    cout<<"The Binary number :"<<bitset<4>(num1)<<endl;

    int count = 0;
    
    while (num1)
    {
        count += num1 & 1;
        num1 >>= 1;        
    }
    cout<<"Number of '1s' in the binary :"<<count<<endl;
    
    return 0;
}