#include<stdio.h>
#include<graphics.h>
 

void bfill(int x0, int y0, int fc, int bc)
{

	if(getpixel(x0,y0)!=bc && getpixel(x0,y0)!=fc)
	{
		putpixel(x0,y0,fc);
		bfill(x0+1,y0,fc,bc);
		bfill(x0-1,y0,fc,bc);
		bfill(x0,y0+1,fc,bc);
		bfill(x0,y0-1,fc,bc);
	}
}
int main()
{
		int error, x, y, r;
		printf("Enter radius of circle: ");
		scanf("%d", &r);
		 
		printf("Enter co-ordinates of center(x and y): ");
		scanf("%d%d", &x, &y);
		int gdriver=DETECT,gd,gm;
		initgraph(&gd, &gm, " ");
		 
		circle(x, y, r);
		bfill(x,y,12,7);
		delay(10000);
		return 0;
}


