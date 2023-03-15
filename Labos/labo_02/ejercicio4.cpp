#include <iostream>
#include <math.h>

int main() {
    int binario = 0;
    std::cout << "Ingrese número binario:" << std::endl;
    std::cin >> binario;
    int decimal = 0;
    int potencia = 0;
    while (binario > 0) {
        int cifra = binario % 10;
        if (cifra == 1) {
            decimal += pow(2, potencia);
        }
        binario = binario / 10;
        potencia++;
    }
    std::cout << "Decimal: " << decimal << std::endl;
    return 0;
}