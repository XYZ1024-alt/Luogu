#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    if (T == 1) {
        cout << "I love Luogu!";
    } else if (T == 2) {
        cout << 2 + 4 << " " << 10 - 2 - 4 << endl;
    } else if (T == 3) {
        cout << 3 << endl << 12 << endl << 2 << endl;
    } else if (T == 4) {
        cout<<fixed<<setprecision(3)<<1.0*500/3 << endl;
    } else if (T == 5) {
        cout << (220+260)/(20+12);
    } else if (T == 6) {
        cout << sqrt(6*6+9*9);
    } else if (T == 7) {
        cout << "110" << endl << "90" << endl << "0" << endl;
    } else if (T == 8) {
        double const pi = 3.141593;
    	double const r = 5;
    	cout << pi*r*2 << endl<<pi*r*r << endl << 4.0/3*pi*r*r*r << endl;
    } else if (T == 9) {
        cout << 22;
    } else if (T == 10) {
        cout << "9";
    } else if (T == 11) {
        cout << 1.0*100/3;
    } else if (T == 12) {
        cout << (int)('M'-'A')+1 << endl << (char)(18+'A'-1);
    } else if (T == 13) {
        double const pi = 3.141593;
    	double V = pi*4*4*4*4/3+pi*10*10*10*4/3;
    	cout << floor(pow(V,1.0/3));
    } else if (T == 14) {
        cout << "50";
    }
    return 0;
}