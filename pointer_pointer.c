#include<stdio.h>
int main()
{
	int a=5;
	int *pa;
	int **ppa;
	pa = &a;
	ppa = &pa;
	printf("address of a = %p %p %p\n", &a,pa,*ppa);
	printf("value of a = %d %d %d \n",a,*pa,**ppa);
	printf("address of pa = %p %p %p \n",&pa,ppa);
	printf("value of pa = %d %d %d\n",&a,pa,*ppa);
	printf("address of ppa = %p\n",&ppa);
	printf("value of ppa = %d %d \n",*ppa,&pa);
}
