#include<iostream>
using namespace std;

class Person{

    protected :
     
    int number1;

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

    
    public:

    void work()
    {
        number1=101;
        cout<<number1;
    }

};



int main(){

    Student s1;

    s1.sleep();
    s1.run();
    s1.eat();
    s1.work();
    

    return 0;
}