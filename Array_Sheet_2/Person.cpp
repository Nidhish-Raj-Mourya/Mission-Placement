#include<iostream>
using namespace std;

class Person{
    private:
    int weight;
    int height;
    char name[10];
    int age;

    public:

    void run()
    {
        cout<<"I am running ";
    }
    void sleep()
    {
        cout<<"I am sleeping";
    }
    void eat()
    {
        cout<<"I am eating";
    }


};

class Hero : public person{

    public:

    void doAct()
    {
        cout<<"I do Acting "<<endl;
    }
};

class Superman: public Hero{

}

int main(){

    Hero h1;
    h1.eat();
    h1.doAct();

    Superman s1;

    
    return 0;
}