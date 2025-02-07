#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1, Rect r2){
	double nr1x,nr2x,nr1y,nr2y;
	nr1x=r1.x+r1.w;
	nr1y=r1.y-r1.h;
	nr2x=r2.x+r2.w;
	nr2y=r2.y-r2.h;
	double top,left,right,bot;
	top = min(r1.y,r2.y);
	bot = max(nr1y,nr2y);
	left = max(r1.x,r2.x);
	right = min(nr1x,nr2x);
	double delx,dely;
	delx = right-left;
	dely = top-bot;

	if(delx > 0&& dely >0){
		return delx*dely;
	}
	else return 0;

}
