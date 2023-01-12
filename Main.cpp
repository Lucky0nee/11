#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");
    double x, sum1, sum2, sum3;
    cout << "Введiть x: ";
    cin >> x;
  
    if (x != 0) {
        sum1 = x + (1 / x);
        sum2 = x + (1 / sum1);
        sum3 = x + (1 / sum2);
        sum3 = 1 / sum3;
        cout << sum3 << "\n";
    }
    else if (x == 0)
        cout << "На нуль дiлити не можна!\n";

    return 0;
}
