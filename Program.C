#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
  int gd = DETECT,gm;
  initgraph(&gd,&gm,"C:\\TC\\BGI") ;
  for(int x = 0;x<650;x+=10)
{
  cleardevice();
  //--------- --Building-----------
  setfillstyle(SOLID_FILL,GREEN);
  rectangle(150,300,0,200);
  floodfill(1,229,WHITE);
  setfillstyle(SOLID_FILL,DARKGRAY);
  line(0,200,150,200);
  line(0,200,20,150);
  line(20,150,130,150);
  line(130,150,150,200);
  floodfill(1,199,WHITE);
  setfillstyle(SOLID_FILL,LIGHTGRAY);
  rectangle(50,300,100,245);//1bldg door
  floodfill(51,299,WHITE);
  setfillstyle(SOLID_FILL,BLACK);
  circle(54,272.5,2);
  floodfill(54,272.7,WHITE);
  setfillstyle(SOLID_FILL,WHITE);
  rectangle(5,210,40,255);
  floodfill(6,211,WHITE);
  setfillstyle(SOLID_FILL,WHITE);
  rectangle(110,210,145,255);
  floodfill(111,211,WHITE);
   //-----------2 bldg
  setfillstyle(HATCH_FILL,YELLOW) ;
  rectangle(150,300,300,80);//2 bldg
  floodfill(151,299,WHITE);
  setfillstyle(SOLID_FILL,LIGHTGRAY);
  rectangle(200,300,250,225);//2 bldg door
  floodfill(201,229,WHITE);
  setfillstyle(SOLID_FILL,BLACK);
  circle(205,265,2);
  floodfill(205,265,WHITE);
  rectangle(160,90,210,140);//windows
  rectangle(290,90,240,140);
  rectangle(160,150,210,200);
  rectangle(290,150,240,200);
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(161,91,WHITE);
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(289,91,WHITE);
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(161,151,WHITE);
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(289,151,WHITE);
  setfillstyle(SOLID_FILL,RED);
  line(150,80,300,80);
  line(300,80,225,10);
  line(225,10,150,80);
  floodfill(152,79,WHITE);
  //-------------------3bldg
  setfillstyle(SOLID_FILL,MAGENTA);
  rectangle(300,300,420,150);//3 bldg
  floodfill(301,151,WHITE);
  setfillstyle(SOLID_FILL,DARKGRAY);
  line(300,150,420,150);
  line(420,150,360,100);
  line(360,100,300,150);
  floodfill(305,148,WHITE);
  rectangle(310,160,350,200);//left top window
  rectangle(410,160,370,200); //right window
  rectangle(370,230,410,300);//door
  rectangle(310,230,350,280);//left down window
  setfillstyle(SOLID_FILL,YELLOW);
  floodfill(371,231,WHITE);
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(311,161,WHITE);
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(409,161,WHITE);
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(311,231,WHITE);
  setfillstyle(SOLID_FILL,BLACK);
  circle(375,265,2);      //door handle
  floodfill(375,265,WHITE);
  //------------
  setfillstyle(SOLID_FILL,BLACK);
  rectangle(458,107,461,85); //big hand
  floodfill(460,86,WHITE);
  //line(460,110,440,110);
  setfillstyle(SOLID_FILL,BLACK);
  rectangle(457,110,440,112);//small hand
  floodfill(453,111,WHITE);
  setfillstyle(SOLID_FILL,BROWN);//4 bldg
  rectangle(420,300,500,70);
  floodfill(421,229,WHITE);
  line(440,300,440,230);     //door
  arc(460,230,0,180,20);     //door
  line(480,230,480,300);     //door
  setfillstyle(SOLID_FILL,DARKGRAY);
  floodfill(441,299,WHITE);
  setfillstyle(SOLID_FILL,WHITE);
  circle(460,110,30);
  circle(460,110,3);//4bldg clock
  circle(488,110,2);
  circle(460,82,2);
  circle(433,110,2);
  circle(460,137,2);
  floodfill(480,120,WHITE);
  setfillstyle(SOLID_FILL,BLACK);
  floodfill(460,110,WHITE);
  setfillstyle(SOLID_FILL,BLACK);
  floodfill(488,110,WHITE);
  setfillstyle(SOLID_FILL,BLACK);
  floodfill(460,82,WHITE);
  setfillstyle(SOLID_FILL,BLACK);
  floodfill(433,110,WHITE);
  setfillstyle(SOLID_FILL,BLACK);
  floodfill(460,137,WHITE);
    setfillstyle(SOLID_FILL,BLACK);
  circle(445,255.5,2);   //door handle
  floodfill(445,255,WHITE);
      //----4 bldg roof
  setfillstyle(SOLID_FILL,DARKGRAY);
  line(410,70,510,70);
  line(510,70,510,60);
  setfillstyle(SOLID_FILL,DARKGRAY);
  arc(500,30,180,270,30);   //4 bldf roof
  line(470,30,450,30);
  arc(420,30,270,0,30);
  line(510,60,410,60);
  floodfill(452,32,WHITE);
  line(410,70,410,60);
  floodfill(421,69,WHITE);
  //-------------5 bldg-----
  setfillstyle(SOLID_FILL,CYAN);
  rectangle(500,300,635,110);
  floodfill(501,229,WHITE);
  setfillstyle(SOLID_FILL,DARKGRAY);
  line(500,110,635,110);
  line(635,110,567.5,60);
  line(567.5,60,500,110);
  floodfill(505,108,WHITE);
  rectangle(625,120,575,170);   //right top window
  rectangle(510,120,560,170);   //left top window
  rectangle(510,210,540,240);   //left bottom window
  rectangle(625,210,595,240);   //right bottom window
  rectangle(527.5,300,607.5,290);  //botttom step
  rectangle(537.5,290,597.5,280);  //upper step
  rectangle(547.5,280,587.5,210);  //door
  setfillstyle(SOLID_FILL,BLACK);
  circle(552,245,2);             //door handle
  floodfill(552,245,WHITE);
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(624,121,WHITE);   //right top window color
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(511,121,WHITE);   //left top window color
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(511,211,WHITE);   //left bottom window color
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(624,211,WHITE);   //right bottom window color
  setfillstyle(SOLID_FILL,DARKGRAY);
  floodfill(557.5,279,WHITE);   //door
  setfillstyle(SOLID_FILL,LIGHTGRAY);
  floodfill(537.5,299,WHITE);   //bottom step
  setfillstyle(SOLID_FILL,LIGHTGRAY);
  floodfill(547.5,289,WHITE);   //upper step
  //----------------Helicopter
  setfillstyle(SOLID_FILL,WHITE);
  line(80+x,50,50+x,50);
  line(50+x,70,80+x,70);
  line(80+x,70,80+x,50);
  line(50+x,70,20+x,50);
  line(50+x,20,50+x,50);
  line(80+x,70,80+x,50);
  line(20+x,50,50+x,20);
  floodfill(51+x,51,WHITE);
  line(20+x,50,10+x,50);
  line(10+x,60,10+x,40);
  line(50+x,20,50+x,15);
  if(x%2 == 0)
  {
  line(50+x,15,35+x,15);
  line(50+x,15,30+x,25);

  line(50+x,15,65+x,20);
  }
  else
  {
  line(50+x,15,25+x,20);
  line(50+x,15,70+x,25);
  line(50+x,15,75+x,15);
  }
  setfillstyle(SOLID_FILL,LIGHTBLUE);
  arc(50+x,50,0,90,30);
  floodfill(51+x,48,WHITE);
  //middle line
   line(0,400,20,400)  ;
  line(40,400,60,400);
  line(80,400,100,400);
  line(120,400,140,400);
  line(160,400,180,400);
  line(200,400,220,400);
  line(240,400,260,400);
  line(280,400,300,400);
  line(320,400,340,400);
  line(360,400,380,400);
  line(400,400,420,400);
  line(440,400,460,400);
  line(480,400,500,400);
  line(520,400,540,400);
  line(560,400,580,400);
  line(600,400,620,400);
  line(640,400,660,400);
  //road
  line(0,300,650,300);
  setfillstyle(SOLID_FILL,LIGHTGRAY);
  line(0,320,650,320);
  floodfill(1,301,WHITE);   //footpath
  setfillstyle(SOLID_FILL,DARKGRAY);
  line(0,325,650,325);
  floodfill(1,321,WHITE);   //footpath
  //------Car-----------------------------------
  setfillstyle(SOLID_FILL,BLUE);
  rectangle(429-x,440,630-x,380);
  floodfill(431-x,381,WHITE);
  line(470-x,380,500-x,340);
  line(500-x,340,600-x,340);
  line(600-x,340,630-x,380);
  setfillstyle(SOLID_FILL,DARKGRAY);
  circle(480-x,440,30);
  floodfill(480-x,441,WHITE);
  floodfill(480-x,439,WHITE);
  setfillstyle(SOLID_FILL,DARKGRAY);
  circle(590-x,440,30);
  floodfill(590-x,441,WHITE);
  floodfill(590-x,439,WHITE);
  //-----------SKY--------
  setfillstyle(SOLID_FILL,LIGHTBLUE);
  floodfill(1,1,WHITE);
  //cycle------------------------------------------
  line(40+x,355,120+x,355 );
  line(50+x,315,40+x,355);
  line(120+x,355,130+x,315);
  line(50+x,315,155+x,315);
  line(150+x,300,180+x,355);
  line(50+x,315,53+x,305);
  line(48+x,305,58+x,305);
  line(150+x,300,130+x,300);
  circle(180+x,355,30);
  circle(40+x,355,30);
  }
  getch();
  closegraph();
}
