#include<stdio.h>
#include<graphics.h>

void floodFill(int,int,int,int);

void main()
{
	
	int x,y,r;
	printf("Enter the x and y co-ordinates of the circle: ");
	scanf("%d%d", &x,&y);
	printf("\n");
	printf("Enter the radius of the circle: ");
	scanf("%d", &r);
	int gd, gm = DETECT;
	initgraph(&gd,&gm,"");
	circle(x,y,r);
	floodFill(x,y,0,12);
	delay(100000);
	closegraph();
}

void floodFill(int x, int y, int old_color, int new_color)
{
	if(getpixel(x,y)==old_color)
	{
		putpixel(x,y,new_color);
		floodFill(x+1,y,old_color,new_color);
		floodFill(x,y+1,old_color,new_color);
		floodFill(x-1,y,old_color,new_color);
		floodFill(x,y-1,old_color,new_color);
	}
}
