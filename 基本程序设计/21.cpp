#include <iostream>
using namespace std;
int main()
{
    double m,t0,t1;
    cout << "Enter the amount of water in kilograms: ";
    cin>>m;
    cout << "Enter the initial temperature: ";
    cin>>t0;
    cout << "Enter the final temperature: ";
    cin>>t1;
    cout << "The energy needed is "<<m*(t1-t0)*4184.0;
}