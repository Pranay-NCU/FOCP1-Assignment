// Temporary Variable
#include <stdio.h>
int main(){
int a,b,t;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
t=a;a=b;b=t;
printf("%d %d",a,b);
return 0;
}

// + and -
#include <stdio.h>
int main(){
int a,b;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
a=a+b;b=a-b;a=a-b;
printf("%d %d",a,b);
return 0;
}

// Bitwise

#include <stdio.h>
int main(){
int a,b;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
a=a^b;b=a^b;a=a^b;
printf("%d %d",a,b);
return 0;
}

// Pointers
#include <stdio.h>
void s(int *x,int *y){
int t=*x;*x=*y;*y=t;
}
int main(){
int a,b;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
s(&a,&b);
printf("%d %d",a,b);
return 0;
}

