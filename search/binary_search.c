#include <stdio.h>
#include <string.h>

int binary_search(int array[], int count, int value)
{
	int low = 0;
	int heigh = count -1;
	int mid;

	while (low <= heigh)
	{
		mid = (low + heigh) / 2;
		if (value == array[mid])
		{
			return mid;	
		}
		else if (value < array[mid])
		{
			heigh = mid - 1;	
		}
		else
		{
			low = mid + 1;	
		}
	}

	return -1;
}


int main()
{
	int array[5] = {1, 2, 3, 4, 5};
	int target;

	scanf("%d", &target);
	int index = binary_search(array, 5, target);
	printf("%d\n", index);	

	return 0;
}

