#include <stdio.h>
#include <stdlib.h>
int fibo(int);
int main()
{
    int i, no,result;
    printf("Enter the range : ");
    scanf("%d", &no);
    for(i=1;i<=no;i++)
    {
        result=fibo(i);
        printf("%d\n",result);

    }

    return 0;
}
int fibo(int no)
{
    if(no==1)
        return 0;
    if(no==2)
        return 1;
    else
        return(fibo(no-1)+fibo(no-2));
}
