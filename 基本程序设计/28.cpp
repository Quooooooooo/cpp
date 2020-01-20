#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double t,v;
    cout << "Enter the temperature in Fahrenheit between -58 and 41: ";
    cin>>t;
    cout << "Enter the wind speed (>=2) in miles per hour: ";
    cin>>v;
    double t1 = 35.74 + 0.6215*t - 35.75*pow(v,0.16) + 0.4275*t*pow(v,0.16);
    cout << "The wind chill index is "<<t1;
}