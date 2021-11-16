#pragma once
#include <iomanip>
#include "CLayer.h"
using namespace std;
class CNeural
{
private: 

	int CntLayer;
	int* pCntWeight;
	double* pWeight;
	double x1, x2, x3, x4, x5;
	CLayer* cl1;
	CLayer* cl2;

	
public:
	CNeural(double x1, double x2, double x3, double x4, double x5) {
		this->x1 = x1;
		this->x2 = x2;
		this->x3 = x3;
		this->x4 = x4;
		this->x5 = x5;
		

	}
	~CNeural() {
		
		delete[] pWeight;
		delete pWeight;
		delete pCntWeight;
		delete cl1;
		delete cl2;
		delete[] cl1;
		delete[] cl2;
	}
	
	void Init() {
		srand(time(NULL));
		pWeight = new double[10];
		pCntWeight = new int;

		for (int i = 0; i < 10; i++) {
			pWeight[i] = ((rand() % 100+1) / 100.0);
			pCntWeight++;
		}
		double y1 = x1 * pWeight[0] + x2 * pWeight[1] + x3 * pWeight[2] + x4 * pWeight[3] + x5 * pWeight[4];
		double y2 = x1 * pWeight[5] + x2 * pWeight[6] + x3 * pWeight[7] + x4 * pWeight[8] + x5 * pWeight[9];
		cl1 = new CLayer(x1,x2,x3,x4,x5);
		CntLayer++;
		cl2 = new CLayer(y1,y2);
		CntLayer++;
		
		
	}
	void NeuralDraw() {
		cout << setw(10) << cl2->getpnode(1) << setw(20)<<cl2->getpnode(2)<<"\n";
		for (int i = 0; i < 5; i++) {
			cout << pWeight[i] << " ";
		}
		cout << setw(3);
		for (int i = 5; i < 10; i++) {
			cout << pWeight[i] << " ";
		}
		cout << "\n";
		cout << setw(15) << x1 <<" "<< x2 << " " << x3 << " " << x4 << " " << x5<<"\n";
		cout << "- 레이어 수 :" << CntLayer << "개\n\n";
		cout << "-첫번째 레이어의 노드 수 : " << cl1->getNode() << "개\n\n";
		cout << "-첫번째 레이어의 노드 수 : " << cl2->getNode() << "개\n\n";
	}


	void Feedforward() {
		if (cl2->getpnode(1)<0) {
			cout << "0 ";

		}
		else {
			cout << cl2->getpnode(1)<<" ";
		}

		if (cl2->getpnode(2) < 0) {
			cout << "0 ";

		}
		else {
			cout << cl2->getpnode(2) <<" ";
		}
		
		delete[] cl1;
		delete[] cl2;
	}

};





