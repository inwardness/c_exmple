 
#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
//#define bgipath "a:\\bgi"
#define bgipath "d:\\borlandc\\bgi"
int xcent,ycent,xend,yend;
float x,xt,y,yt;
int x0=20,y0=20;//nachalo otnositel`no (0,0) ekrana
int xmin=-120,ymin=-100;//nachlo okna otnositelno (x0,y0)
int xmax=120,ymax=100;//konec""""""""""""""""
int bc=12,gc=10,fc=7;//border color,grid color,fill color
int grdstp=1;  //grid step
float zoom=1; //zoom
float fstp=zoom/10.0;  //func step
int gstp=1/fstp*grdstp;//zoomgrid step
int ax=1;//show grid on/off
 
 
 
void graphit (char *path)
{
   int gd, gm , err ;
   gd = 9 ;
   gm = 2 ;
 
   initgraph (&gd, &gm, path);
 
 
   err = graphresult();
   /* an error occurred */
   if (err != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(err));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }
}
void init()
{
     xcent=x0-xmin;
     ycent=y0+ymax;
     xend=xcent+xmax;
     yend=ycent-ymin;
     fstp=zoom/1.0;
     gstp=18/fstp*3.141592*grdstp;
 
}
void clear()
{
   init();
   setfillstyle(1,0);
   bar(x0,y0,xend,yend);
}
void draw_grid()
{
     init();
     if(xend>639)  //??????
xend=639;  //??????
     if(yend>479)  //??????
yend=479;  //??????
     setcolor(bc);
     rectangle(x0,y0,xend,yend);
     setcolor(fc);
     if(ycent>y0&&ycent<yend)
line(x0,ycent,xend,ycent);
else
   {
   setcolor(fc-2);
   if(ycent<=y0)
line(x0,y0,xend,y0);
else
    line(x0,yend,xend,yend);
}
     setcolor(fc);
     if(xcent>x0&&xcent<xend)
line(xcent,y0,xcent,yend);
else
   {
   setcolor(fc-2);
   if(xcent<=x0)
line(x0,y0,x0,yend);
else
    line(xend,y0,xend,yend);
}
     if(gstp<2)
gstp=0;
     if(gstp&&ax)
       {
       for(x=-xmin%gstp+x0;x<xend;x+=gstp)
 for(y=ymax%gstp+y0;y<yend;y+=gstp)
    if(x>x0&&y>y0)
putpixel(x,y,gc);
       }
}
 
void draw_function()
{
    int sign;
    init();
    for(x=xmin,xt=xmin*fstp;x<=xmax;x++,xt+=fstp)
       {
y=sin((3.141592/180)*xt)*180/3.141592;//a*pow(xt,2)+b*xt+c;
yt=sin((3.141592/180)*(xt+fstp))*180/3.141592;//a*pow((xt+fstp),2)+b*(xt+fstp)+c;
sign=y<yt?1:-1;
while(y*sign<yt*sign)
{
 if(y/fstp>ymin&&y/fstp<ymax)
   {
   putpixel(x+xcent,ycent-y/fstp,4);
   //delay(1);
   }
  y+=sign*fstp;
}
       }
}
 
void main()
{
   char ch=' ';
   int step=1;
//   axes m[2];//(10,50,-100,-60,120,130,10,14,4,3,1);
   graphit (bgipath) ;
   x0=300;
   y0=50;
 
       xmin=-100;//left[-100];
       xmax=100;//right[i];
       ymin=-100;//down[i];
       ymax=100;//up[i];
       zoom=10;//zom[i];
       draw_grid();
       draw_function();
 
 
   while((ch=getch())!='q')
    {
      switch(ch)
{
case 'e':ymax-=step;ymin-=step;break;
case 'x':ymax+=step;ymin+=step;break;
case 'd':xmin-=step;xmax-=step;break;
case 's':xmin+=step;xmax+=step;break;
case '6':zoom+=.1;break;
case '5':if(zoom>0.1)zoom-=.1;break;
case '7':if(step) step--;break;
case '8':step++;break;
case 'h':ymax=100;ymin=-100;xmin=-100;xmax=100;break;
case 'o':if(grdstp>1)grdstp--;break;
  case 'p':grdstp++;
}
 
      clear();
      draw_grid();
      draw_function();
   }
   getch();
} 