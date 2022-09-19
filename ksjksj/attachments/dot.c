#include<graphics.h>
#include<math.h>

void main()
{
	int x1,x2,y1,y2;
	printf("Enter the coordinates: ");
	scanf("%d%d%d%d", &x1,&y1,&x2,&y2);
	int gd= DETECT,gm;
	initgraph(&gd,&gm," ");
	int dx=x2-x1,dy=y2-y1,steps;
	
																																					
	if(abs(dx)>abs(dy))
		steps=dx;
	else
		steps=dy;
	putpixel(x1,y1,15);
	float xi=dx/steps, yi=dy/steps;
	
	
	for(int i=0;i<=steps;i++)
	{
		x1+=4;
		y1+=4;
		putpixel(round(x1),round(x2),RED);
		
	}	 
	delay(9000);
	closegraph();
}
