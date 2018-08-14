/*
 * 选择排序
 */
#include <stdio.h>
#include <string.h>

int selectSort(int array[], int count)
{
	int minIndex;
	int minTmp;
	for (int i = 0; i < count; ++i)
	{
		minTmp = array[i];
		minIndex = i;
		for (int j = i + 1; j < count; ++j)		
		{
			if (array[j] < minTmp)	
			{
				minTmp = array[j];
				minIndex = j;
			}
		}

		array[minIndex] = array[i];
		array[i] = minTmp;
	}

	return 0;
}


int main()
{
	int array[11] = {1,4,2,6,5,1,0,-1,10,3,6};
	selectSort(array, 11);

	for (int i = 0; i < 11; ++i)
	{
		printf("%d\n", array[i]);	
	}

	return 0;
}

