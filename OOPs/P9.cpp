#include<iostream>
using namespace std;

class Person{

    
    private:
    int weight;
    int height;
    char name[10];
    int age;
    public:

    Person()
    {
        cout<<"Parent Class Constructor Called "<<endl;
    }
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

    private:
        int school;
    public:

    Student()
    {
        cout<<"Derived Class 1 Called "<<endl;
    }
    Student(int y){
        school=y;
        cout<<"Called COnstruct"<<endl;
    }
    void work()
    {
        cout<<"I Study "<<endl;
    }

};

class GraduateStudent: public Student
{

    private:
          int rollNo;
    public:
    GraduateStudent() :Student()
    {
        cout<<"Derived Class 2 Called "<<endl;
    }
    GraduateStudent(int x) :Student(x){
        cout<<"This is psrsmeterized constructor";
        rollNo=x;
    }

    void passOut()
    {
        cout<<"I am a passed out Student "<<endl;
    }
};


int main(){

    GraduateStudent s1(6);

    s1.sleep();
    s1.run();
    s1.eat();
    s1.work();
    s1.passOut();

    return 0;
}