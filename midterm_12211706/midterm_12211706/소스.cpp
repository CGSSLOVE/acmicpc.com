#include <iostream>
#include "CNeural.h"	



using namespace std;
int main() {

	double bufx[5] = { 0.1,0.2,0.3,0.4,0.5 };
	CNeural nn(bufx[0], bufx[1], bufx[2], bufx[3], bufx[4]);
	nn.Init();
	nn.NeuralDraw();
	nn.Feedforward();
	
}