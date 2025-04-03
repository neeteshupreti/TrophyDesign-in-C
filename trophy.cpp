#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
	initwindow(450,500,"TROPHY");
	
	ellipse(200,150,170,8,50,100);//left edge of trophy
    rectangle(144,129,255,137);//trophy mathi ko rectangle
    
	//color filling for second last rectangle
    setfillstyle(SOLID_FILL,RED);
    floodfill(150,133,WHITE);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(200,240,WHITE);
	
	arc(88,268,318,16,100);//left arc of trophy
	arc(88,268,319,13,100);
	arc(310,268,163,222,100);//right arc of trophy
	arc(310,268,168,221,100);
	rectangle(151,334,245,343);// trophy muni ko second last rectangle
	
	//color filling for second last rectangle
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(160,340,WHITE);
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(160,340,WHITE);
    
	rectangle(125,343,271,378);//trophy muni ko last rectangle
    
	//color filling for last recangle
	setfillstyle(SOLID_FILL,BROWN);
  	floodfill(130,370,WHITE);
 	
	line(178,162,216,162);//up line inside the trophy
	line(182,199,216,199);//down line inside the trophy
	line(172,187,172,173);//left line
	line(226,185,226,175);//right line
	arc(162,157,301,346,20);//left up arc
	arc(162,203,7,63,20);//left down arc
	arc(235,157,198,244,20);//right up arc
	arc(235,203,113,164,20);//right down arc
 	
	setfillstyle(SOLID_FILL,RED);
 	floodfill(180,178,WHITE);
 	
	ellipse(172,185,115,256,50,25);
	ellipse(162,185,103,270,50,30);
    
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(119,180,WHITE);
	
	ellipse(226,186,286,64,50,25);
    ellipse(233,187,276,72,50,30); 
    
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(279,185,WHITE);
	
	setcolor(WHITE);
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	outtextxy(149,348,"WINNER!");
	
	//color filling for inside neck of the trophy
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(200,280,WHITE);
	
	setcolor(RED);
	ellipse(200,150,170,172,50,100);
	
	getch();

}