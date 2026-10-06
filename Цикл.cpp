/************************
* Имя:     Мусаев Артём *
* Задание: 1            *
* Вариант: 3            *
************************/

#include <iostream>
#include <iomanip>

int main() {
  using namespace std;
  const double epsilon = 115.0;
  const double r = 29.7;
  const double rStart = 10.0;
  const double rEnd = 300.0;
  const double step = 10.0;

  cout << fixed << setprecision(3);
  cout << "\n=== do-while ===\n" << endl << "R (Om)\tP (Watt)\n";

  double rDo = rStart;
  do {
  double I = epsilon / (rDo + r);
  double P = rDo * pow(I, 2);

  cout << rDo << "\t" << P << "\n";
  rDo += step;
} while (rDo <= rEnd);

	return 0;
}