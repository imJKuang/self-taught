//this program is a simple calculator that takes two numbers and an operator, and prints out the result. 

#include <iostream>

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "***********CALCULATOR***********" << '\n' ;

    std::cout << "Please enter an operator ( + - * /)" << '\n' ; 
    std::cin >> op;

    std::cout << "Enter the first number: " << '\n' ; 
    std:: cin >> num1;

    std::cout << "Enter the secodn number: " << '\n' ; 
    std::cin >> num2 ; 

    switch (op)
    {
    case '+':
     result = num1 + num2;
     std::cout << "result: " << result << std::endl ; 
        break;
    
    case '-':
     result = num1 - num2;
     std::cout << "result: " << result << std::endl ; 
        break;

    case '*':
     result = num1 * num2;
     std::cout << "result: " << result << std::endl ; 
        break;

    case '/':
     result = num1 / num2;
     std::cout << "result: " << result << std::endl ; 
        break;        
    default:
    std::cout << "please enter a valid operator ( + - * /)" ; 
        break;
    }

    std::cout << "***********************************" << '\n' ;
    return 0;
}