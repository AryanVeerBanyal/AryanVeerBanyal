#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter Start Number\n");
    scanf("%d",&i);
    printf("Enter Stop Number\n");
    scanf("%d",&j);
    while(i<=j)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
        i++;
    }return 0;
}
