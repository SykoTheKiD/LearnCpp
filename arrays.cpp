#include <iostream>
#include <iterator>

int findInArray(int *array, int n, int target)
{
	for(int i = 0; i < n; i++)
	{
		if(array[i] == target)
			return i;
	}

	return -1;
}

void reverseArray(int *arr, int n)
{
	int i = 0, j = n-1, tmp;
	while(i < j)
	{
		tmp = arr[i];
		arr[i++] = arr[j];
		arr[j--] = tmp;
	}

}
