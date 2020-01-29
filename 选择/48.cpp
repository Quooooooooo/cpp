#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(int(time(0)));
    int length,width;
    cout<<"Enter the length: ";
    cin>>length;
    cout<<"Enter the width: ";
    cin>>width;
    int a=rand()%(length-0+1)+1;
    int b=rand()%(width-0+1)+1;
    cout<<"A random dot is ( "<<a<<","<<b<<" )"<<endl;

}