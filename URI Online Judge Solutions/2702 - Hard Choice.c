#include <stdio.h> 

int main (void)
{
    int Ca, Ba, Pa; 
    int Cr, Br, Pr; 
    
    
    scanf("%d%d%d",&Ca,&Ba,&Pa);
    scanf("%d%d%d",&Cr,&Br,&Pr);
    
    int sum = 0; 
    
    sum = (Ca >= Cr)? sum : sum + (Cr - Ca);
    sum = (Ba >= Br)? sum : sum + (Br - Ba);
    sum = (Pa >= Pr)? sum : sum + (Pr - Pa);
    
    printf("%d\n",sum);
    return 0;
}
