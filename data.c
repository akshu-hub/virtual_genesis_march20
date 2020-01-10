#include<stdio.h>
#include<string.h>
int main()
{
 char *data[]={"Hi","Iam akshata","Iam twenty years old","AND","Iam enginear"};
 int i;
 printf("MYdata is:");
 for(i=0;i<5;i++)
 {
  printf("\t%s",data[i]);
 }
return 0;
}
