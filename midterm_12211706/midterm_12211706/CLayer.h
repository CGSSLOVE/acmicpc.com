#pragma once
#include <iostream>
using namespace std;
class CLayer
{


private:
	double* pNode;
	
	int NodeCnt=0;
public:

	
	CLayer(double a, double b, double c, double d, double e) {
		NodeCnt += 5;
		pNode = new double[5];
		pNode[0] = a; 
		pNode[1] = b; 
		pNode[2] = c; 
		pNode[3] = d; 
		pNode[4] = e;
		
	}
	CLayer(double f, double g) {
		NodeCnt += 2;
		pNode = new double[2];
		pNode[0] = f;
		pNode[1] = g;
	}
	~CLayer() {
		delete[] pNode;
		delete pNode;

	}

	int getNode() {
		return NodeCnt;
	}
	double getpnode(int a) {
		return pNode[a - 1];
	}
	


};