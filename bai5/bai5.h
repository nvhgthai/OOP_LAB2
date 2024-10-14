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

// Getter và setter cho tung do va hoanh do
    double GetTungDo();

    double GetHoanhDo();

    void SetTungDo(double Tung);

    void SetHoanhDo(double Hoanh);

// Tinh tien diem 1 doan delta x va 1 doan delta y
    void TinhTien(double dx, double dy);

// Nhan doi toa do diem do
    void nhandoi();

// Gan toa do ve thanh goc toa do
    void GanGoc();
};