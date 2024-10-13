#include <iostream>
#include "Diem.h"
using namespace std;

	

int main() {
        cout << "Tao diem A bang default constructor" << endl;
        Diem A;
        A.Xuat();

        int x, y;
        cout << "Nhap hoanh do va tung do cua diem B: ";
        cin >> x >> y;
        Diem B(x, y);
        B.Xuat();

        cout << "Tao diem C bang copy constructor, copy diem B" << endl;
        Diem C(B);
        C.Xuat();

        cout << "Hoanh do cua B: " << endl;
        B.GetHoanhDo();
        cout << "Tung do cua B: "<< endl;
        B.GetTungDo();

        cout << "Nhap do tinh tien cho diem B: " << endl;
        cin >> x >> y;
        B.TinhTien(x, y);

        cout << "Diem B sau khi tinh tien: ";
        B.Xuat();
        cout << "Nhap gia tri Tung do va Hoanh do muon thiet lap cho diem B: " << endl;
        cin >> x >> y;
        B.SetTungDo(y);
        B.SetHoanhDo(x);
        cout << "Diem B sau khi thiet lap lai:";
        B.Xuat();

        return 0;
    }
   