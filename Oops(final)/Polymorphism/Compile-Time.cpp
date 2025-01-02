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



int main()
{

    A ob1;

    ob1.sayHello();
     ob1.sayHello("Aravindh");
          ob1.sayHello("Aravindh",1);


    return 0;
}
