
#include<iostream>
using namespace std;

class Human
{
    public :
    void Dog()
    {
        cout<<"I Have a Dog ";
    }
};

class Athlete: public Human{
    public:

    void run()
    {
        cout<<"I am running at 30 kmph"<<endl;
    }

};

class Student: public Human{

    public:

   void display()
    {
        cout<<"I am Student"<<endl;
    }

};


class StudentAthlete : public Student,public Athlete{

};


int main(){

    StudentAthlete s1;

    s1.display();
    s1.Athlete::run();
    
    return 0;
}