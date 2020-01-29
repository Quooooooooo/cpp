#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int sum;
    int a,b;
    int m=0;
    int right=0,wrong=0;
    cin>>sum;
    while(m<10){
        srand(int(time(0)));
        a = rand() % (15 - 0 + 1) + 1;
        b = rand() % (15 - 0 + 1) + 1;
        cout << a << "+" << b << "=";
        cin>>sum;
        if(sum==a+b){
            right=right+1;
        }
        else{
            wrong=wrong+1;
        }
        m=m+1;
    }
    cout<<"The number of right answer is: "<<right<<endl;
    cout<<"The number of wrong answer is: "<<wrong<<endl;
    
}