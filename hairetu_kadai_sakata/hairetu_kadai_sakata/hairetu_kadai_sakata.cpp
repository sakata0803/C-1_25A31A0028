#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	// 課題1
	int ages[] =
	{
		15,
		32,
		11,
		48,
	};

	for(int i = 0; i < 4; i++)
	{
		printf("年齢は %d です\n", ages[i]);
	}


	// 課題2
	int Number[] =
	{
		198,
		3825,
		2241,
		4,
		7,
	};
	int MaxNumber = Number[0];

	for (int i = 0; i < 5; i++)
	{
		if (MaxNumber <= Number[i])
		{
			MaxNumber = Number[i];
		}
	}
}
