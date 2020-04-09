
/*int main()
{
  int a[3][4],i,j;
  for(i=0;i<3;i++)
  {
      for(j=0;j<4;j++)
      {
          printf("enter the  elements");
          scanf("%d",&a[i][j]);
      }
  }
  for(i=0;i<3;i++)
  {
      for(j=0;j<4;j++)
      {
          printf("\t%d",a[i][j]);
      }
      printf("\n");
  }
    return 0;
}
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*#include/* <stdio.h>

int main()
{
    int i,j,n,N;
    printf("enter the no. of row");
    scanf("%d",&n);
    N=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
       {

          printf("%d",N);
          }
          N++;
          printf("\n");
    }
   int p=N-1;
    N=p-1;
      for(i=n-1;i>=1;i--)
       {
                for(j=1;j<=i;j++)
          {

               printf("%d",N);
             }
             N--;
             printf("\n");

    }
    return 0;*/

/*#include<stdio.h>
void find_all_triplets(int arr[], int n, int sum)
{
    int i,j,k;
for( i = 0;i<n-2; i++)
{
for(j = i + 1; j < n-1; j++)
{
for(k = j + 1; k <n; k++)
{
if (arr[i] + arr[j] + arr[k] == sum)
{
printf("%d,%d,%d",arr[i],arr[j],arr[k]);
}}}}}

int main()
{
int n, sum;
printf("\nEnter the number of elements : ");
scanf("%d",&n);
int arr[n];
printf("\nInput the array elements : ");
for(int i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
printf("\nEnter the sum value : ");
scanf("%d",&sum);
printf("\nThe triplets are \n ");
find_all_triplets(arr, n, sum);
return 0;
}*/
/*#include<stdio.h>
int main()
{

    int a[100],i,j,k,n;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("Enter the number :");
    scanf("%d",&k);
    printf("enter the elemnt : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k-1;i++)
    {
        for(j=0;j<k-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
      for(i=k;i<n-1;i++)
    {
        for(j=k;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\n after sorting array");
    for(i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
    return 0;
}*/
/*int main()
{
   char text[100], blank[100];
   int c = 0, d = 0;

   printf("Enter some text\n");
   gets(text);

   while (text[c]!= '\0')
   {
      if (!(text[c] == ' ' && text[c+1] == ' ')) {
        blank[d] = text[c];
        d++;
      }
      c++;
   }

   blank[d] = '\0';

   printf("Text after removing blanks\n%s\n", blank);

   return 0;
}*/

#include <stdio.h>
#include<string.h>

int main()
{
    char a[100];
    scanf("%s",a);
    strrev(a);
    printf("%s",a);

    return 0;
}
