#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(int(time(0)));
    int a = rand() % (100 - 0 + 1) + 0;
    int b = rand() % (100 - 0 + 1) + 0;
    cout<<a<<" "<<b<<endl;
    cout<<"The sum of two numbers is "<<a+b<<endl;
}