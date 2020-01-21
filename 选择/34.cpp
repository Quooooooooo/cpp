#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"Enter a,b,c: ";
    cin>>a>>b>>c;
    double delta;
    delta=pow(b,2)-4*a*c;
    if(delta>0){
        cout << "The equation has two roots " << (-b + sqrt(pow(b, 2) - 4 * a * c))/2*a<<"and "<< (-b - sqrt(pow(b, 2) - 4 * a * c))/2*a;
    }
    else if(delta==0){
        cout<<"The equation has one roots "<<(-b + sqrt(pow(b, 2) - 4 * a * c))/2*a;
    }
    else{
        cout<<"The equation has no real roots";
    }
}