#include <iostream>
using namespace std;
int main()
{
    int year=365*24*60*60;
    double r=1.0/7-1.0/13+1.0/45;
    int sum = 312032486;
    for(int i=0;i<5;i++){
        sum=sum+year*r;
        cout<<"a: "<<sum<<endl;
    }
}