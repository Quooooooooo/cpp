#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2;
    cout << "Enter x1 and y1: ";
    cin>>x1>>y1;
    cout << "Enter x2 and y2: ";
    cin>>x2>>y2;
    cout << "The distance between the two points is "<<sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}