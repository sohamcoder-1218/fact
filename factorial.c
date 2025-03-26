#include<stdio.h>
int factorial(int n)
{int fact;
    if(n==0)
    {
        return 1;
    }
    else
    {
        fact=n*factorial(n-1);
        return fact;
    }
}
int main(){
int n;
long fact;
printf("ENTER THE NUMBER= "); 
scanf("%d",&n);
fact=factorial(n);
printf("THE FACTORIAL OF %d IS %ld",n,fact);
    return 0;






}