#include <iostream>
using namespace std;
int main()
{
    double a,b;
    cout << "Enter the subtotal and a gratuity rate: ";
    cin>>a>>b;
    cout <<"The gratuity is $ "<<a*(b/100.0)<<" and total is $ "<<a+a*(b/100.0);
}