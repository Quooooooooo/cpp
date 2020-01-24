#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
    int a,b,c;
    int m,n;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    m=max(a,b);
    n=min(a,b);
    if(n>c){
        if(a>b){
            cout << "The order is: " <<c<<" "<<b<<" "<<a;
        }
        else{
            cout<<"The order is: "<<c<<" "<<a<<" "<<b;
        }
    }
    if(m<c){
        if (a > b)
        {
            cout << "The order is: " << b <<" "<< a <<" "<<c;
        }
        else
        {
            cout << "The order is: " << a <<" "<< b <<" "<< c;
        }
    }
    

}