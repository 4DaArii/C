#include <stdio.h>
#include <math.h>

#include "main.h"

//calculate natural logarithm
double loge(double x)
{
	double limit = 0.000000001;
	double log_0 = -1, log_final = 0, count = 1;

	if (x < 2)
	{
		double log_1 = x - 1;

		while (fabs(log_0 / count) > limit)
		{
			log_0 = log_0 * (-1) * log_1;
			log_final = log_final + log_0 / count;
			count++;
		}
	}
	else
	{
		double log_1 = 1 / (x - 1);

		while (fabs(log_0 / count) > limit)
		{
			log_0 = log_0 * (-1) * log_1;
			log_final = log_final + log_0 / count;
			count++;
		}
	}
	return log_final;
}


//calculate  cosin
double cos(double x)
{
	double limit = 0.000000001;
	double cos_final = 1, cos_0 = 1, count = 1;

	while (fabs(cos_0) > limit)
	{
		cos_0 = cos_0 * (-1) * pow(x, 2) / ((2 * count + 1) * (2 * count + 2));
		cos_final = cos_final + cos_0;
		count++;
	}
	return cos_final;
}


//output array!!!!!!!
int output_matrix_old(matrix)
{
	// for (int i = 0; i < size; i++)
	// {
	// 	for (int j = 0; j < size; j++)
	// 	{
	// 		printf("%lf", matrix[i][j]);
	// 	}
	// 	printf("\n");
	// }
	// return 0;
}


//set value???
int set(int x)
{
	// printf("Enter the");
}

int main(void)
{
	run_tests();
	return 0;

	//set size
	printf("Enter the size of matrix from 2 to 20:");
	int size;
	scanf("%d", &size);

	//set borders of the segment
	printf("Enter the borders of the segment > 0:");
	double border_1, border_2;
	scanf("%lf %lf", &border_1, &border_2);

	double increment = (border_2 - border_1) / (pow(size, 2) - 1);
	double arg = 0;

	//create an array!!!!!!!!!!
	int *matrix;
	matrix = malloc(size * sizeof(matrix[0]));

	/*calculate the values and fill the array
	for (int d = 0; d < (2 * size - 1); d++)
	{
		if (size % 2 != 0)
		{
			if (d <= n)
			{
				if (d % 2 != 0)
				{
					for (int c = size - d + 1; c <= size; c++)
					{
						matrix[d - size + c][c] = cos(loge(border_1 + ) 
					}
				}
			}
		}
	}
	*/
	
	//output_matrix
	output_matrix(matrix);
	
	//find the largest and the smallest elements
	
	//output the largest and the smallest elements
	
	//swap the largest and the smallest elements
	
	//output_matrix
	output_matrix(matrix);
}