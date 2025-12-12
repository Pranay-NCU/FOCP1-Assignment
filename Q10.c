#include <stdio.h>
int main(){
int n,i,a[100],c=0;
printf("Enter number of students: ");
scanf("%d",&n);
printf("Enter marks: ");
for(i=0;i<n;i++)scanf("%d",&a[i]);
printf("Students with 99:\n");
for(i=0;i<n;i++){
if(a[i]==99){
printf("Student %d\n",i+1);
c++;
}
}
printf("Total = %d",c);
return 0;
}
