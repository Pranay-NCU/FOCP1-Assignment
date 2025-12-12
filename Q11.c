#include <stdio.h>
int main(){
int n,i,a[100],e[100],o[100],ec=0,oc=0;
printf("Enter number of scores: ");
scanf("%d",&n);
printf("Enter scores: ");
for(i=0;i<n;i++)scanf("%d",&a[i]);
for(i=0;i<n;i++){
if(a[i]%2==0)e[ec++]=a[i];
else o[oc++]=a[i];
}
printf("Even array: ");
for(i=0;i<ec;i++)printf("%d ",e[i]);
printf("\nOdd array: ");
for(i=0;i<oc;i++)printf("%d ",o[i]);
return 0;
}
