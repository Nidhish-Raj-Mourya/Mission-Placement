#include<iostream>
using namespace std;
int main(){
    float years_of_service, salary, rating, increment=0;
    cin >> years_of_service >> salary >> rating ;
    if(years_of_service > 5)
    {
        increment = 5;
    }
    cout << "Years of service:" << increment <<endl;
    if(rating == 5){
increment = increment+20;
salary = (salary * increment)/100;
cout << "Salary:"<<increment;}
else if(rating == 4)
{increment = increment + 15;
    salary = (salary * increment)/100;
    cout << "Salary:"<<increment;
}
else if(rating == 3)
{increment = increment + 10;
    salary = (salary * increment)/100;
    cout << "Salary:"<<increment;
}
else if(rating == 2)
{increment = increment + 5;
    salary = (salary * increment)/100;
    cout << "Salary:"<<increment;
}
else if(rating == 1)
{increment = increment + 0;
    salary = (salary * increment)/100;
    cout << "Salary:"<<increment;
}
return 0;

}