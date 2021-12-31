#include <stdio.h> 

int main (void)
{
    
   short int test_cases; 
   scanf(" %d",&test_cases); 
   
   for (int i = 0; i < test_cases; i++)
   {
       int x,y;
       int sum = 0; 
       scanf(" %d%d",&x,&y); 
       x = x % 2 == 0? x + 1: x; 
       for (int k = y - 1; k >= 0; k--)
       {
           sum = sum + x; 
           x += 2; 
       }
       printf("%d\n",sum); 
   }
    
    return 0; 
}
