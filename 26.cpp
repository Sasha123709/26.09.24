//#include <iostream>
//#include <sstream>
//#include <Windows.h>
//using namespace std;
////task1
//bool isValidIpAddress(string ip) {
//    stringstream s(ip);
//    string seg;
//    int num, dot = 0;
//
//
//    while (getline(s, seg, '.')) {
//        dot++;
//
//        if (seg.empty() || seg.size() > 3) return false;
//
//        for (char c : seg) {
//            if (!isdigit(c)) return false;
//        }
//
//        num = stoi(seg);
//
//        if (num < 0 || num > 255) return false;
//    }
//
//    return dot == 4;
//}
//
//int main() {
//    SetConsoleCP(1251); 
//    SetConsoleOutputCP(1251); 
//    string ip;
//    cout << "Введіть IP-адресу: ";
//    cin >> ip;
//
//    if (isValidIpAddress(ip)) {
//        cout << "Коректна IP-адреса" << endl;
//    }
//    else {
//        cout << "Некоректна IP-адреса" << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <string>
//#include <algorithm> // для transform
//#include <Windows.h>
//using namespace std;
//
//int main() {
//    string students[5];
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251); 
//
//    cout << "Введіть 5 прізвищ студентів:" << endl;
//    for (int i = 0; i < 5; i++) {
//        cout << "Студент " << i + 1 << ": ";
//        cin >> students[i];
//
//        
//        transform(students[i].begin(), students[i].end(), students[i].begin(), ::tolower);
//    }
//
//    for (int i = 0; i < 4; i++) {
//        for (int j = i + 1; j < 5; j++) {
//            if (students[i] < students[j]) {
//               
//                string temp = students[i];
//                students[i] = students[j];
//                students[j] = temp;
//            }
//        }
//    }
//
//    
//    cout << "\nВідсортовані прізвища за спаданням:" << endl;
//    for (int i = 0; i < 5; i++) {
//        cout << students[i] << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <string>
//#include <Windows.h>
//using namespace std;
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251); 
//    string str;
//    cout << "Введіть рядок: ";
//    getline(cin, str);  
//    for (int i = 0; i < str.length(); i++) {
//        if (str[i] == ' ') {
//            str[i] = '\t';
//        }
//    }
//    cout << "Рядок з табуляціями: " << endl << str << endl;
//
//    return 0;
//}
//
//#include <iostream>
//#include <string>
//#include <Windows.h>
//using namespace std;
//
//int main() {
//    string str;
//    int letter = 0, digit = 0, other = 0;
//
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251); 
//
//    cout << "Введіть рядок: ";
//    getline(cin, str);
//
//
//    for (int i = 0; i < str.length(); i++) {
//        if (isalpha(str[i])) {
//            letter++;
//        }
//        else if (isdigit(str[i])) {
//            digit++;
//        }
//        else {
//            other++;
//        }
//    }
//
//
//    cout << "Кількість літер: " << letter << endl;
//    cout << "Кількість цифр: " << digit << endl;
//    cout << "Кількість інших символів: " << other << endl;
//
//    return 0;
//}
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
    string sentence;
    int wordCount = 0;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введіть речення: ";
    getline(cin, sentence);

    // Підрахунок слів
    bool inWord = false;
    for (int i = 0; i < sentence.length(); i++) {
        if (isspace(sentence[i])) {
            inWord = false;
        }
        else if (!inWord) {
            inWord = true;
            wordCount++;
        }
    }


    cout << "Кількість слів: " << wordCount << endl;

    return 0;
}
