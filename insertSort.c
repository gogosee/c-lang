/*
 * 插入排序
 */
#include <stdio.h>
#include <string.h>

#if 0
int insertSort(int array[], int count)
{
	int tmp;
	for (int i = 1; i < count; ++i)
	{
		for (int j = 0; j < i; ++j)			
		{
			if (array[j] > array[i])	
			{
				tmp = array[j];	
				array[j] = array[i];
				array[i] = tmp;
	//			break;
			}
		}
	}

	return 0;
}
#endif

#if 1
int insertSort(int array[], int count)
{
	int tmp;
	for (int i = 1; i < count; ++i)
	{
		for (int j = 0; j < i; ++j)		
		{
			if (array[i] < array[j])			
			{
				tmp = array[i];	
				for (int n = i; n > j - 1; --n)		
				{
					array[n] = array[n-1];			
				}
				array[j] = tmp;
				break;
			}
		}
	}

	return 0;
}
#endif

#if 0
void insertSort(int k[],int n)
{
	int i,j;
	int tmp;
	for (i=2; i<=n; i++)
	{
		tmp = k[i];
		j = i-1;

		while (j>0 && tmp<k[j])
		{
			k[j+1] = k[j--];
		}

		k[j+1] = tmp;
	}
}
#endif

int main()
{
	int array[11] = {1, 3, 5, 2, -1, 5, 8, 10, 22, 11, 3};
	insertSort(array, 11);

	for (int i = 0; i < 11; ++i)
	{
		printf("%d\n", array[i]);	
	}
}

