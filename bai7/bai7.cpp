#include <iostream>
#include <cmath>
#include <vector>
#include "bai7.h"
using namespace std;

void DaGiac::Nhap() {
    int n;
    cout << "Nhap so dinh cua da giac: ";
    cin >> n;
    
    vDiem.resize(n); 

    for (int i = 0; i < n; ++i) {
        cout << "Nhap toa do dinh thu " << i + 1 << ": ";
        cin >> vDiem[i].x >> vDiem[i].y;
    }
}

double DaGiac::DienTich() {
    double dt = 0.0;
    int n = vDiem.size();

    for (int i = 0; i < n; ++i) {
        int j = (i + 1) % n;  
        dt += vDiem[i].x * vDiem[j].y - vDiem[j].x * vDiem[i].y;
    }

    return fabs(dt) / 2.0; 
}