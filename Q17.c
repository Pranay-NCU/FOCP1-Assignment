#include <stdio.h>
int main(){
int n,i,a[100],p,m;
printf("Enter size: ");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<n;i++)scanf("%d",&a[i]);

printf("Enter pos (1=front,2=mid,3=end): ");
scanf("%d",&p);

printf("Before: ");
for(i=0;i<n;i++)printf("%d ",a[i]);
printf("\n");

if(p==1){
for(i=0;i<n-1;i++)a[i]=a[i+1];
n--;
}
else if(p==2){
m=n/2;
for(i=m;i<n-1;i++)a[i]=a[i+1];
n--;
}
else if(p==3){
n--;
}

printf("After: ");
for(i=0;i<n;i++)printf("%d ",a[i]);
return 0;
}
