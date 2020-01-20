#include <iostream>
using namespace std;
int main()
{
    
    double sum=0;
    double a;
    cout << "Enter the monthly saving amount: ";
    cin>>a;
    for(int i=1;i<12;i++){
        sum=(sum+a)*(1+0.00417);
        cout << "After the "<<i<<"month, the account value is "<<sum<<endl;
    }
    
}