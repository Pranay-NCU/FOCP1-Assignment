#include <stdio.h>
int main(){
int x,y;
printf("Enter coordinates: ");
scanf("%d%d",&x,&y);
if(x>0&&y>0)printf("Quadrant 1");
else if(x<0&&y>0)printf("Quadrant 2");
else if(x<0&&y<0)printf("Quadrant 3");
else if(x>0&&y<0)printf("Quadrant 4");
else if(x==0&&y==0)printf("Origin");
else if(x==0)printf("Y-axis");
else printf("X-axis");
return 0;
}
