#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout << "Enter a number between 0 and 1000: ";
    cin>>a;
    b=a%10;
    c=(a/10)%10;
    d=a/100;
    cout << "The sum of the digits is "<<b+c+d<<endl;
}