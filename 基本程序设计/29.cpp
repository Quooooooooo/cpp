#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout<<"a    b   pow(a,b)"<<endl;
    for(int i=1;i<6;i++){
        cout<<i<<"  "<<i+1<<"  "<<pow(i,i+1)<<endl;
    }
}