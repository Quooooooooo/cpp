#include <iostream>
using namespace std;
int main()
{
    double a,b;
    cout << "Enter weight in pounds: ";
    cin>>a;
    cout << "Enter height in inches: ";
    cin>>b;
    cout << "BMI is " << (a * 0.45359237) / ((b * 0.0254) * (b * 0.0254) );
}