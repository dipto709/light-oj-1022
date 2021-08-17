#include<stdio.h>
#include<math.h>
#define pi 2*acos(0.0)
int main()
{
int tCase,nCase;
scanf("%d",&nCase);
for(tCase=1;tCase<=nCase;tCase++)
{
double r,a,b,c;
scanf("%lf",&r);
a=(2*r)*(2*r);
b=pi*r*r;
c=a-b;
printf("Case %d: %.2lf\n",tCase,c);
}
   
return 0;
}