#include<stdio.h>
int main()
{
	int x,arr[8]={11,22,33,44,55,66,77,88};
	x=(arr+2);
	printf("%p\n",x);
}






#if(0)

#include<stdio.h>
int main()
{
	int arr[5]={11,22,33,44,55},*ptr;
	ptr=arr;
	int x=100;
	printf("%p %d %d \n",ptr,*ptr,x);
	x=*ptr++;  //1st Assign, 2nd inc , 3rd derefernce //
	printf("%p %d %d \n",ptr,*ptr,x);
	x=*++ptr;  //1st inc-deref, 2nd D-ref //
	printf("%p %d %d \n",ptr,*ptr,x);
	x=++*ptr;  // inc-D-ref 2nd Assign//
	printf("%p %d %d \n",ptr,*ptr,x);
	x=(*ptr)++; //1st Assign 2nd D-ref post//
	printf("%p %d %d \n",ptr,*ptr,x);

}

#endif







#if(0)

#include<stdio.h>
	int main()
	{
		int arr[10]={1,2,34,43,56,43,78,19,35,89},*p;
		for(p=arr+9; p>=arr; p--)
			printf("%d ",*p);
		printf("\n");
	}
#endif









#if(0)

#include<stdio.h>
	int main()
	{
		int arr[10]={11,22,33,44,55,66,77,88,99};
		int *p=arr+9,i;  // p is pointing to the index no 9 //
		for(i=0; i<10; i++)
			printf("%d ",*p--); // first post-dec next derefernce the value //
		printf("\n");
	}



#endif





#if(0)

#include<stdio.h>
	int main()
	{
		int arr[10]={12,13,23,56,67,43,36,78,46,35};
		int *p=arr;
		for(p=arr+2; p<arr+8; p++)  // it is pointing to the address of 2nd index //
			printf("%d \n",*p);
	}

#endif


#if(0)

#include<stdio.h>
	int main()
	{
		int arr[10]={22,33,44,55,66,23,14,25,67,89};
		int *p=arr,i;
		for(p=&arr[0]; p<arr+10; p++) // p=&arr[0] is ho;ding Base address and first index address too //
		{
			printf("%p \t",p);
			printf("%d \n",*p);
		}
	}

#endif




#if(0)

#include<stdio.h>
	int main()
	{
		int arr[5]={11,22,33,44,55},*p=arr,i;
		for(i=0; i<8; i++)
			printf("%d ",++*p); // *p- derefences and inc again same //
		printf("\n");
		for(i=0; i<7; i++)
			printf("%d ", (*p)++); // priority bases first value then increment //
		printf("\n");
	}

#endif







#if(0)

#include<stdio.h>
	int main()
	{
		int arr[5]={12,13,14,15,16};   // in this  case inc/dec  is associative from right to left //
		int *p=arr,i;
		for(i=0;i<5;i++)
			printf("%d ",*p++); // *(p++) first value is used next it is incremented//
		printf("\n");
		for(i=0;i<5;i++)
			printf("%d ",*--p);// *(--p) first it decrements and uses value //
		printf("\n");
	}


#endif




#if(0)

#include<stdio.h>
	int main()
	{
		int arr[5]={25,30,35,40,45},*p,i;
		p=arr;                             // pointing to Base address of an Array//
		for(i=0;i<5;i++)
		{
			(*p)++;             // post incriment of dereferencing value //
			printf("%d\n",*p);   // printing derefencinging value //
			p++;                 // incrementing p=arr i.e p+1 //
		}
	}
#endif

#if(0)


#include<stdio.h>
	int main()
	{
		int arr[5]={11,22,33,44,55},*p,i;
		for(i=0;i<5;i++)
		{
			printf("%d ",*arr);  // it points to base address so it dereferncess to samme//
			arr++;     // lvalue arr directly can't increment //
		}
	}


#endif





#if(0)


#include<stdio.h>
	int main()
	{
		int arr[5]={25,30,35,40,45},*p,i;
		p=&arr[4];   // pointing to a 4th index of an array //
		for(i=0;i<5;i++)
			printf("%d %d \n",*(p-i),p[-i]);
	}

#endif





#if(0)

#include<stdio.h>
	int main()
	{
		int arr[5]={1,2,3,4,5},*p,i;
		p=arr;
		for(i=0;i<5;i++)
			printf("%p %p %d %d \n",p,p+i,*(p+i),p[i]);
	}

#endif




#if(0)

#include<stdio.h>
	int main()
	{
		int arr[5],i;
		for(i=0;i<5;i++)
			printf("%p \n",arr+i);
		// here " arr "  is a Base address to whole array //
		printf("enter a data \n");
		for(i=0;i<5;i++)
			scanf("%d",arr+i);  // arr moves with iterating with respective value //
		for(i=0;i<5;i++)
			printf("%d ",*(arr+i)); // dereferences its index value //
		printf("\n");
	}

#endif


#if(0)

#include<stdio.h>
	int main()
	{
		int *ptr;                   // wild pointer  it is not pointing to any variable //
		printf("%u\n",ptr);
		printf("%d\n",sizeof(ptr));
		printf("enter a data\n");
		scanf("%d",ptr);            // here printing a value in it (ptr) //
		printf("%d , %d\n",*ptr,ptr);
	}
#endif

#if(0)

#include<stdio.h>
	int main()
	{

		int a=5,*ptr;
		ptr=&a;
		printf("%d %u\n",a,ptr);
		printf("input a data\n");
		scanf("%d",ptr);                   // it is ptr = &a  //
		printf("%d %d\n",a,*ptr);
	}
#endif
