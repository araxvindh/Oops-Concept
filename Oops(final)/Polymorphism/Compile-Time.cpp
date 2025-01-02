#include<bits/stdc++.h>

using namespace std;

class A
{

    public:

        void sayHello()
        {
            cout<<"hello"<<endl;
        }

        void sayHello(string name)
        {
            cout<<"hello"<<name<<endl;
        }

        int sayHello(string name,int n)
        {
            cout<<"hello"<<name<<endl;

            return n;
        }
};



class B
{

    public:
        int a;
        int b;
    public :
        int add()
        {
            return a+b;
        }

        void operator+(B &obj)
        {
            int val1=this->a;
            int val2=obj.a;

            cout<<"output"<< val2-val1<<endl;
        }

        void operator() ()
        {
            cout<<"bracket is called"<< this->a<<endl;
        }
};




int main()
{



    A ob1;

    //ob1.sayHello();
    //ob1.sayHello("Aravindh");
    //ob1.sayHello("Aravindh",1);

    B ob2,ob3;

    ob2.a=4;
    ob3.a=7;

    ob2+ob3;
    ob2();
    ob3();
    return 0;
}
