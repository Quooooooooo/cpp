#include <iostream>
using namespace std;
int main()
{
    double T,t;   
    cout << "Enter a degree in Celsius: ";
    cin>>t;
    T = (9.0 / 5) * t + 32;
    cout << t << " Celsius is " << T << " Fahrenheit"<<endl;
}