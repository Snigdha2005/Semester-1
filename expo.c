#include<stdio.h>
#include<math.h>
//#include"utils.h"
float expo(float x, float epsilon)
{
	float sum=0;
	float term=1;
	int fact=1;
	for(int p = 1; term>=epsilon; p++)
	{
		sum = sum+term;
		term=term*x/p;	
	}
	return (sum);
}
