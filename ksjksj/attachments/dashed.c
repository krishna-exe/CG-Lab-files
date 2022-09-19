#include<stdio.h>
#include<graphics.h>
void main()
{

int gd,gm,dx,dy,x1,y1,Xn,Yn,M;
printf("Enter the starting co-ordinates:");
scanf("%d%d",&x1,&y1);
printf("Enter the ending co-ordinates:");
scanf("%d%d",&Xn,&Yn);
M=(Yn-y1)/(Xn-x1);


gd=DETECT;
initgraph(&gd,&gm,"");

for(int i=x1;i<=Xn;i++)
{
 if(M<=1)
{
dx=1;
dy=M*dx;
}
else
{
dy=1;
dx=dy/M;
}
x1=x1+dx;
y1=y1+dy;
delay(100000);
putpixel(x1,y1,34);
}
getch();
closegraph();
}
