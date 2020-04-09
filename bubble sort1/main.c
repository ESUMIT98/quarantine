#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,c,d,swap;
    printf("enter no of elements\n : " );
    scanf("%d",&n);
    for(c=0;c<n;c++)
    {
        printf("Enter the elements : ");
        scanf("%d",&a[c]);
    }
    for(c=0;c<n;c++)
    {
        for(d=0;d<n-1;d++)
        {
            if(a[d]>a[d+1])
            {
                swap=a[d];
                a[d]=a[d+1];
                a[d+1]=swap;
            }
        }
    }
    printf("sorted list in ascending order:\n");
    for(c=0;c<n;c++)
    {
        printf("%d\n",a[c]);
    }
    return 0;
}
