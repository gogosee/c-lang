#include <stdio.h>

int binary_search(const int array[], int start, int end, int value)
{
		if (start > end)
		{
				return -1;
		}

		int mid = start + (end - start) / 2;
		if (array[mid] == value)
		{
				return mid;
		}
		else if (array[mid] > value)
		{
				end = mid - 1;
				binary_search(array, start, end, value);
		}
		else 
		{
				start = mid + 1;
				binary_search(array, start, end, value);
		}
}

int bin_search(const int array[], int start, int end, int value)
{
	if (start > end)
	{
		return -1;	
	}

	int mid;
	while (start <= end)
	{
		mid = start + (end - start) / 2;
		if (array[mid] == value)
		{
			return mid;	
		}
		else if (array[mid] > value)
		{
			end = mid - 1;			
		}
		else if (array[mid] < value)
		{
			start = mid + 1;	
		}
	}

	return -1;
}




int main()
{
	int array[] = {1, 2, 3, 4, 5, 6, 10};
	int res = binary_search(array, 0, 6, 6);
	printf("%d\n", res);

	res = bin_search(array, 0, 6, 6);
	printf("%d\n", res);

	return 0;
}

