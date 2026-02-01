#include<iostream>
using namespace std;
    int subtraction(int number1,  int number2)
   {  
    int result = number1 - number2;
    return result;
   }
   int addition(int number1, int number2)
   {
    int result = number1 + number2;
    return result;
   }
   int multiply(int number1, int number2)
   {
    int result = number1 * number2;
    return result;
   }
   int division(int number1, int number2)
   {
    int result = number1 / number2;
    return result;
   }
    int main()
    {
    int number1, number2;
    cout << "Enter value1:";
    cin >> number1;
    cout << "Enter value2:";
    cin >> number2;
    int result = addition(number1 , number2);
    cout << "addition is " << result<<"\n";
    result = subtraction(number1 , number2);
    cout << "subtraction is " << result<<"\n";
    result = multiply(number1, number2);
    cout << "multiply is " << result<<"\n";
    result = division(number1 , number2);
    cout << "division is " << result<<"\n";
    return 0;}

    

