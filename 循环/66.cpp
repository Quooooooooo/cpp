#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double number;
    int m=0,n=0;
    double sum=0;
    cout << "Enter an integer, the input ends if it is 0: " ;
    while (number!=0){
        cin>>number;
        if(number>0){
            m=m+1;
            sum=sum+number;
        }
        else if(number<0){
            n=n+1;
            sum=sum+number;
        }
    }
    cout << "The number of positives is " << m << endl;
    cout << "The number of negatives is " << n << endl;
    cout << "The total is " << sum << endl;
    cout << "The average is " << sum / (m + n) << endl;  
}