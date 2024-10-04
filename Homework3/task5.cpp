#include <iostream>
#include <cstdlib>

using namespace std;


void shellSort(string& s) {
    int gap = s.length() / 2;
    while (gap > 0) {
        for (int i = gap; i < s.length(); i++) {
            char temp = s[i];
            int j = i;
            while (j >= gap && s[j - gap] > temp) {
                s[j] = s[j - gap];
                j -= gap;
            }
            s[j] = temp;
        }
        gap /= 2;
    }
}

void task5() {
    string s = "njdspaasdaijregomsodhnngreongeroedgty";
    shellSort(s);
    cout << s << endl;
}