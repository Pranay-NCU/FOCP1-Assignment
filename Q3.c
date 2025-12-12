#include <stdio.h>
int main(){
int a,b,c,d=0;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
for(d=1;b!=0;d++){
c=(~a)&b;
a=a^b;
b=c<<1;
}
printf("Result = %d",a);
return 0;
}
