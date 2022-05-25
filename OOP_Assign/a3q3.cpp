/*
Question 3 Consider a case of single inheritance where Landline phone is a base class and Mobile phone is the derived class. Both the classes are as follow:
(a) Landline: It has subscriber name and number as data members. The member functions are to provide the features of calling on a subscriber's number and receiving a call.
Void call (int sub_number);
Void receive();
(b) Mobile: Apart from inheriting the features of a Landline phone, it provides following additional features:
(i) Maintaining a phonebook to save the name and phone number of friends and relatives. For this, a data member of type array of strings has to be added.
(ii) Calling to a subscriber with its name.
Void call (string sub_name);
 This function first searches the name of the subscriber to be called in the phonebook to find the corresponding phone number and then, invokes the function “void call (int sub_number)” by passing the searched phone number as argument. 
(iii) Maintaining a list of last 20 dialled numbers. For this, a data member of type array of 20 integers has to be added. An entry will be made to this array each time whenever call() function will be invoked. In case of 21th entry to the array, the earliest entry will be replaced with the latest entry.
(iv) Calling on a number from the list of dialled numbers. This function first displays the list of dialled numbers and provides an option to choose a phone number from the list to which a call has to be made. Finally, it invokes call() function and passes the chosen phone number as an argument.
Finally, write the main program to show the features of each class.
*/
#include<iostream>
using namespace std;
class landline{
    protected:
        string name;
        string number;
    public:
        void call(string num){
            cout<<"phone number dialled "<<num<<endl;
        }
        void recieve(){
            cout<<"call recived"<<endl;
        }
};

class mobile:public landline{
    protected:
        string phonebook[10][2]={"Fanindra","7974362087","hiten","9977097775"};
        string recents[20][2];
    public:
        void call(string sub_name){
            int i;
            static int r=0;
            for(i=0;i<10;i++){
                if(phonebook[i][0]==sub_name){
                    cout<<"calling "<<phonebook[i][0]<<endl;
                    landline::call(phonebook[i][1]);
                    recents[r][0]=phonebook[i][0];
                    recents[r][1]=phonebook[i][1];
                    r++;
                }
            }
        }

}; 

int main(){
    mobile m1;
    m1.call("Fanindra");
    m1.call("Fanindra");
    return 0;
}