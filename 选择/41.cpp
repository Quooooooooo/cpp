#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    string number1;
    int a[9];
    int b[9];
    int sum=0;
    cout << "Enter the first 9 digits of an ISBN as integer: ";
    cin>>number1;
    int number = atoi(number1.c_str()); /*将字符串转换为整数型*/
    for(int i=0;i<9;i++){
       a[i]=number%10;
       number=number/10; 
    } 
    for(int j=1;j<10;j++){
        b[j]=a[9-j];
        sum=sum+b[j]*j;
    }
    if(sum%11==10){
        cout << "The ISBN-10 number is "<<number1<<"X"<<endl;
    }
    else{
        cout << "The ISBN-10 number is "<<number1<<sum%11<<endl;
    }
    
}