#include<stdio.h>
void printStar(int inum)
{
    if(inum>0)
    {
        printf("*  ");
        inum=inum-1;
        printStar(inum);
    }
    
}

int main()
{
    int inum=0;
    printf("how many times you want to print\n a '*'\n");
    scanf("%d",&inum);
    printStar(inum);
    printf("\n");
    return 0;
}