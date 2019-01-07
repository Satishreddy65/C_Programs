#include<stdio.h>
int main()
{
	int *ptr;
	printf("%u\n",ptr);
	printf("%d\n",sizeof(ptr));
	printf("enter a data\n");
	scanf("%d",ptr);
	printf("%d , %d\n",*ptr,ptr);
}


#if(0)

#include<stdio.h>
int main()
{

	int a=5,*ptr;
	ptr=&a;
	printf("%d %u\n",a,ptr);
	printf("input a data\n");
	scanf("%d",ptr);
	printf("%d %d\n",a,*ptr);
}
#endif
