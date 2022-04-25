// Day_01_fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
#include <iostream>
#include<vector>

int main(int argc, char** argv)
{
	int end_number = 0;
	int current_first_number = 0;
	int current_second_number = 1;
	int sum_of_numbers = 0;
	std::vector<int>result;
	std::cout << "Enter the number for Fibonaci:" << std::endl;
	std::cin >> end_number;
	result.push_back(current_first_number);
	result.push_back(current_second_number);
	for (int i = 0; i < end_number; i++)
	{
		sum_of_numbers = current_first_number + current_second_number;
		result.push_back(sum_of_numbers);

		current_first_number = current_second_number;
		current_second_number = sum_of_numbers;

	}

	std::cout << "Fibonaci Series:" << std::endl;

	for (int number : result)
	{
		std::cout << number << "\t\n";

	}
	std::cout << "\n" << std::endl;
	return 0;
}