#include<stdio.h>
int main()
{
    // input 5 ---> 5 10 15 20 25 30 35 40 45 50
    int n,i;
    printf("Enter any Number: ");
    scanf("%d" ,&n);// n=7
    for(i=1;i<=10;i++)// i=10 10<=10
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}
