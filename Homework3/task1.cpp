#include <iostream>
#include <cstdlib>

using namespace std;

// task1 and task2 in one

void task1() {
	float p, n, m, s, r;
	cout << "Enter percent value: p = ";
	cin >> p;
	cout << "Enter the number of years: n = ";
	cin >> n;
	cout << "Enter loan summ: s = ";
	cin >> s;
	if ((s > 0) and (n > 0) and (p <= 100) and (p > 0)) {
		r = p / 100;
		if ((12 * (pow(1 + r, n) - 1)) > 0) {
			m = (s * r * (pow(1 + r, n))) / (12 * (pow(1 + r, n) - 1));
			cout << "montlhy payment: " << m;
		}
		else {
			cout << " invalid data... ";
		}
	}
	else if ((p == 0) and (n > 0) and (s > 0)){
		m = s / (12*n);
		cout << "monthly payment: " << m;
	}
	else {
		cout << "invalid input data, please try again";
	}
    //
    // task2 next
    // 
    float eps = 0.1;
    p = 0;
    float m0 = 0;
    cout << endl << "Enter the number of years: n = ";
    cin >> n;
    cout << "Enter loan summ: s = ";
    cin >> s;
    cout << "Enter payment amount: m = ";
    cin >> m;
    while ((fabs(m - m0) > eps) and (p < 10)) {
        if ((s > 0) and (n > 0) and (p == 0)) {
            m0 = s / (12 * n);
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
        p += 0.0001;
    }
}