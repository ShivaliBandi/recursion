#include<stdio.h>

int fibonacci(int);
 
 
int main(void)
{    
    int iterms;
    
    printf("Enter terms: ");
    scanf("%d", &iterms);       
    
    for(int icnt = 0; icnt < iterms; icnt++)
    {
        printf("%d ", fibonacci(icnt));
    }
    printf("\n");
    return 0; 
}
 
 
int fibonacci(int inum)
{    
    
    //base condition
    if(inum == 0 || inum == 1)
    {
        return inum;
    }
    
    else
    {
        // recursive call
        return fibonacci(inum-1) + fibonacci(inum-2);
    }
    
}