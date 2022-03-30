#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
  printf("Enter the strings\n");
  scanf("%s",a);
}
int count_words(char *a)
{
  int i=0;
  int no_words=0;
  for(int i=0;a[i]!=0;i++)
    {
      if(a[i]==' ' || a[i]== '\n' || a[i]=='\t')
      {
        no_words++;
      }
      i++;
    }
  return i;
}
void output(char *a ,int no_words)
{
  printf("%d is the number of words\n",no_words+1);
}
int main()
{
  char a[50];
  int no_words;
  input_string(a);
  no_words=count_words(a);
  output(a,no_words);
  return 0;
}
