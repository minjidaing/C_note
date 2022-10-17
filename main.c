#include <stdio.h>

//int main() 포인터 
//{
//	short birthday;
//		short *ptr;
//		ptr=&birthday;
//		
//		printf("birthday 변수의 주소는 %p입니다.\n",ptr);
//}

//int main(void)
//{
//	int num=10;
//	int *ptr=&num;
//	
//	printf("주소값 %p\n",ptr);
//	printf("값%d\n",*ptr);
//}


//int main(void)
//{
//	int a=10,b=20;
//	printf("%d\n",add(a,b));
//	return 0;
//	
//}
//
//int add(int x,int y)
//{
//	return x+y;
//}


//int main(void)
//{
//	int a=10,b=20;
//	int *ptr=a,b;
//	printf("%d",add(&a,&b));
//	
//	return 0;
//}
//
//int add(int *a,int*b)
//{
//	return*a+*b;
//}



//int main(void) 구구단 
//{
//int a,b;
//	for(a=2;a<10;a++)
//{ 
//	for(b=1;b<10;b++)
//{
//		printf("%d*%d=%d\n",a,b,a*b);
//}
//		printf("\n");
//}
//
//}


//int main() 포인터사용해서 곱셈 
//{
//	int a,len=10;
//	
//	printf("숫자:");
//	scanf("%d",&a);
//	
//	gugu(&a,&len);
//	
//	return 0; 
//}
//
//int gugu(int *a,int *len)
//{
//	int i,j;
//	
//	for(i=*a;i<10;i++)
//	{
//		for(j=1;j<*len;j++)
//		{
//			printf("%d*%d=%d",i,j,i*j);
//			printf("\n");
//		
//		}
//	}printf("\n");
//	
//	return 0;
//}

//int main()
//{
//	int a=10,b=20,c=30;
//	
//	int temp=0;
//	temp=a;
//	a=b;
//	b=c;
//	c=temp;
//
//		printf("%d %d %d",a,b,c);	
//	
//}


//int main()
//{
//	int a[3]={10,20,30};
//	int i;
//	
//	for(i=0;i<3;i++)
//	{
//		printf("%d ",a[i]);
//	}
//		printf("\n");
//	for(i=2;i>=0;i--)
//	{
//		printf("%d ",a[i]);
//	}	
//		printf("\n");
//	
//	return 0;
//}





//int main()
//{
//	int i,j;
//	temp=0;
//	int num[5]={5,1,3,2,4}
//
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//	{
//		if(num[i]>num[j])
//		{
//			temp=i
//		}
//	}
//	
//	}
//}


//void main()
//{
//	short data =3;
//	short *p = &data;
//	short **pp=&p;
//	
//	printf("[Before ] data : %d\n",data);
//	*p=4;
//	printf("[Use *p ] data : %d\n",data);
//	**pp=5;
//	printf("[Use **pp] data : %d\n",data);
//}



//void swap(int **a, int **b) 다중포인터 
//{
//	int temp=0;
//	temp=*a;
//	*a=*b;
//	*b=temp;
//	
//}
//
//int main()
//{ 
//	int num1=10,num2=20;
//	int *p1=&num1;
//	int *p2=&num2;
//	
//	swap(&p1,&p2);
//	
//	printf("num1: %d\nnum2: %d\n",*p1,*p2);
//	
//	return 0;
//	
//}

//int main() 
//{
//	int a =10;
//	int *p1=&a;
//	 printf("%d",*p1);
//}

int main(void)
{
	int i,j;
	int a,b;
	scanf("%d %d",&a,&b);
	for(i=0;i<a;i++)
	{
	//	printf("*");
		
	for(j=0;j<b;j++)
		{
		printf("*");	
		}
		printf("\n");
	}
	

}



