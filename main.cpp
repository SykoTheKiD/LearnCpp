#include <iostream>
#include <iterator>
#include "add.h"

int main(void)
{
	int target = 5;

	int arr[10];
	int n = std::size(arr);

	for(int i = 0; i < std::size(arr); i++)
		arr[i] = i + 2;

	std::cout << findInArray(arr, n, target) << std::endl;

	reverseArray(arr, n);

	for(int i = 0; i < n; i++)
		std::cout << arr[i] << std::endl;

	return 0;
}
