#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double p,f,i,height,weight,bmi;
    cout << "Enter weight in pounds: ";
    cin>>p;
    cout << "Enter feet: ";
    cin>>f;
    cout << "Enter inches: ";
    cin>>i;
    weight = 0.4535924*p;
    height = 0.3048 * f + 0.0254*i;
    bmi=weight/(pow(height,2));
    if(bmi<18.5){
        cout<<"BMI is "<<bmi<<endl;
        cout<<"PianShou"<<endl;

    }
    else if(bmi<25){
        cout<<"BMI is "<<bmi<<endl;
        cout<<"Normal"<<endl;
    }
    else if(bmi<30){
        cout << "BMI is " << bmi << endl;
        cout << "ChaoZhong" << endl;
    }
    else{
        cout << "BMI is " << bmi << endl;
        cout << "GuoPang" << endl;
    }
}