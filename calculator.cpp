#include <iostream>
#include <string>
class Calculator{
private:

int num1 {};
int num2{};
char operators{};

public:
Calculator (int a, int b, char c)
 :  num1 {a},  num2{b}, operators {c}
{}
int getnum1 () {return num1;}
int getnum2 () {return num2;}
char getoperators () {return operators;}
void setnum1 (){
    int a;
    std::cout << "Enter a number: ";
std::cin >> a;
num1 =a; 
}
void setnum2 () {
    int a;
    std::cout << "Enter another number: ";
std::cin >> a;
num2 =a; 
}
void setoperators (){char a;
    std::cout << "Enter an operator: ";
std::cin >> a;
operators =a; }

double calculation () {
switch (operators){
    case '+':
    return num1 + num2;
    case '-':
    return num1 - num2;
    case '*':
    return num1 * num2;
    case '/':
    return static_cast<double>(num1) / num2;
    default: 
    std::cout << "Error";
    return 0;
}
}
};




int main (){
    Calculator first (0,0,'+');

    first.setnum1();
    first.setoperators();
    first.setnum2();
    
    std::cout << first.calculation () << "\n";
    return 0;
}