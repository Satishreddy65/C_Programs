#include<stdio.h>
int main()
{
	int *p;
	int (*ptr)[5];
	int arr[5]={1,2,3,4,5};
	p=arr;
	ptr=&arr;
	printf("p=%p,ptr=%p\n",p,ptr);
	printf("p=%d,ptr=%d\n",*p,*ptr);
	printf("size  p=%d,ptr=%d\n",sizeof(p),sizeof(ptr));
	printf("size  p=%d,ptr=%d\n",sizeof(*p),sizeof(*ptr));
	p++;
	ptr++;
	printf("p=%p,ptr=%p\n",p,ptr);
	printf("p=%d,ptr=%d\n",*p,*ptr);
}




#if(0)

#include<stdio.h>
int main()
{
	int i,arr[5]={1,2,3,4,5},*p;
	p=arr;
	for(i=0;i<5;i++)
	{
		printf("Address of arr[%d] = %p %p %p %p\n",i,&arr[i],arr+i,p+i,&p[i]);
		printf("value of arr[%d] = %d %d %d %d\n",i,arr[i],*(arr+i),*(p+i),p[i]);
	}
}
#endif


#if(0)

#include<stdio.h>
int main()
{
	int arr[5]={5,10,15,20,25};
	int i;
	for(i=0;i<5;i++)
	{
		printf("value of arr[%d]=",i);
		printf("%d\t",arr[i]);
		printf("%d\t",*(arr+i));
		printf("%d\t",i[arr]);
		printf("address of arr[%d] = %p\n",i,&arr[i]);

	}
}

#endif




#if(0)

#include<stdio.h>
int main()
{
	int *p,arr[5]={11,22,33,44,55};
	int (*ptr)[4]=&arr;
	p=arr;
	printf("p = %p ,ptr = %p \n",p,ptr);
	printf("p = %d ,ptr = %d \n",*p,*ptr);
}
#endif
