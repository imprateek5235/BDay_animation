
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
 int gd=DETECT,gm,i=1;
 clrscr();

 initgraph(&gd,&gm,"C:\\TC\\BGI");
 printf("A Friend Like You Is Hard To Find\nYou Are So Loving And So Kind\nBless You On Your Special Day\nA Very Happy Birthday:-\n\n\n\n");
 settextstyle(BOLD_FONT,HORIZ_DIR,4);
 setcolor(1);
 outtextxy(180,50," (krish)");
 printf(" Happy Birthday \n Beautiful Friend \n May Your Day Be \n As Beautiful \n As You");

 setcolor(9);
 for(;i<50;i++){
 line(350+i,300+i,500+i,300+i);
 delay(30);  }
 line(350,301,350,440);
 line(500,301,500,440);
 line(400,350,400,440);
 line(549,350,549,440);

 setcolor(14);
 circle(420,265,1);
 circle(430,265,1);
 circle(440,265,1);
 circle(450,265,1);

 setcolor(4);
 line(420,265,420,275);
 line(430,265,430,275);
 line(440,265,440,275);
 line(450,265,450,275);

 setcolor(12);
 for(i=1;i<=40;i++){
 line(410,275+i,460,275+i);
 delay(40);}

 putpixel(410,315,8);
 putpixel(410,314,8);
 putpixel(411,315,8);
 putpixel(412,315,8);
 putpixel(410,313,8);

 putpixel(460,315,8);
 putpixel(460,314,8);
 putpixel(459,315,8);
 putpixel(458,315,8);
 putpixel(460,313,8);

 setcolor(8);
 for(i=1;i<10;i++){
 line(0,440+i,600,440+i);
 delay(50); }

 setcolor(15+128);
 circle(320,240,20);
 line(320,260,320,390);

 line(320,290,360,300);
 line(360,300,410,275);

 line(320,305,360,310);
 line(360,310,410,275);

 line(320,390,290,440);
 line(320,390,350,440);
 getch();
 closegraph();
}

