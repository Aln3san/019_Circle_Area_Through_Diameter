#include <iostream>
#include <cmath>

int main()
{
    const float PI = 3.14;
    float diameter;
    std::cout << "Please Enter Diameter to calculate Circle Area: "; std::cin >> diameter;
    int Area = ceil((PI*pow(diameter,2))/4);
	std::cout << "Area of Circle is: " << Area << std::endl;
}
