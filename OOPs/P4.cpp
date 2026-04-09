#include<iostream>
using namespace std;

class Student{
    private:
    int marks;
    char Grade;

    public:
    int setMarks(int mark)
    {
        marks=mark;
    }

    void setGrade()
    {
        if(marks>=80 &&marks<=100)
        {
            Grade='A';
        }
        else if(marks>=70 &&marks<80)
        {
            Grade='B';
        }
        else if(marks>=60 &&marks<70)
        {
            Grade='C';
        }
        else if(marks<60)
        {
            Grade='D';
        }
    }
    char getGrade(){
        return Grade;
    }
};

int main()
{
    Student s1;
    s1.setMarks(80);
    s1.setGrade();
    cout<<s1.getGrade();
}