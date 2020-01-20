#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double side;
    cout << "Enter the side:";
    cin>>side;
    cout << "The area of the hexagon is "<<(3*sqrt(3)/2)*side*side;
}