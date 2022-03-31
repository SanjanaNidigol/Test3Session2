#include<stdio.h>
int input_degree()
{
  int a;
  printf("Enter the degree\n");
  scanf("%d",&a);
  return a;
}
float input_x()
{
  float k;
  printf("Enter the value of x\n");
  scanf("%f",&k);
  return k;
}
void input_coefficient(int n,float a[n])
{
  printf("Enter the coefficients of x\n");
  for(int i=n;i>=0;i--)
    {
      scanf("%f",&a[i]);
    }
}
float evaluate_polynomial(int n,float a[n],float x)
{
  int result=0;
  for(int i=n;i>0;i--)
     {
       result=result+a[i]*x;
     }
  result=result+a[0];
  return result;
}
void output(int n,float a[n],float x, float result)
{
  printf("%f",result);
}
int main()
{
  int n;
  float x;
  n=input_degree();
  x=input_x();
  float a[n],result;
  input_coefficient(n,a);
  result=evaluate_polynomial(n,a,x);
  output(n,a,x,result);
  return 0;
}