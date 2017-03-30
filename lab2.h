#include <iostream>
using namespace std;

class exe
{
  public:
	exe();
	void get(float ra,float rb,int k1);
	void set(float S);
	float returningA();
	float returningB();
	
  private:
  	int K;
  	float RA,RB;
};
