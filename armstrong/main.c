#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,temp,sum=0,rem;
    printf("Enter any number : ");
    scanf("%d",&num);
    temp=num;

    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
    }
    if (num==sum)

        printf(" %d is a armstrong number",num);

    else

        printf("is not armstrong number");


    return 0;
}
