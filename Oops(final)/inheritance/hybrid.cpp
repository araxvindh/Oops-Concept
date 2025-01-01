#include<bits/stdc++.h>

using namespace std;


class A
{
    public:
        void func1()
        {
            cout<<"inside function 1"<<endl;
        }
};

class B
{
    public:
        void func1()
        {
            cout<<"inside function 2"<<endl;
        }
};

class C : public A, public B
{

};

int main()
{
    C ob;

    ob.A::func1();
    ob.B::func1();


    return 0;
}

