#include <iostream>
using namespace std;
int main()
{
   double v,a;;
   cout << "Enter speed and acceleration: ";
   cin>>v>>a;
   cout << "The minimum runway length for this airplane is "<<(v*v)/(2*a);
}