#include <stdio.h>
//int main(void)
//{
//	int a;
//	
//	scanf("%d",&a);
//	printf("입력한값 = %d",a);
//	return 0;
//}
//int main(void)
//{
//	int a;
//	
//	scanf("%d",&a);
//	
//	if(a%2==0) 
//
//{
//
//		printf("짝수입니다");
//	}
//	else if(a%2==1)
//{
//	printf("홀수입니다");
//	}
//	return 0 ;	
//}
//
//int main(void)
//{
//	int i,sum=0;
//
//	for(i=0;i<10;i++)
//	
//		sum=sum+i;
//	
//		printf("%d\n",sum);
//	
//
//	
//}

//int main(void)
//{
//	int i,j;
//	for(i=2;i<10;i++) 
//	{
//	for(j=1;j<10;j++)
//		printf("%d * %d =%d\n ",i,j,i*j);
//	}	
//	
//	printf("\n");
//}


//int main(void)
//{int a;
//
//scanf("%d",&a);
//printf("%d\n",a);
//
//return 0;
//
//}

//int main(void)
//{
//	int a;
//	scanf("%d",&a);
//		if(a==10)
//			printf("굿");
//		else
//			printf("베드");
//	
//}

//int main(void)
//{
//	int i,sum=1;
//	for(i=1;i<=10;i++)
////		printf("%d",i);
//			sum=sum*i;
//			printf("%d",sum);
//}

//int main() {
//	char money[100];
//	char selectedMenu;
//	char amount[100];
//	int price = 0;
//
//	
//
//	while(1) { 
//	
//		scanf("%c",&money,selectedmenu,amount);
//
//		int amountInt = strToInt(amount);
//		if (selectedMenu == '1') {
//			printf("\n참깨라면을 선택하셨습니다.");
//			price = 1000 * amountInt;
//			break;
//		} else if (selectedMenu == '2') {
//			printf("\n햄버거를 선택하셨습니다.");
//			price = 1500 * amountInt;
//			break;
//		} else if (selectedMenu == '3') {
//			printf("\n콜라를 선택하셨습니다.");
//			price = 800 * amountInt;
//			break;
//		} else if (selectedMenu == '4') {
//			printf("\n핫바를 선택하셨습니다.");
//			price = 1200 * amountInt;
//			break;
//		} else if (selectedMenu == '5') {
//			printf("\n초코우유를 선택하셨습니다.");
//			price = 1500 * amountInt;
//			break;
//		} else {
//			printf("\n메뉴 중에서 선택해주세요...-_-");
//		}
//	}	return 0;
//}



//int main()
//{
//   int m,v;
//   printf("1.콜라 300원   2.쥬스 500원\n");
//
//   
//   
//   while(1)
//   
//   {
//      scanf("%d", &v);
//      if (v==1)
//      {
//         printf("cola\n");
//      }
//      if (v==2)   
//      {
//         printf("juice\n");
//      }
//      
//      else if (v==0)
//      {
//         printf("end");
//         break;
//      }
//
//   }
//}

//void main()
//{
//	int a[20];
//	
//	a[1]=10;
//	printf("%d\n",a[1]);
//}

//int main(void)
//{
//	int a[10]={0,1,2,3,4,5,6,7,8,9};
//	int i;
//	
//	for(i=0;i<10;i++)
//	{
//		printf("%d\n",a[i]);
//	}
//	return 0;
//}

//int main(void)
//{
//	int a[5]={1,2,3,4,5};
//		int i;
//	
//	for(i=0;i<5;i++)
//	{
//		printf("%d ",a[i]);
//	}
//	
//	printf("\n");
//	
//	for(i=4;i>=0;i--)
//	{
//		printf("%d ",a[i]);
//	}
//		return 0;
//}

//int main(void)
//{
//	char data[5]={'l','a','l','a',0};
//		printf("%s\n",data);
//		
//}

//void main()
//{
//	char data[6]="happy";
//	int count=0;
//	while (data[count]!=0)
//	{
//	count++;
//		
//	}
//}


//int GetStringLengh(char data[])
//{
//	int count=0;
//	while(data[count]) count ++;
//	return count;
//}

#include <string.h>

//void main()
//{
//	char data[10]={'a','b','c',0};
//	char result[7];
//	
//	strcpy(result,data);
//	strcat(result,"def");
//	
//	printf("%s+\"def\"=%s\n",data,result);
//}


//void main()
//{
//	int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//	int i,j;
//	for(i=0;i<4;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			printf("%d\t",a[i][j]);
//		}
//		printf("\n");
//	}
//}

//void main()  
//{
//	int a[2][9]
//}

//void main()
//{
//
//	int i=10, j=20;
//	
//	int temp=0;
//	temp=i;
//	i=j;
//	j=temp;
//			printf("%d,%d",i,j);
//}

//void main()  숫자 뒤집기 
//{
//	int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//	int i,j;
//	for(i=3;i>=0;i--)
//	{
//		for(j=3;j>=0;j--)
//		{
//			printf("%d\t",a[i][j]);
//		}
//		printf("\n");
//	}
//}


//void main()
//{
//	 printf("before\n");
//int a[2][3]={{1,2,3},{4,5,6}};
//int i,j;
//	for(i=0;i<2;i++){
//		for(j=0;j<3;j++)
//		{
//			printf("%d",a[i][j]);
//		}
//		printf("\n");
//	}
//	
//	  printf("after\n");
//   for(i=0;i<3;i++)
//   {
//      for(j=0;j<2;j++)
//         {
//            printf("%d ",a[j][i]);
//         }
//      printf("\n");   
//   
//   }
//}


//void main() 나열 후 덧셈 
//{
//	int a[5]={1,2,3,4,5};
//	int i,sum=0;
//	for(i=0;i<5;i++){
//	sum=sum+a[i];
//	
//		printf("%d",a[i]);
//	}
//	printf("\n");
//	printf("%d",sum);
//}

//void main() 문자 하나하나 출력 
//{
//	char data[5]={'h','e','l','l','o'};
//	int i;
//	for (i=0;i<5;i++)
//		printf("%c",data[i]);
//}

//void main() 문자열 
//{
//	char data[6]={'h','e','l','l','o',0};
//		printf("%s",data);
//}

//void main()
//{
//	char a[]="hello";
 //		printf("%s",a);
//}

//void main()
//{
//	int ssibal[2][3]={{1,2,3},{4,5,6}};
//	int i,j;
//	for(i=1;i>=0;i--)
//	{
//		for(j=2;j>=0;j--)
//		{
//			printf("%d",ssibal[i][j]);
//		}
//		printf("\n");
//	} 		
//}


//void main() 
//{
//	int ssibal[2][3]={{1,2,3},{4,5,6}};
//	int i,j;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<2;j++)
//		{
//			printf("%d",ssibal[j][i]);
//		}
//		printf("\n");
//	} 		
//}


//int main(void)
//{
//	int i,j,temp=0;
//	int num[5]={5,2,3,4,1};
//	
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(num[i]<num[j]){
//			temp=num[i];
//			num[i]=num[j];
//			num[j]=temp;
//			}	
//		}
//		
//	}
//	
//	printf("오름차순 정렬 후:");
//		for(i=0;i<5;i++)
//		{
//			printf("%d",num[i]);
//		}
//	
//}


//int main(void)
//{
//	int a,b,c;
//	scanf("%d",&a)
//	if(
//	)
//}

//void qwer()
//{
//	int c=0;
//	c=a+b;
//	
//}

//#include<stdio.h>사 칙연산 
//void main() {
//   int num1, num2, op;
//
//   printf("연산할 두 개의 값을 입력하세요\n");
//   printf("첫 번째 값 : "); 
//   scanf("%d", &num1);
//   printf("두 번째 값 : ");
//   scanf("%d", &num2);
//   printf("\n");
//
//   printf("연산을 할 숫자를 입력하세요.\n");
//   printf("1. + (더하기), 2. - (빼기), 3. * (곱하기), 4. / (나누기) : ");
//   scanf_s("%d", &op);
//
//   printf("\n==================\n\n");
//
//   if (op == 1 || op == 2 || op == 3 || op == 4) {
//      printf("연산 결과는 아래와 같습니다.\n");
//      if (op == 1) {
//         printf("%d + %d = %d\n", num1, num2, num1 + num2);
//      }
//      if (op == 2) {
//         printf("%d - %d = %d\n", num1, num2, num1 - num2);
//      }
//      if (op == 3) {
//         printf("%d * %d = %d\n", num1, num2, num1 * num2);
//      }
//      if (op == 4) {
//         printf("%d / %d = %f\n", num1, num2, (float)num1 / (float)num2);
//      }
//   }
//   else {
//      printf("잘못된 연산입니다.\n\n");
//   }
//} 

// int main(void) 
// {
// 
// 	printf("hello");
// 	return 0;
// }
 
// int main(void) 문자 출력 
// {
// 	char a='a';
// 	printf("%c",a);
// }


//int main(void) 프린트 
//{
//	float num=10;
//	printf("%f",num);
//	return 0;
//	} 
	
	
//int main(void) 스캔 
//{
//	int num;
//	printf("값을 입력해주세요\n");
//	scanf("%d",&num);
//	return 0;
//}

//int main(void) 덧셈 
//{
//	int a,b;
//	printf("값을 입력해주세요\n");
//	scanf("%d %d",&a,&b);{
//}
//	printf("%d",a+b);
//	
//	return 0;
//}


//int main(void) 
//{
//	int num=20;
//	if(num==20);{
//		printf("%d",num);
//	}
//	return 0;
//}


//int main(void)
//{
//	int num=5;
//	if(num==20)
//	{
//		printf("o");}
//	else
//	{
//		printf("x");
//		}
//			
//	return 0;
//}


//int main(void)
//{
//	int num; scanf("%d",&num);
//	if(num>=90)
//	{		
//	printf("A");
//	}
//	else if(num<=90)
//	{		
//	printf("B");	
//	} 	
////		else if(70<&&num<=80)
////			{printf("c");}
////		else if(60<&&num<=70)
////		{printf("d");}
////		else if(num<=60)
////		{printf("f");}
//		
//	return 0;			
//}

//int main(void)
//{
//	int i,sum=0;
//	for(i=0;i<10;i++)	
//		sum=sum+i;
//	
//		printf("%d",sum);		
//	return 0;
//}


//int main(void)
//{
//	int i,j;
//	
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<=i;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//		for(i=0;i<2;i++)
//		{
//			for(j=2;j>i;j--)
//				{
//					printf("*");
//				}
//				printf("\n");
//		}
//		for(i=3;i>j;i--)
//		{
//			for(j=0;j<3;j++)
//			{
//				printf("*");
//				
//			}
//				printf("\n");
//		}
//		for(i=2;i>j;i--)
//		{
//			for(j=0;j<2;i++)
//			{
//				printf("*");
//			}
//		}
//		printf("\n");
//		
//	}



//int main(void)
//{
//	int i,j;
//	
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<=i;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//		for(i=0;i<2;i++)
//		{
//			for(j=2;j>i;j--)
//				{
//					printf("*");
//				}
//				printf("\n");
//		}
//		for(i=0;i<3;i++)
//		{
//			for(j=0;j<=i;j++)
//			{
//				printf("*");
//				
//			}
//				printf("\n");
//		}
//		
//		for(i=0;i<2;i++)
//		{
//			for(j=2;j>i;j--)
//			{
//				printf("*");
//			}
//		}
//		printf("\n");
//		
//	}

int main(void)
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
