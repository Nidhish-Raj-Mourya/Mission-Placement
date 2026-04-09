#include<iostream>
using namespace std;

class Shape{
    public:

    
    void run()
    {
        cout<<"I am running at 30 kmph"<<endl;
    }

};

class Rectangle : public Shape{

    public:

   void display()
    {
        cout<<"I am Rectangle"<<endl;
    }

};


class Circle : public Shape{

    private:
        int school;
    public:

   void display()
    {
        cout<<"I am Circle"<<endl;
    }

};


int main(){

    Circle s1;
    s1.display();

    Rectangle s2;
    s2.display();
    return 0;
}