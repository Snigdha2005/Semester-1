#include<stdio.h>
#include"utils.h"
float compounded_value(float presentvalue, float n, float r, float t)
{
	float Compoundedvalue1, std=1 ;
	
      for(int i=1; i<= n*t;i++)
	{
        std=std*(1+r/(n));
      }
	Compoundedvalue1 = presentvalue*std;
	return (Compoundedvalue1); 
}
float inf_compounded_value(float presentvalue, float r, float t,float epsilon)
{
	float l,Compoundedvalue2;
	l= expo((r*t),epsilon);
	Compoundedvalue2 = presentvalue*l;
      return (Compoundedvalue2);
}
