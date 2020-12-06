
#include <iostream>

int main()
{
	int base;
	base = 12;
	int i;
	int number_array[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

	std::cout << "Multiplication of 12" << std::endl;
	std::cout << "====================" << std::endl;

	for (int i = 0; i < 12; i++) {

		std::cout << base << " times " << number_array[i] << " is " << base * number_array[i] << std::endl;

	}

}