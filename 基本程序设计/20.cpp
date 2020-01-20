#include <iostream>
using namespace std;
int main()
{
    double v0,v1,t;
    cout << "Enter v0, v1, and t: ";
    cin>>v0>>v1>>t;
    cout << "The average acceleration is "<<(v1-v0)/t<<endl;
}