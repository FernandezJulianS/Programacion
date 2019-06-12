//Julian Fernandez Suarez  Cod. 20191005044
#include <winbgim.h>
#include <iostream>

using namespace std;

void waitForLeftMouseClick();


int main()
{
    initwindow(600,400);


     line(35,50,560,50);
     line(35,75,560,75);
     line(35,100,560,100);
     line(35,125,560,125);
     line(35,150,560,150);
     line(35,175,560,175);
     line(35,200,560,200);
     line(35,225,560,225);
     line(35,250,560,250);
     line(35,275,560,275);
    setfillstyle(1,3);
    bar(50,275,75,249);
     setfillstyle(1,1);
    bar(200,275,225,225);
     setfillstyle(1,6);
    bar(250,275,275,175);
     setfillstyle(1,2);
    bar(300,275,325,150);
     setfillstyle(1,5);
    bar(350,275,375,74); 
    setfillstyle(1,4);
    bar(400,275,425,200);
     setfillstyle(1,8);
    bar(450,275,475,100); 
     setfillstyle(1,12);
    bar(500,275,525,124);
    settextstyle(1,0,1.5);
    setcolor(10);
    outtextxy(32,8,"Numeros Del Documento");
    settextstyle(1,0,1);
    setcolor(15);
    outtextxy(10,40,"9");
    outtextxy(10,65,"8");
    outtextxy(10,90,"7");
    outtextxy(10,115,"6");
    outtextxy(10,140,"5");
    outtextxy(10,165,"4");
    outtextxy(10,190,"3");
    outtextxy(10,215,"2");
    outtextxy(10,240,"1");
    outtextxy(10,265,"0");
    outtextxy(55,280,"1");
    outtextxy(105,280,"0");
	outtextxy(155,280,"0");
	outtextxy(205,280,"2");
	outtextxy(255,280,"4");
	outtextxy(305,280,"5");
	outtextxy(355,280,"8");
	outtextxy(405,280,"3");
	outtextxy(455,280,"7");
	outtextxy(505,280,"6");
	setcolor(3);
	outtextxy(55,228,"1");
    setcolor(1);
	outtextxy(205,205,"2");
    setcolor(6);
	outtextxy(255,155,"4");
    setcolor(2);
	outtextxy(305,130,"5");
    setcolor(5);
	outtextxy(355,53,"8");
    setcolor(4);
	outtextxy(405,178,"3");
    setcolor(8);
	outtextxy(455,78,"7");
    setcolor(12);
	outtextxy(505,102,"6");

    waitForLeftMouseClick();


    closegraph();
	return 0;
}

void waitForLeftMouseClick()
{
    clearmouseclick(WM_LBUTTONDOWN);
    const int DELAY = 50; // Milliseconds of delay between checks
    int x, y;
    while (!ismouseclick(WM_LBUTTONDOWN))
        delay(DELAY);
    getmouseclick(WM_LBUTTONDOWN, x, y);
}
