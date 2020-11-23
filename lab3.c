#include<stdio.h>
#include<math.h>
//#include <cstdlib>
#define  arrlength 9			//dims of the matrix
#define  arrwidth arrlength 


int func1(int i, int j, int k)
{
	int a = i - j;
	return a;
}
int func2(int i, int j, int k)
{
	int a = i + j + 1;
	return a;
}

void main(void)
{
	int dates[arrlength][arrwidth];
	int i;
	int j;
	int a;
	int b;
	int k = 1;
	for (j = 0; j < arrwidth; j++)
	{
		for (i = 0; i < arrlength; i++)
		{
			a = func1(i, j, k);
			b = func2(i, j, k);
			if ((a > 0 && b < arrlength) || (a < 0 && b > arrlength))
			{
				dates[i][j] = k;
				k++;
			}
			/*			else if (a < 0 && b > arrlength)
						{
							dates[i][j] = k;
							k++;
						}*/
			else dates[i][j] = 0;
		}
	}
	for (i = 0; i < arrlength; i++)
	{
		for (j = 0; j < arrwidth; j++)
		{
			printf("%3i ", dates[i][j]);
		}
		printf("\n\n");
	}
//	system("pause");
}
