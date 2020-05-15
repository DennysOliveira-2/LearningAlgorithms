#include <iostream>
#include <string>

void log(const char* message);

int main(void)
{
	log("Welcome to this sorting algorithm.");
	log("Choose up to 10 numbers so they will be returned in ascending order:");

	int input;
	std::cin >> input;

	int length = std::to_string(input).length();

	int array[10];

	for (int i = 5; i > 0; i--) {
		array[i] = input % 10;
		input /= 10;
		std::cout << "Array[" << i <<"]: " <<array[i] << " - ";
	}

	for (int j = 2; j = length; j++)
	{
		int key = array[j];
		int i = j - 1;
		while (i > 0 && array[i] > key)
		{
			array[i + 1] = array[i];
			i = i - 1;
		}
		array[i + 1] = key;
	};


	log("Result after applying reordering algorithm:");
	std::cout << array[10] << std::endl;
	std::cin.get();
}

void log(const char* message)
{
	std::cout << message << std::endl;
}