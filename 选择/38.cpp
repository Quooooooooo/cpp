#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(int(time(0)));
    int t;
    int d;
    int a;
    char s[][7] = {
        "Sun",
        "Mon",
        "Tue",
        "Wen",
        "Tur",
        "Fri",
        "Sat"
    };
    cout << "Enter today's day: ";
    cin>>t;
    cout << "Enter the number of days elapsed since today: ";
    cin>>d; 
    a=(t+d)%7;
    cout << "Today is " << s[t] << " and the future day is " <<s[a] ;
}