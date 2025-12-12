#include <stdio.h>
int main(){
int n,i,j,a[100],f=0;
printf("Enter size: ");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<n;i++)scanf("%d",&a[i]);

printf("Duplicates: ");
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(a[i]==a[j]){
printf("%d ",a[i]);
f=1;
break;
}
}
}
if(!f)printf("-1");
return 0;
}
