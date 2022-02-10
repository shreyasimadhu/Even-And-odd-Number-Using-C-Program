#include <iostream>
using namespace std;
int main()
{   
    int number;
    cout<<"Input The Integer Positive Number = ";
    cin>>number;
    if (number % 2 == 0)
        cout<<"\n"<<number<<" This Number Is Even";
    else
        cout<<"\n"<<number<<" This Number Is Odd";

    return 0;
}