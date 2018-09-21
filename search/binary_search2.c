#include <stdio.h>
#include <string.h>

typedef int bool;
#define true 1
#define false 0

#if 1
int binary_search(int array[], int count, int value, int* index)
{
	int low = 0;
	int heigh = count - 1;
	int mid;

	if (low > heigh)
	{
		return -1;	
	}

	mid = (low + heigh) / 2;
	if (value == array[mid])
	{
		*index = mid;
		return *index;	
	}
	else if (value < array[mid])
	{
		if (binary_search(array, mid, value, index) != -1)
		{
			return *index;	
		}		
		else
		{
			return -1;	
		}
	}
	else
	{
		if (binary_search(array + mid + 1, count - mid - 1, value, index) != -1)
		{
			*index = mid + 1 + *index;
			return *index;	
		}		
		else
		{
			return -1;	
		}
	}
}
#endif

#if 0
bool binary_search(int array[], int count, int value)
{
	int low = 0;
	int heigh = count - 1;
	int mid;

	if (low > heigh)
	{
		return false;	
	}

	mid = (low + heigh) / 2;
	if (value == array[mid])
	{
		return true;	
	}
	else if (value < array[mid])
	{
		return binary_search(array, mid, value);	
	}
	else
	{
		return binary_search(array + mid + 1, count - mid - 1, value);	
	}
}
#endif


int main()
{
	int array[5] = {1, 2, 3, 4, 5};
	int target;

	scanf("%d", &target);

#if 1
	int targetIndex;
	int index = binary_search(array, 5, target, &targetIndex);
	printf("%d,%d\n", index, targetIndex);
#endif

#if 0
	bool exist = binary_search(array, 5, target);
	printf("%d\n", exist);
#endif

	return 0;
}
