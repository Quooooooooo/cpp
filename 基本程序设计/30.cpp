#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x1,x2,x3,y1,y2,y3,s1,s2,s3,s;
    cout << "Enter three points for a triangle: ";
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    s1=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    s2 = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
    s3 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    s=(s1+s2+s3)/2;
    cout << "The area of the triangle is "<<sqrt(s*(s-s1)*(s-s2)*(s-s3));
}