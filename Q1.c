#include <stdio.h>
int main(){
int n,t,r,c=0,s=0,p,i;
printf("Enter a number: ");
scanf("%d",&n);
t=n;
for(t=n;t!=0;t/=10) 
c++;
for(t=n;t!=0;t/=10){
r=t%10; p=1;
for(i=0;i<c;i++)
p*=r; s+=p;}
if(s==n)printf("Armstrong");
else printf("Not Armstrong");
return 0;
}
