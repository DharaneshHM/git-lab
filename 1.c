#include<stdio.h>
int main()
{
	int x,*px;
	float f, *pf;
	px=&x;
	pf=&f;
	x=20, f=5.5;
	printf("%d %u %u\n",x,&x,px);
	printf("%f %u %u\n",f,&f,pf);
	printf("%d %u %d\n",x,px,*px);
	printf("%f %u %f\n",f,pf,*pf);
	return(0);

