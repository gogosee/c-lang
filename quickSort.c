#include <stdio.h>
#include <string.h>

int print(int array[], int count)
{
	for (int i = 0; i < count; ++i)
	{
		printf("%d\t", array[i]);	
	}
	printf("\n");	

}

int quickSort(int array[], int count)
{
	printf("count:%d\n", count);
	print(array, count);
	int base = array[0];
	int resultArray[count];
	int minCount = 0;
	int maxCount = 0;
	int eqCount = 1;

	for (int i = 1; i < count; ++i)
	{
		if (array[i] < base)	
		{
			resultArray[minCount] = array[i];
			minCount++;	
		}
		else if (array[i] > base)
		{
			resultArray[count - 1 - maxCount] = array[i];	
			maxCount++;
		}
		else
		{
			eqCount++;	
		}
	}

	if (minCount > 1)
	{
		quickSort(resultArray, minCount);
	}

	if (maxCount > 1)
	{
#if 0
		printf("maxIndex:%d\n", count - 1 - maxCount - 1);
		quickSort(resultArray + count - 1 - maxCount - 1, maxCount);
#endif
		quickSort(resultArray + (count - maxCount), maxCount);
	}

	for (int i = 0; i < count - minCount - maxCount; ++i)
	{
		resultArray[minCount + i] = base;
	}

	for (int i = 0; i < count; ++i)
	{
		array[i] = resultArray[i];
	}

	return 0;
}

int main()
{
	int count = 10;
	int array[10] = {1, 2, 0, 1, -1, 4, 1, -2, 3, -4};

	print(array, count);
	quickSort(array, count);
	print(array, count);
	
	return 0;
}



