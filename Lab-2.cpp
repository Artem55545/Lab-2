/************************
* Имя:     Мусаев Артём *
* Задание: 2            *
* Вариант: 3            *
************************/

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    using namespace std;
    double epsilon = 115.0;
    double r = 29.7;
    double rStart = 10.0;
    double rEnd = 300.0;
    double step = 10.0;
    double rDo = rStart;
    double I;
    double P;

    cout << fixed << setprecision(3) << endl
        << "\n=== do-while + while ===\n" << endl
        << "R (Om)\tP (Watt)\n";

while (rDo <= rEnd) {
    do {
    I = epsilon / (rDo + r);
    P = rDo * pow(I, 2);

    cout << rDo << "\t"
         << P << "\n";

    rDo += step;
} 
        
    while (rDo <= rEnd);

    break;
}

    return 0;
}