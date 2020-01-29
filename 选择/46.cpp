#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(int(time(0)));
    int a,b;
    a = rand() % (1 - 0 + 1) + 0;
    cout<<"Enter your answer: ";
    cin>>b;
    cout<<"The answer is "<<a<<endl;
    if(a==b){
        cout<<"right!"<<endl;
    }
    else{
        cout<<"wrong!"<<endl;
    }
}