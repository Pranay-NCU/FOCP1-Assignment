#include <stdio.h>
int h(int a,int b){
if(b==0)return a;
return h(b,a%b);
}
int main(){
int a,b;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
printf("HCF = %d",h(a,b));
return 0;
}
