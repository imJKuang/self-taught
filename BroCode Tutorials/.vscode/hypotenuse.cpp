//this program calculates the hypotenuse of a right angled triangle using the formula. 
// formula: squre root of side (a)^2 + (b)^2. 
#include <iostream> 
#include <cmath>

int main()
{

    float a, b , c;

    std::cout <<"Enter the side A: ";
    std::cin >> a;

    std::cout << "Enter the side B: ";
    std::cin >> b;

    c = round(sqrt((a*a)+(b*b)));

    std::cout << "the hypotenuse of the traingle is : " << c;
    
    return 0;
}
