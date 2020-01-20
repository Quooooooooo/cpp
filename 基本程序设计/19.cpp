#include <iostream>
using namespace std;
int main()
{
    int m,y,d;
    cout << "Enter the number of minutes:";
    cin>>m;
    y=m/(365*24*60);
    d=(m%(365*24*60))/(24*60);
    cout <<m<<" minutes is approximately "<<y<<" years and "<<d<<" days";
}