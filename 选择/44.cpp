#include <iostream>
using namespace std;
int main()
{
    int number,a,b;
    cout << "Enter a three-digit integer: ";
    cin>>number;
    a=number%10;
    b=number/100;
    if(a==b){
        cout << number << " is a palindrome"<<endl;
    }
    else{
        cout << number << " is not a palindrome"<<endl;
    }
}