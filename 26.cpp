#include <iostream>
#include <sstream>
#include <Windows.h>
using namespace std;
//task1
bool isValidIpAddress(string ip) {
    stringstream s(ip);
    string seg;
    int num, dot = 0;


    while (getline(s, seg, '.')) {
        dot++;

        if (seg.empty() || seg.size() > 3) return false;

        for (char c : seg) {
            if (!isdigit(c)) return false;
        }

        num = stoi(seg);

        if (num < 0 || num > 255) return false;
    }

    return dot == 4;
}

int main() {
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251); 
    string ip;
    cout << "Введіть IP-адресу: ";
    cin >> ip;

    if (isValidIpAddress(ip)) {
        cout << "Коректна IP-адреса" << endl;
    }
    else {
        cout << "Некоректна IP-адреса" << endl;
    }

    return 0;
}
