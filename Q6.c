#include <stdio.h>
int main(){
int ch,n,r,d=0,b=0,p=1,i=0;
printf("Enter choice (1=Bin->Dec, 2=Dec->Bin): ");
scanf("%d",&ch);
if(ch==1){
printf("Enter binary: ");
scanf("%d",&n);
for(i=0;n!=0;i++){
r=n%10;d+=r*p;p*=2;n/=10;
}
printf("Decimal = %d",d);
}
else if(ch==2){
printf("Enter decimal: ");
scanf("%d",&n);
for(i=0;n!=0;i++){
r=n%2;b=b*10+r;n/=2;
}
for(i=0;b!=0;i++){
printf("%d",b%10);
b/=10;
}
}
else printf("Invalid");
return 0;
}
