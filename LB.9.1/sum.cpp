// sum.cpp
// файл реалізації функції
#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h" // підключили зовнішні оголошення змінних

using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
    n = 0;
    a = 1; // початковий доданок
    s = a; // початкова сума
    do {
        n++;
        dod(); // виклик процедури обчислення доданку
        s += a;
    } while (fabs(a) > e); // умова завершення циклу
}
