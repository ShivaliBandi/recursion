#include<stdio.h>
int factorial(int inum)
{

    if(inum>0)
    {
        //printf("*  ");
        inum*=inum;
        inum--;
        factorial(inum);
    }
    return inum;
}

int main()
{
    int inum=0;
    printf("enter a number\n");
    scanf("%d",&inum);
   int iret= factorial(inum);
    printf("factorial is %d\n",iret);
    return 0;
}