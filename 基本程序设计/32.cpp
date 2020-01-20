#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a,b,c;
    cout << "Enter investment amount: ";
    cin>>a;
    cout << "Enter annual interest rate in percentage: ";
    cin>>b;
    cout << "Enter number of years: ";
    cin>>c;
    cout << "Accumulated value is $ "<<a*pow((1+b/1200),c*12);
}