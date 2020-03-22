#include <stdio.h> 
  
 
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b%a, a); 
} 
  
 
int main() 
{ 
    int inum1=0, inum2=0;

     printf("enter any two number"); 
  scanf("%d%d",&inum1,&inum2); 
    printf("GCD(%d, %d) = %d\n", inum1, inum2, gcd(inum1, inum2)); 
   
    return 0; 
} 
