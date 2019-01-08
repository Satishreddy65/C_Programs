#include<stdio.h>
int main()
{
	int arr[3][4]={{11,22,33,44},{12,23,34,45},{54,43,32,21}};
	int i,j;
	for(i = 0; i < 3; i++)
	{
		printf("Address of %dth array = %p %p\n",i,arr[i],*(arr+i));
		for(j = 0; j < 4; j++)
		printf("%d %d %p \n",arr[i][j],*(*(arr+i)+j),*(arr+i)+j);
		printf("\n");
	}
}
 // 7)  arr[i] base adress 1-D arry,*(arr+i) points to base address of 1-D array//
// 9)   arr[i][j] gives the row and column subscripts respectively, *(*(arr+i)+j) points tp value of j th element of ith 1-D array, *(arr+i)+j) points to jth element of ith 1-D array//
