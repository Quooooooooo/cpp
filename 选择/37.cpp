#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(int(time(0)));
    int a;
    a=rand() % (12 - 1+ 1) + 1;
    char s[][12]={"Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Oc","Nov","Dec"};
    cout<<a<<" is "<<s[a-1];
}