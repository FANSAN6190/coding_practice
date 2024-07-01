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
    public:
        void inp(int c, string n){
            code=c;
            name=n;
        }
        void disp(){cout<<code<<" "<<name<<endl;}
};
    class teacher : public staff{
        protected:
            string subject,publication;
        public:
            void inp(string s,string p){
                subject=s;
                publication=p;
            }
            void disp(){cout<<subject<<" "<<publication<<endl;}
    };
    class typist : public staff{
        protected:
            int speed;
        public:
            void inp(int s){speed=s;}
            void disp(){cout<<speed<<endl;}
    };
        class regular : public typist{
        };
        class casual : public typist{
            protected:
                float daily_wages;
            public:
                void inp(float d){daily_wages=d;}
        };
    class officer : public staff{
        protected:
            char grade;
        public:
            void inp(char g){grade=g;}
            void disp(){cout<<grade<<endl;}
    };
int main(){
    teacher t1;
    staff s1;
    s1.inp(123,"laurence");
    t1.inp("physics","magnetohydrodyanmics");
    s1.disp();
    t1.disp();
}
