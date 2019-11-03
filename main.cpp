#include <iostream>
#include <iterator>
#include "arrays.h"

int main(void)
{
	int target = 5;

	int arr[10];
	int n = std::size(arr);

	std::cout << "**Original Array**" << std::endl;
	for(int i = 0; i < std::size(arr); i++)
	{
		arr[i] = i + 2;
		std::cout << arr[i] << " ";
	}

	std::cout << "\n**Find an element in an array**" << std::endl;
	std::cout << "Find "<< target << " found at index "<< findInArray(arr, n, target) << std::endl;


	std::cout << "**Reverse an Array**" << std::endl;
	reverseArray(arr, n);

	for(int i = 0; i < n; i++)
		std::cout << arr[i] << " ";

	reverseArray(arr, n);

	return 0;
}
