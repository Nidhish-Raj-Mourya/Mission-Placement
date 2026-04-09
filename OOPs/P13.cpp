#include<iostream>
using namespace std;

class Athlete{
    public:

    void run()
    {
        cout<<"I am running at 30 kmph"<<endl;
    }

};

class Student{

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
    s1.run();
    
    return 0;
}