#include <iostream>
#include <cmath>

double hitungTitikDidih(double pressure) {
    // Konstanta Antoine untuk air
    const double A = 8.07131;
    const double B = 1730.63;
    const double C = 233.426;

    // Menghitung suhu dalam Celsius
    double T = (B / (A - log10(pressure))) - C;
    return T;
}

int main() {
    double pressure;

    std::cout << "Masukkan tekanan dalam mmHg: ";
    std::cin >> pressure;

    // Menghitung titik didih
    double titikDidih = hitungTitikDidih(pressure);

    std::cout << "Titik didih air pada tekanan " << pressure << " mmHg adalah " 
              << titikDidih << " Â°C" << std::endl;

    return 0;
}