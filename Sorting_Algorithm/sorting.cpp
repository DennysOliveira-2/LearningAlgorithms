#include <iostream>
#include <string>

void log(const char* message);

int main(void)
{
	log("Welcome to this sorting algorithm.");
	log("Choose 10 numbers (digits) so they will be returned in ascending order:");

	int array[10];
	int input;

	for (int p = 1; p <= 10; p++)
	{
		std::cout << "Choose the " << p << " number:" << std::endl;
		std::cin >> input;
		array[p] = input;
		
	}

	for (int j = 2; j <= 9; j++)
	{
		int key = array[j];
		int k = j - 1;
		while (k > 0 && array[k] > key)
		{
			array[k + 1] = array[k];
			k = k - 1;
		}
		array[k + 1] = key;
	};

	std::cout << std::endl;
	log("Result after applying reordering algorithm:");
	for (int l = 1; l <= 10; l++)
	{
		std::cout << array[l] << std::endl;
	}
	std::cin.get();
}

void log(const char* message)
{
	std::cout << message << std::endl;
}