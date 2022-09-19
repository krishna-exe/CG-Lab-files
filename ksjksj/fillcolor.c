#include<stdio.h>
#include<graphics.h>
void bfill(int,int,int,int);
void main()
{
	int x,y,r,bc,fc;
	printf("Enter the centre co-ordinates of circle: ");
	scanf("%d%d",&x,&y);
	printf("Enter the radius of circle: ");
	scanf("%d",&r);
	printf("Enter the boundary color code: ");
	scanf("%d",&bc);
	printf("Enter the fill color code: ");
	scanf("%d",&fc);
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	putpixel(x,y,YELLOW);
	setcolor(bc);
	circle(x,y,r);
	bfill(x,y,fc,bc);
	delay(100000);
	closegraph();
}

void bfill(int x, int y, int fc, int bc)
{

	if(getpixel(x,y)!=bc && getpixel(x,y)!=fc)
	{
		putpixel(x,y,fc);
		bfill(x+1,y,fc,bc);
		bfill(x-1,y,fc,bc);
		bfill(x,y+1,fc,bc);
		bfill(x,y-1,fc,bc);
	}
}
	
	
	
