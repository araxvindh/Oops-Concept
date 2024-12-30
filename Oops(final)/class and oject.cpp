#include<bits/stdc++.h>

using namespace std;

class Hero
{
    //properties
    private:
        int health;

    // Constructor
    public:
        char level;
        char *name;
        static int timetoComplete;
        Hero()
        {
            name =new char[100];
        }
        Hero(int health,char level)
        {

            this->health= health;
            this->level=level;
        }

        // copy Constructor
        Hero(Hero&temp)
        {
            char *c= new char[strlen(temp.name)+1];
            strcpy(c,temp.name);
            this->name=c;
            cout<<"Copy Constructor"<< endl;
            this->health=temp.health;
            this->level=temp.level;

        }
        int getHealth()
        {
            return health;
        }

        char getLevel()
        {

            return level;
        }

        void setHealth(int h)
        {

            health=h;
        }
        void setLevel(int l)
        {

            level=l;
        }

        void setName(char name[])
        {

            strcpy(this->name,name);
        }
        void printf()
        {

            cout<<"HEALTH :"<<this->health<<endl;
            cout<<"LEVEL  :"<<this->level<<endl;
            cout<<"NAME   :"<<this->name<<endl;
        }


        ~Hero()
        {

            cout<<"destructor is Called"<<endl;
        }
};

int Hero::timetoComplete =5;

int main()
{
   cout<<Hero::timetoComplete <<endl;


    Hero a;
    cout<<a.timetoComplete <<endl;

    Hero b;
    b.timetoComplete=10;
    cout<<b.timetoComplete <<endl;


    cout<<a.timetoComplete <<endl;

    cout<<Hero::timetoComplete <<endl;


















    /*
     //satic
    Hero a;
    //dynamic
    Hero *b=new Hero();
    delete b;
    return 0;
    Hero h1;
    h1.setHealth(70);
    h1.setLevel('B');
    char name[10]="Aravind";
    h1.setName(name);
    h1.printf();
    // use defualt Constructor
    Hero h2(h1);
    h2.printf();
    h2.name[0]='A';
    h1.printf();
    h2.printf();


    Hero A(100,'C');
    A.printf();

    // copy Constructor
    Hero B(A);
    B.printf();
    Hero h2;
    Hero h1(70 ,'A');
    h1.printf();
    //creation o fobject

    // static Allocation
    // h1;

    //Dyanically
    Hero *h2=new Hero;
    //method 1
    cout<<"health :" <<(*h2).getHealth()<<endl;
    cout << "level :" << (*h2).getlevel()<<endl;

    //method 2
    h2->setHealth(70);
    h2->setLevel('A');
    cout<<"health :" << h2->getHealth()<<endl;
    cout << "level :" << h2->getlevel()<<endl;


    h1.setHealth(70);
    cout<<"h1 health is :"<< h1.getHealth()<<endl;
    h1.health=70;
    h1.level='B';
    cout<<"health :" <<h1.health<<endl;
    cout<<"level :"<<h1.level<<endl;
    */
}
