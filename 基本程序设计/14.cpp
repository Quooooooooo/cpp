#include <iostream>
using namespace std;
int main()
{
    double a,b;
    const double pi=3.14;
    cout << "Enter the radius and length of a cylinder: ";
    cin>>a>>b;
    cout << "The area is "<<a*a*pi<<endl;
    cout << "The volume is "<<a*a*pi*b<<endl;
}
   