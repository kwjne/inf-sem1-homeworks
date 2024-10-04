#include <iostream>
#include <cstdlib>

using namespace std;

// task2 only

void task2() {
    double n, m, s, r;
    float eps = 0.001;
    float p = 0;
    float m0 = 0;
    cout << "Enter the number of years: n = ";
    cin >> n;
    cout << "Enter loan summ: s = ";
    cin >> s;
    cout << "Enter payment amount: m = ";
    cin >> m;
    while ((fabs(m - m0) > eps)) {
        if ((s > 0) and (n > 0) and (p == 0)) {
            m0 = s / (12*n);
            if (fabs(m - m0) <= eps) {
                cout << "the loan was issued at percent: " << p;
                break;
            }
        }
        else if ((s > 0) and (n > 0)) {
            r = p / 100;
            if ((12 * (pow(1 + r, n) - 1)) > 0) {
                m0 = (s * r * (pow(1 + r, n))) / (12 * (pow(1 + r, n) - 1));
                if (fabs(m - m0) <= eps) {
                    cout << "the loan was issued at percent: " << p;
                    break;
                }
            }
            else {
                cout << "invalid data";
                break;
            }
        }
        else {
            cout << "invalid data, try again";
            break;
        }
    }
    p += 0.001;
}