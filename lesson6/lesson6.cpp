#include <iostream>
using namespace std;

int main()
{
    cout << "task1" << endl;
    int x;
    cout << "ededi daxil edin:";
    cin >> x;
    if (x % 2 == 0) {
        cout << "eded cutdur.";
    }
    else {
        cout << "eded tekdir:";
    }
    cout << "task2" << endl;
    int x2, y2;
    cout << "1 ci ededi daxil edin:";
    cin >> x2;
    cout << "2 ci ededi daxil edin:";
    cin >> y2;
    if (x2 < y2) {
        cout << x2;
    }
    else {
        cout << y2;
    }
    cout << "task3" << endl;
    int x3;
    cout << "eded daxil edin:";
    cin >> x3;
    if (x3 > 0) {
        cout << "eded musbetdir";
    }
    else if (x3 == 0) {
        cout << "eded ne menfi ne de musbetdir";
    }
    else {
        cout << "eded  menfidir";
    }
    cout << "task4" << endl;
    double x4, y4;
    cout << "1 ci ededi daxil edin:";
    cin >> x4;
    cout << "2 ci ededi daxil edin:";
    cin >> y4;
    int a;
    cout << "1-toplama,2-cixma,3-vurma,4-bolme.emeli secin:";
    cin >> a;
    if (a == 1) {
        cout << x4 + y4;
    }
    else if (a == 2) {
        cout << x4 - y4;
    }
    else if (a == 3) {
        cout << x4 * y4;
    }
    else {
        cout << x4 / y4;
    }
    cout << "task5" << endl;
    int x5;
    cout << "eded daxil edin:";
    cin >> x5;
    if (x5 > 1 && x5 < 50) {
        cout << "eded 1 ve 50 araligindadir";
    }
    else {
        cout << "eded 1 ve 50 araliginda deyil.";
    }
    cout << "task6" << endl;
    int x6, y6;
    cout << "1 ci ededi daxil edin:";
    cin >> x6;
    cout << "2 ci ededi daxil edin:";
    cin >> y6;
    if (x6 % y6 == 0) {
        cout << "yes";
    }
    else {
        cout << "no";
    }  
    cout << "task7" << endl;
    char a;
    cout << "simvol daxil edin;";
    cin >> a;
    if ((int)a >= 65 && (int)a <= 90) {
        cout << "herf";
    }
    else {
        cout << "\npunkt";
    }
   
    cout << "task8" << endl;
    int x8;
    cout << "eded daxil edin;";
    cin >> x8;
    if (x8 % 3 == 0) {
        cout << "\neded 3 e bolunur";
    }

    if (x8 % 5 == 0) {
        cout << "\neded 5 e tam bolunur;";
    }

    if (x8 % 7 == 0) {
        cout << "\neded 7 ye tam bolunur;";
    }
    if (x8 % 3 != 0 && x8 % 5 != 0 && x8 % 7 != 0) {
        cout << "eded 3 e 5 e ve 7 ye bolunmur";
    }
    cout << "task9" << endl;
    int x9;
    cin >> x9;
    if (x9 < 0) {
        cout << x9 * -1;
    }
    else {
        cout << x9;
    }
  
   cout << "\ntask10" << endl;
    int x10;
    cout << "max 4 reqemli eded daxil edin";
    cin >> x10;
    if (x10 >= 10000) {
        cout << "sehv eded daxil etmisiniz.Yeniden daxil edin.";
        cin >> x10;
    }
    if (x10 / 1000 >= 1) {
        cout << "eded 4 reqemlidir";
    }
    else if (x10 / 100 >= 1) {
        cout << "eded 3 reqemlidir";
    }
    else if (x10 / 10 >= 1) {
        cout << "eded 2 reqemlidir";
    }
    else {
        cout << "eded 1 reqemlidir";
    }
    cout << "\ntask11" << endl;
    int x11;
    cout << "5 reqemli eded daxil edin";
    cin >> x11;
    if (x11 >= 100000 && x11<=9999) {
        cout<< "sehv eded daxil etmisiniz.Yeniden daxil edin.";
        cin >> x11;
    }
    int t = x11 % 10;
    int o = x11 / 10 % 10;
    int y = x11 / 100 % 10;
    int m = x11 / 1000 % 10;
    int o_m = x11 / 10000 % 10;
    if (t == o_m && o == m) {
        cout << "eded polindromdur.";
    }
    else {
        cout << "eded polindrom deyil.";
    }
    cout << "\ntask12" << endl;
    const int sifre = 0123;
    int s;
    cout << "sifreni daxi edin:";
    cin >> s;
    if (sifre == s) {
        cout << "access successfully completed";
    }
    else {
        cout << "access denied";
    }
    cout << "\ntask13" << endl;
    int il;
    cout << "insan ilini daxil edin:";
    cin >> il;
    if (il == 1) {
        cout << 7;
    }
    else if (il == 2) {
        cout << 21;
    }
    else if (il > 2) {
        cout << 21 + (il - 2) * 4;
    }

}


