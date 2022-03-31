#include<stdio.h>
void input_n_r(int *n,int *r)
{
  printf("Enter the value of n\n");
  scanf("%d",n);
  printf("Enterv the value of r\n");
  scanf("%d",r); 
}
int ncr(int n,int r)
{
  int i;
  int c=n-r;
  int n1=1,c1=1,r1=1;
  for(int i=1;i<=n;i++)
    {
      n1=n1*i;
    }
  for(int i=1;i<=c;i++)
    {
      c1=c1*i;
    }
  for(int i=1;i<=r;i++)
    {
      r1=r1*i;
    }
  int res=n1/(c1*r1);
  return res;
}
void output(int n,int r,int res)
{
  printf("%d is the value ncr for given value of n and r \n",res);
}
int main()
{
  int n,r,res;
  input_n_r(&n,&r);
  res=ncr(n,r);
  output(n,r,res);
  return 0;
}

