#include <iostream>
#include <cmath>
using namespace std;


int main(){
	cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(4);
	double a1c[5]={4,4,5,3,3}, a2c[5]={3,3,4,2,3}, a3c[5]={5,4,2,2,2};

	cout << "MATRIX X :"<<endl;
	int biawak1=0;
	do{
		cout << a1c[biawak1]<<" | ";
		biawak1++;
	}while(biawak1<5);cout<<endl;
	int biawak2=0;
	do{
		cout << a2c[biawak2]<<" | ";
		biawak2++;
	}while(biawak2<5);cout<<endl;
		int biawak3=0;
	do{
		cout << a3c[biawak3]<<" | ";
		biawak3++;
	}while(biawak3<5);cout<<endl;


