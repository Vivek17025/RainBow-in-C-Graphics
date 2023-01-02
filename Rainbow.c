#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    int x=getmaxx(),y=getmaxy();
    line(0,y,x,y);
    arc(x/2,y,0,180,30);
    arc(x/2,y,0,180,50);
    arc(x/2,y,0,180,70);
    arc(x/2,y,0,180,90);
    arc(x/2,y,0,180,110);
    arc(x/2,y,0,180,130);
    arc(x/2,y,0,180,150);
    arc(x/2,y,0,180,170);
    
	//Cloud	
    line(0,0,x,0);
	arc(200,0,180,270,20);
    ellipse(220,20,160,340,30,20);
    ellipse(255,20,200,0,30,20);
    arc(290,10,240,20,20);
    
    arc(330,0,180,270,20);
    ellipse(350,20,160,340,30,20);
    ellipse(370,20,200,0,30,20);
    arc(400,10,240,20,20);
    
    int skyblue=COLOR(135, 206, 235);
    setfillstyle(SOLID_FILL,skyblue);
    floodfill(100,100,WHITE);
    
    int violet=COLOR(148, 0, 211);
    setfillstyle(SOLID_FILL,violet);
    floodfill(x/2+40,y-1,WHITE);
    
    int indigo=COLOR(75, 0, 130);
    setfillstyle(SOLID_FILL,indigo);
    floodfill(x/2+60,y-1,WHITE);
    
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(x/2+80,y-1,WHITE);
    
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(x/2+100,y-1,WHITE);
    
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(x/2+120,y-1,WHITE);
    
    int orange=COLOR(255, 127, 0);
    setfillstyle(SOLID_FILL,orange);
    floodfill(x/2+140,y-1,WHITE);
    
    setfillstyle(SOLID_FILL,RED);
    floodfill(x/2+160,y-1,WHITE);
    getch();
}
