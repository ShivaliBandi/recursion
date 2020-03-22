#include<stdio.h>
void factors(int inum)
{
    static int i=2;
    if (i<inum)
    {
        if(inum%i==0)
           printf("%d  ",i);
        i++;
    factors(inum);
    }
   
    

}

int main()
{
    int inum;
    printf("enter any  number\n");
    scanf("%d",&inum);
    factors(inum);
    printf("\n");

    return 0;
}