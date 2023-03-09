#include<stdio.h>
#include<math.h>
double power(double a,int n);
int main()
{
    double a;
    int n;
    printf("Enter the number and Exponent : ");
    scanf("%lf%d",&a,&n);
    printf("%lf",power(a,n));
    return 0;
}
double power(double a,int n)
{
   int i;
   double p = 1;
   if(n==0)
            return 1;
   else
   {
            for(i=1;i<=n;i++)
                    p*=a;
            if(n>0)
                    return p;
            else    
                    return 1/p;
   } 
}