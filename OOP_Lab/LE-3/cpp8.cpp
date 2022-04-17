/* Write a class definition for an order class for a nightclub that contains a table number, 
a server’s name, and the number of patrons at the table. Include a private static data member 
for the table minimum charge, which is $4.75. Write a main() function that declares no object 
of order class type, but uses a static member function to display the table minimum charge.*/
#include<iostream>
using namespace std;
class nightclub{
    private:
        static float min_chr;
    public:
        int tab_num;
        int ser_nam;
        int no_pat;
        nightclub(){
            min_chr=4.75;
        }
        static float minimum_charge(){
            return 4.75;
        }
};
int main()
{
    cout<<nightclub::minimum_charge()<<endl;
    return 0;
}