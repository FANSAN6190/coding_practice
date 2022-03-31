#include<iostream>
using namespace std;
struct date
{
    int day;
    int month;
    int year;
};
int main(){
    char sl;
    struct date dt;
    cout<<"Enter the date = ";
    cin>>dt.day>>sl>>dt.month>>sl>>dt.year;
    cout<<dt.day<<sl<<dt.month<<sl<<dt.year<<endl;
    return 0;
}
