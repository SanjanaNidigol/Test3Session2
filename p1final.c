#include<stdio.h>
void input(int *num1,int *den1,int *num2,int *den2)
{
  printf("Enter the values of num1,den1,num2 and den2\n");
  scanf("%d%d%d%d",num1,den1,num2,den2);
}
void add(int num1,int den1,int num2,int den2,int *num3,int *den3,int *gcd)
{
  int i;
  *num3=(num1*den2)+(num2*den1);
  *den3=den1*den2;
  for(i=1;i<=*num3 && i<=*den3;++i)
    {
      if(*num3%i==0 && *den3%i==0)
      *gcd =i;
    }
}
void output(int num1,int den1,int num2,int den2,int num3,int den3,int gcd)
{
  printf("The sum of two fraction is %d/%d\n",num3/gcd,den3/gcd);
}
int main()
{
  int num1,den1,num2,den2,num3,den3,gcd;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3,&gcd);
  output(num1,den1,num2,den2,num3,den3,gcd);
  return 0;
}








/*#include <stdio.h>
void input(int *num1,int *den1,int *num2,int *den2)
{
  printf("enter fraction in format a b\n");
  scanf("%d %d",num1,den1);
  printf("enter fraction in format a b\n");
  scanf("%d %d",num2,den2);
}
void add(int num1,int den1,int num2,int den2,int *num3,int *den3)
{ 
  int gcd;
  *num3=num1*den2+num2*den1;
  *den3=den1*den2;
  22
  *num3=*num3/gcd;
  *den3=*den3/gcd;
}
void output(int num1,int den1,int num2,int den2,int num3,int den3)
{
  printf("%d/%d + %d/%d=%d/%d\n",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int num1,den1,num2,den2,num3,den3;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
}*/