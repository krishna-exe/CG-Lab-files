#include<stdio.h>
#include<graphics.h>
void bfill(int,int,int,int);
void main()
{
	int x,y,r,x1,y1,c;
	
	printf("Enter the radius of the circle: ");
	scanf("%d",&r);
	printf("Enter the initial co-ordinates of the circle: ");
	scanf("%d%d",&x,&y);
	printf("Enter the final co-ordinates of the circle:");
	scanf("%d%d",&x1,&y1);
	
	int gd=DETECT, gm;
	initgraph(&gd,&gm,"");
	circle(x,y,r);
	while(1)
	{
		cleardevice();
		if(x==x1&&y<y1)
		{
			y+=1;
			circle(x,y,r);
		}
		else if(y==y1&&x<x1)
		{
			x+=1;
			circle(x,y,r);
		}
		else if(x==x1&&y==y1)
			 break;
		
		else{
			x+=1;
			y+=1;
			circle(x,y,r);
		}
		//bfill(x,y,100,1);
		delay(200);
	}
	circle(x1,y1,r);
	delay(9000);
	closegraph();
}

/*void bfill(int x,int y,int fc,int bc)
{
	if(getpixel(x,y)!=fc&&getpixel(x,y)!=bc)
	{
		putpixel(x,y,fc);
		bfill(x+1,y,fc,bc);
		bfill(x,y+1,fc,bc);
		bfill(x-1,y,fc,bc);
		bfill(x,y-1,fc,bc);
	}
}*/

