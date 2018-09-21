#include <stdio.h>
#include <string.h>

int bubbleSort(int array[], int count)
{
	int tmp;
	for (int i = 0; i < count - 1; ++i)
	{
		int flag = 0;
		for (int j = 0; j < count - i - 1; ++j)	
		{
			if (array[j] > array[j + 1])	
			{
				tmp = array[j];
				array[j] = array[j+1];
				array[j+1] = tmp;
				flag = 1;
			}
		}

		if (flag == 0)
		{
			break;	
		}
	}

	return 0;
}

int main()
{
	int array[11] = {1, 5, 3, 2, -1, 2, -2, 5, 1, 5, 7};
	bubbleSort(array, 11);
	
	for (int i = 0; i < 11; ++i)
	{
		printf("%d\n", array[i]);	
	}

	return 0;
}
