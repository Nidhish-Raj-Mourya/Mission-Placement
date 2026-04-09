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
        cout<<"I am running "<<endl;
    }

    void sleep()
    {
        cout<<"I am sleeping"<<endl;
    }

    void eat()
    {
        cout<<"I am eating"<<endl;
    }

};

class Student : public Person{

    public:

    void work()
    {
        cout<<"I Study "<<endl;
    }

};

class GraduateStudent: public Student
{

    public:
    void passOut()
    {
        cout<<"I am a passed out Student "<<endl;
    }
};


int main(){

    GraduateStudent s1;

    s1.sleep();
    s1.run();
    s1.eat();
    s1.work();
    s1.passOut();

    return 0;
}