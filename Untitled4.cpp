#include<iostream>
using namespace std;

int main(){
    double luasrumah = 42;
	double lantaiP = 193*1215;
	double lantaibox = lantaiP*8/1000000;
	cout <<"Luas Rumah 			: "<<luasrumah<<" m2" <<endl;
	cout <<"Luas 1 box parket	: "<<lantaibox<<" m2" <<endl;
	double jumlahBoxP,biayaP,biayaPG,totalB;
	jumlahBoxP = luasrumah/lantaibox;
	cout << "Jumlah box parket     : " <<jumlahBoxP<<endl;
	biayaP = jumlahBoxP * 500;
	cout << "Biaya Parket (Rp)  : "<<biayaP<<endl;
	biayaPG = luasrumah *20;
	cout << "Biaya Pasang (Rp)  : "<<biayaPG<<endl; 
}
