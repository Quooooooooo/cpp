#include <iostream>
using namespace std;
int main()
{
    double a,b,c,d,e,f;
    cout<<"ax+by=e"<<endl;
    cout<<"cx+dy=f"<<endl;
    cin>>a>>b>>e>>c>>d>>f;
    double x=(e*d-b*f)/(a*d-b*c);
    double y=(a*f-e*c)/(a*d-b*c);
    cout<<"x="<<x<<" "<<"y="<<y<<endl;

}