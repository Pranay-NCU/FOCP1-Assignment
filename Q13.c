#include <stdio.h>
int main(){
int n,i,a[100];
printf("Enter size: ");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<n;i++)scanf("%d",&a[i]);
for(i=0;i<n;i++){
if((i==0||a[i]>=a[i-1])&&(i==n-1||a[i]>=a[i+1])){
printf("Peak element = %d at index %d",a[i],i);
break;
}
}
if(i==n)printf("No peak found");
return 0;
}
