#include <stdio.h>
int main(){
int n,i,a[100];
printf("Enter size: ");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<n;i++)scanf("%d",&a[i]);
for(i=0;i<n;i++){
if(a[i]==99){
printf("First occurrence at index %d",i);
break;
}
}
if(i==n)printf("99 not found");
return 0;
}

