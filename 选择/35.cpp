#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(int(time(0)));
    int sum=0;
    for (int i = 0; i < 3; i++)
    {
        cout << rand() % (9 - 0 + 1) + 0<<" ";
        sum = sum + rand() % (9 - 0 + 1) + 0 ;
    }
    int sum1;
    cout<<"Enter the sum: ";
    cin>>sum1;
    if(sum1==sum){
        cout<<"right!";
    }
    else{
        cout<<"wrong!";
    }
}