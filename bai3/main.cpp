#include <iostream>
#include "bai3.cpp"
using namespace std;

int main() {
    DaGiac DG;
    double x;
    DG.Nhap();
    DG.Xuat();

    cout << "Nhap lan luot dx va dy de tinh tien: ";
    DG.TinhTien(2, 3);
    cout << "\nDa giac sau khi tinh tien: " << endl;
    DG.Xuat();

    cout << "Nhap scale phong to da giac: ";
    cin >> x;
    DG.PhongTo(x);
    cout << "\nDa giac sau khi phong to: " << endl;
    DG.Xuat();

    cout << "Nhap scale thu nho dagiac: ";
    cin >> x;
    DG.ThuNho(x);
    cout << "\nDa giac sau khi thu nho: " << endl;
    DG.Xuat();

    cout << "Nhap goc de quay da giac: ";
    cin >> x;
    DG.Quay(x);
    cout << "\nDa giac sau khi quay: " << endl;
    DG.Xuat();

    return 0;
}