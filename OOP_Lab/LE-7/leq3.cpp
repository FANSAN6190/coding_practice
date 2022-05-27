/*    3. An educational institution wishes to maintain a database of its employees. The database is 
divided into a number of classes whose hierarchical relationships are shown in Fig.1. The figure also
shows the minimum information required for each class. Specify all the classes and define methods 
to create the database and retrieve individual information as and when required.
*/
#include<iostream>
using namespace std;
class staff{
    protected:
        int code;
        string name;
};
    class teacher : public staff{
        protected:
            string subject;
            string publication;
    };
    class typist : public staff{
        protected:
            int speed;
    };
        class regular : public typist{
            
        };
        class casual : public typist{
            protected:
                float daily_wages;
        };
    class officer : public staff{
        protected:
            char grade;
    };

