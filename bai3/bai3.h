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

    double GetTungDo();

    double GetHoanhDo();

    void SetTungDo(double Tung);

    void SetHoanhDo(double Hoanh);

// Tinh tien diem 1 doan delta x va 1 doan delta y
    void TinhTien(double dx, double dy);

// Quay 1 diem quanh goc toa do
    void Quay(double rad);
};

class DaGiac {
private:
    int n;
    Diem *Dinh;

public:
    DaGiac() {
        n = 0;
        Dinh = nullptr;
    }

    void Nhap();

    void Xuat();

// Tinh tien di theo mot vector (dx, dy)
    void TinhTien(double dx, double dy);

// Phong to 
    void PhongTo(double scale);
    
// Thu nho 
    void ThuNho(double scale);

// Quay 1 goc rad 
    void Quay(double radian);
};