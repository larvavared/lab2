#include <cstdlib>
#include <cmath>
#include"lab2.h"
using namespace std;

exe::exe(){
}

void exe::get(float ra,float rb,int k1){
    RA=ra;
    RB=rb;
    K=k1;
}

void exe::set(float S){
	float Ea,Eb;
	float pa,pb,ma,mb;

ma=(float)(RB-RA)/(float)400;
mb=(float)(RA-RB)/(float)400;
pa=(float)pow(10,ma);
pb=(float)pow(10,mb);
Ea=(float)1/(float)(1+pa);
Eb=(float)1/(float)(1+pb);

RA=RA+K*(S-Ea);
RB=RB+K*(1-S-Eb);

RA=round(RA);
RB=round(RB);
}

float exe::returningA(){
	return RA;
}
float exe::returningB(){
	return RB;
}


