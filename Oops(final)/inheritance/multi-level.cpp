#include<bits/stdc++.h>

using namespace std;

class Animal
{
public:
    int age;
    int weight;

public :
    void speak()
    {

        cout<<"speaking"<<endl;
    }
};
class Dog : public Animal
{

};

class GermanShephard:public Dog
{

};


int main()
{

    GermanShephard tommy;
    tommy.speak();

    return 0;
}



