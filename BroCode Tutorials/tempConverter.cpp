//this porgram comverts celsius to Fahrenheit or Fahrenheit to celsius. 

#include <iostream> 

int main()
{
    double temp; 
    char unit; 
    double result;

    std::cout << "***********TEMPERATURE CONVERTER***********\n" << std::endl ;

    std::cout << "F = Fahrenheit ||||| C = Celsius \n"; 
    std::cout << "please enter the unit you would like to convert to: ";
    std::cin >> unit;


    if (unit == 'F' || unit == 'f'){ 
        std::cout << "please enter the temperarure value: "; 
        std::cin >> temp; 
        result = ( temp * ( 9/5)) + 32;
        std::cout << "the temperature in Fahrenheit is: " << result << std::endl ; 
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "please enter the temperarure value: "; 
        std::cin >> temp; 
        result = ( temp - 32) * 5/9;
        std::cout << "the temperature in Celsius is: " << result << std::endl;
    }
    else{ 
        std::cout << "\nPlease Enter a valid temperature unit\n" << std::endl;
    }
    
    std::cout << "*******************************************";

    return 0; 
}