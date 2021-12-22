/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int i, num1, num2, min, hcf=1;
 printf("Enter any two numbers to find HCF: ");
 scanf("%d%d", &num1, &num2);
 min = (num1<num2) ? num1 : num2;
for(i=1; i<=min; i++)
 { 
 if(num1%i==0 && num2%i==0)
 {
 hcf = i;
 }
 }
 printf("HCF of %d and %d = %d\n", num1, num2, hcf);
 return 0;
}
