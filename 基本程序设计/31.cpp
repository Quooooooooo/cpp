#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a,b;
    cout <<"Enter balance and interest rate (e.g., 3 for 3%): ";
    cin>>a>>b;
    cout << "The interest is "<<a*(b/1200);
}