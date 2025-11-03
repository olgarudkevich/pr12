# pr12

Завдання 1
[students.txt](https://github.com/user-attachments/files/23297654/students.txt)
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
    ofstream fout("students.txt"); 
    string name = "Іваненко Іван";
    double grade = 95;

    fout << name << "," << grade << endl; // запис
    fout.close();

    ifstream fin("students.txt");
    string line;
    while (getline(fin, line)) { // читання рядка
        cout << line << endl;
    }
    fin.close();
}ploading students.txt…]()


Завдання 2
[students.txt](https://github.com/user-attachments/files/23297648/students.txt)
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
    ofstream fout("students.txt"); 
    string name = "Іваненко Іван";
    double grade = 95;

    fout << name << "," << grade << endl; // запис
    fout.close();

    ifstream fin("students.txt");
    string line;
    while (getline(fin, line)) { // читання рядка
        cout << line << endl;
    }
    fin.close();
}

    ofstream fout2("students.txt", ios::app); // режим дописування
    fout << "Петренко Олена,87,0" << endl;
    fout2.close();
}

Завдання 3
[students.txt](https://github.com/user-attachments/files/23301599/students.txt)
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
    ofstream fout("students.txt"); 
    string name = "Іваненко Іван";
    double grade = 95;

    fout << name << "," << grade << endl; // запис
    fout.close();

    ifstream fin("students.txt");
    string line;
    cout << "Вміст файлу students.txt:" << endl;
    while (getline(fin, line)) { // читання рядка
        cout << line << endl;
    }
    fin.close();

    ofstream fout2("students.txt", ios::app); // режим дописування
    fout2 << "Петренко Олена,87" << endl; 
    fout2.close();
    
    // (Примітка: цей код очікує, що файл "numbers.txt" вже існує)
    ifstream fin_numbers("numbers.txt"); 
    int n, sum = 0;

    while (fin_numbers >> n) { // зчитування числа 
        sum += n;
    }

    cout << "Сума чисел: " << sum << endl;
    fin_numbers.close(); 
}

Завдання 4 
