#include<stdio.h>

void decimalToBinary(int n) 
{ 
    // Base case 
    if (n == 0) { 
        printf("0  "); 
        return; 
    } 
  
    // Recursive call 
    decimalToBinary(n / 2); 
    printf("%d  ",n%2); 
} 
  
// Driver code 
int main() 
{ 
    int inum=0;
    printf("enter a decimal number"); 
  scanf("%d",&inum);
    decimalToBinary(inum); 
  
    return 0; 
} 