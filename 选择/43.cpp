#include <iostream>
using namespace std;
int main()
{
    int year,month;
    char day[][12]={"31","28","31","30","31","30","31","31","30","31","30","31"};
    char day1[][12]={"31","29","31","30","31","30","31","31","30","31","30","31"};
    char s[][12] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sep", "Oc", "Nov", "Dec"};
    cout<<"Enter the year: ";
    cin>>year;
    cout<<"Enter the month: ";
    cin>>month;
    if(year%4==0){
        cout << s[month - 1] << " " << year << " has " << day1[month-1] << " days" << endl;
    }
    else{
        cout << s[month - 1] << " " << year << " has " << day[month-1] << " days" << endl;
    }      
}