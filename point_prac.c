



#if(0)

#include <stdio.h>

int main()
{
	    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
	    float *ptr1 = &arr[0];
	    float *ptr2 = ptr1 + 3;

	     printf("%f \n", *ptr2);
	    printf("%d \n", ptr2 - ptr1);

}

#endif
#if(0)

#include<stdio.h>
int main()
{
	int *ptr,x;
	ptr=&x;
	*ptr=0;
	printf("x = %d\n",x); // here ptr is point to x (*ptr=0) )//
	printf("*ptr = %d\n",*ptr);
	*ptr +=5;           // inc value at the ptr by 5//
	printf("x = %d\n",x);
	printf("*ptr = %d\n",*ptr);
	(*ptr)++;
	printf("x = %d\n",x);
	printf("*ptr = %d\n",*ptr);
}
#endif
