#include <iostream>
#include <fstream>
#include <cstdlib>
#include<cmath>
#include<iomanip>
#include"lab2.h"
using namespace std;

int main(){
	
	float a,b,s;
	int k;
	exe LOL;
	
ifstream inFile("file.in", ios::in);
if(!inFile) {
cerr << "Failed opening" << endl;
exit(1);
}

ofstream outFile("file.out", ios::out);
if(!outFile) {
cerr << "Failed opening" << endl;
exit(1);
}

inFile>>k>>a>>b;
LOL.get(a,b,k);
outFile<<LOL.returningA()<<" "<<LOL.returningB()<<endl;

while(inFile>>s){
	LOL.set(s);
	outFile<<LOL.returningA()<<" "<<LOL.returningB()<<endl;
}

	return 0;
}

