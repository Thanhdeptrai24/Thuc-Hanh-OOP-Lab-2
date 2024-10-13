#pragma once
using namespace std;

class Diem
{
private:
	int iHoanh;
	int iTung;

public:
	Diem();
	Diem(int Hoanh, int Tung);
	Diem(const Diem& x) ;
	void Xuat() ;
	void GetTungDo();
	void GetHoanhDo();
	void SetTungDo(int tung);
	void SetHoanhDo(int hoanh);
	void TinhTien(int tung, int hoanh) ;


};

