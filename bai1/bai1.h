#include <iostream>
using namespace std;

class Diem {
private:
    double iHoanh;
    double iTung;
public:
// Ham khoi tao khong tham so
    Diem() {
        iHoanh = 0;
        iTung = 0;
    }

// Ham khoi tao co tham so
    Diem(double Hoanh, double Tung) {
        iHoanh = Hoanh;
        iTung = Tung;
    }

// Ham khoi tao copy diem
    Diem(const Diem &x) {
        iHoanh = x.iHoanh;
        iTung = x.iTung;
    }

    void Xuat();

// Getter va setter cho tung do va hoanh do

    double GetTungDo();
    double GetHoanhDo();
    void SetTungDo(double Tung);
    void SetHoanhDo(double Hoanh);

// Tinh tien diem 1 doan delta x va 1 doan delta y
    void TinhTien(double dx, double dy);
};