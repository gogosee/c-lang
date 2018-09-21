#include <stdio.h>
#include <string.h>

int print(int array[], int count)
{
	for (int i = 0; i < 13; i++)
	{
		printf("%d\t", array[i]);	
	}
	printf("\n-------------------\n");	

	return 0;
}

int shellSort(int array[], int count)
{
	int tmpArray[count];
	int grap = count / 2;

	while (grap > 0)	
	{
		for (int i = 0; i < grap; i++)	
		{
			int thisCount;
			if (count % 2 != 0 && i == 0)
			{
				thisCount = count / grap + 1;	
			}
			else
			{
				thisCount = count / grap;	
			}

#if 0
			for (int ii = 0; ii < thisCount - 1;  ++ii)
			{
				for (int jj = 0; jj < thisCount - ii - 1; ++jj)	
				{
					printf("%d > %d\n", array[i + (ii + jj) * grap], array[i + (ii + jj + 1) * grap]);
					if (array[i + (ii + jj) * grap] > array[i + (ii + jj + 1) * grap])	
					{
						int tmp = array[i + (ii + jj + 1) * grap];
						array[i + (ii + jj + 1) * grap] = array[i + (ii + jj) * grap];
						array[i + (ii + jj) * grap] = tmp;
					}
					print(array, count);
				}
			}
#endif

			for (int ii = 0; ii < thisCount - 1;  ++ii)
			{
				for (int jj = 0; jj < thisCount - ii - 1; ++jj)	
				{
//					printf("%d > %d\n", array[i + jj * grap], array[i + (jj + 1) * grap]);
					if (array[i + jj * grap] > array[i + (jj + 1) * grap])	
					{
						int tmp = array[i + (jj + 1) * grap];
						array[i + (jj + 1) * grap] = array[i + jj * grap];
						array[i + jj * grap] = tmp;
					}
//					print(array, count);
				}
			}

#if 0
			printf("\n=====\n");
			print(array, count);
			printf("\n=====\n");
			return 0;
#endif
		}

		grap = grap / 2;

		print(array, count);
	}
}

int main()
{
	int count = 13;
	int array[13] = {9, 5, 2, 1, 6, -1, -2, 1, 10, 3, 0, 14, -4};
	print(array, count);

	shellSort(array, 13);
	print(array, count);

	return 0;
}

