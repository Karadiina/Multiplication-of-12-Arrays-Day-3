
#include <iostream>

int main()
{
	int base;
	base = 12;
	int i;
	int number_array[13];

	std::cout << "Multiplication of 12" << std::endl;
	std::cout << "====================" << std::endl;


	for (i = 0; i < 13; i++)
		number_array[i] = i;

	for (int i = 0; i < 13; i++) {

		std::cout << base << " times " << number_array[i] << " is " << base * number_array[i] << std::endl;

	}

}