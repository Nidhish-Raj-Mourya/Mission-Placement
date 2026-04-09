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

class Student : public Person{

    public:

    void doAct()
    {
        cout<<"I Study "<<endl;
    }
};


int main(){

    Student s1;

    s1.sleep();
    s1.run();
    s1.eat();
    s1.doAct();

    return 0;
}