#include<graphics.h>
#include<stdio.h>
 
void main()
{
        
 int r=5,n,i,x,y;
        setcolor(YELLOW);
        printf("ENTER THE NUMBER OF RINGS IN THE SPIRAL MODEL\n");
        scanf("%d",&n);
        printf("Enter the origin point of the spiral");
        scanf("%d%d",&x,&y);
        
        int graphdriver = DETECT, graphmode;
        initgraph(&graphdriver, &graphmode, "..\\bgi");
        for(i=0;i<n;i++)
        {
                 arc(x,y,0,180,r=r+2);
                 arc(x+2,y,180,360,r=r+2);
        }
   		delay(1000000);
        closegraph();
}
