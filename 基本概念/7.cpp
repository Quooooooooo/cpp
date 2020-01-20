#include <iostream>
#include <math.h>
using namespace std;

double area(double r)
{
    const double pi = 3.14;
    return (1.0/2)*pi*r*r;
}
double length(double r)
{
    const double pi=3.14;
    return 2*pi*r;
}

int main()
{
    double r;   
    cout<<"Enter r: ";
    cin>>r;
    cout<<"Area="<<area(r)<<endl;
    cout<<"Length="<<length(r)<<endl;
}