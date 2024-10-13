
#include <iostream>

#include "Diem.h"
using namespace std;
Diem::Diem() {
	iHoanh = 0;
	iTung = 0;
};
Diem::Diem(int Hoanh, int Tung) {
	iHoanh = Hoanh;
	iTung = Tung;

}
Diem::Diem(const Diem& x) {
	iHoanh = x.iHoanh;
	iTung = x.iTung;
}; 
void Diem::Xuat() {
	cout << "Hoanh do:" << iHoanh << " Tung do:" << iTung << endl;
};
void Diem:: GetTungDo() {
	cout  << iTung << endl;

};
void Diem:: GetHoanhDo() {
	cout << iHoanh << endl;
};
void Diem::SetTungDo(int tung) {
	iTung = tung;
};
void Diem::SetHoanhDo(int hoanh) {
	iHoanh = hoanh;
};
void Diem::TinhTien(int hoanh, int tung) {
	iTung += tung;
	iHoanh += hoanh;
};
