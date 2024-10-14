#include <iostream>
using namespace std;

class Diem {
private:
    double Hoanh;
    double Tung;
public:
// Ham khoi tao khong tham so
    Diem() {
        Hoanh = 0;
        Tung = 0;
    }

// Ham khoi tao co tham so
    Diem(double Hoanh, double Tung) {
        this -> Hoanh = Hoanh;
        this -> Tung = Tung;
    }

// Ham copy diem
    Diem(const Diem &x) {
        Hoanh = x.Hoanh;
        Tung = x.Tung;
    }

    void Xuat();

// Getter va setter cho tung do va hoanh do
    double GetTungDo();

    double GetHoanhDo();

    void SetTungDo(double Tung);

    void SetHoanhDo(double Hoanh);

// Tinh tien diem 1 doan delta x va 1 doan delta y
    void TinhTien(double _do, double d);

};

class TamGiac {
private:
    Diem A, B, C; 

public:
    void Nhap();

    void Xuat();

// Tinh tien tam giac di 1 doan theo vector (d*cos(rad), d*sin(rad)) voi rad la do tinh bang radian
    void TinhTien(double _do, double d);
};