#include <stdio.h>
int main(){
int n,i,j,a[100],c=0,f;
printf("Enter size: ");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<n;i++)scanf("%d",&a[i]);
for(i=0;i<n;i++){
if(a[i]<2)continue;
f=1;
for(j=2;j*j<=a[i];j++){
if(a[i]%j==0){f=0;break;}
}
if(f)c++;
}
printf("Total primes = %d",c);
return 0;
}
