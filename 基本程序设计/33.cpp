#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a,b,c;
    cout << "Enter the driving distance: ";
    cin>>a;
    cout << "Enter miles per gallon: ";
    cin>>b;
    cout << "Enter price per gallon: ";
    cin>>c;
    cout << "The cost of driving is $ "<<(a/b)*c;
}