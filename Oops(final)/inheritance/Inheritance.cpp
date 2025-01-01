#include<bits/stdc++.h>


using namespace std;

class Human
{
    public:
        int height;
        int weight;
        int age;

    public:
        int getAge()
        {
            return this->age;
        }
        int setWeight(int w)
        {
            this->weight=w;
        }


};

class Male : public Human
{
    public:
        string colour;

        void sleep()
        {
            cout<<"male sleeping";
        }

};

class Male1 : protected Human
{
    public:

        int getHeight()
        {
            return this->height;
        }


};


class Male2 : private Human
{
    public:

        int getHeight()
        {
            return this->height;
        }


};



int main()
{
    Male ob1;
    cout<<ob1.age<<endl;
    cout<<ob1.height<<endl;
    ob1.setWeight(100);
    cout<<ob1.weight<<endl;

    Male1 ob2;

    cout<<ob2.getHeight()<<endl;

    Male ob3;

    cout<<ob2.getHeight();

    return 0;
}

