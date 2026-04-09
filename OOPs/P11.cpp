#include<iostream>
using namespace std;

class Person{
    public:

    Person()
    {
        cout<<"Parent Class Constructor Called "<<endl;
    }
    void run()
    {
        cout<<"I am running at 30 kmph"<<endl;
    }

};

class Student : public Person{

    private:
        int school;
    public:

   void run()
    {
        cout<<"I am running at 60 kmph"<<endl;
    }

};


int main(){

    Student s1;
    s1.run();

    return 0;
}