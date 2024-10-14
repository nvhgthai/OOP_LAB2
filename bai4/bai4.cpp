#include <iostream>
#include <string>
#include "bai4.h"
using namespace std;

    void ThiSinh::Nhap() {
        cin.ignore();
        cout << "Nhap ten: ";
        getline(cin, Ten);
        cout << "Nhap MSSV: ";
        cin >> MSSV;
        cout << "Nhap ngay thang nam sinh: ";
        cin >> iNgay >> iThang >> iNam;
        cout << "Nhap diem toan: ";
        cin >> fToan;
        cout << "Nhap diem van: ";
        cin >> fVan;
        cout << "Nhap diem anh: ";
        cin >> fAnh;
    }

    void ThiSinh::Xuat() {
        cout << "Ten: " << Ten << "\n";
        cout << "MSSV: " << MSSV << "\n";
        cout << "Ngay sinh: " << iNgay << " " << iThang << " " << iNam << "\n";
        cout << "Diem Toan: " << fToan << "\n";
        cout << "Diem Van: " << fVan << "\n";
        cout << "Diem Anh: " << fAnh << "\n";
        cout << "Diem Tong: " << Tong() << "\n";
    }

    float ThiSinh::Tong() {
        return fToan + fVan + fAnh;
    }