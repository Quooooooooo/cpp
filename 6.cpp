#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double pi;
    double sum=0.0;
    double sum1=0.0;
    int d=0;
    int m=0;
    for(int i=1;i<12;i=i+2){    
        m=m+1;
        if(m%2==0){
            d=-1;
        }
        else{
            d=1;
        }    
        sum = sum + d* (1.0 / i);               
    }
   sum1=sum+1/13;  
   cout<<"pi="<<4*sum<<endl;
   cout<<"Pi="<<4*sum1<<endl;
}