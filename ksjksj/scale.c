#include<stdio.h>
#include<graphics.h>
void main()
{
	int x,y,x1,y1,r,r1,rx;
	printf("Enter the radius of the circle: ");
	scanf("%d", &r);
	printf("Enter the co-ordinates of the circle: ");
	scanf("%d%d",&x,&y);
	printf("Enter the Scaling factor ");
	scanf("%d%d",&rx);
	int gd=DETECT, gm;
	initgraph(&gd,&gm,"");
	circle(x,y,r);
	r1=r*rx;
	while(r1>r)
	{
		cleardevice();
		r1+=1;
		circle(x,y,r1);
		delay(50);
	}
	delay(9000);
	closegraph();
}
	
	
