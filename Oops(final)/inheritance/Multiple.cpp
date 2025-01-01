
#include<bits/stdc++.h>

using namespace std;

class Animal
{
public:
    int age;
    int weight;

public :
    void bark()
    {

        cout<<"barking"<<endl;
    }
};

class Human
{
public:
    string color;

    void speak()
    {
        cout<<"speaking"<<endl;
    }
};

// multiple inheritance

class Hybrid : public Animal ,public Human
{

};

int main()
{

   Hybrid ob1;

   ob1.speak();
   ob1.bark();

    return 0;
}


