# pr12


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

[students.txt](https://github.com/user-attachments/files/23301750/students.txt)
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
    ofstream fout("students.txt"); 
    string name = "Іваненко Іван";
    double grade = 95;

    fout << name << "," << grade << endl;
    fout.close();

    ifstream fin("students.txt");
    string line;
    cout << "Вміст файлу students.txt:" << endl;
    while (getline(fin, line)) {
        cout << line << endl;
    }
    fin.close();

    ofstream fout2("students.txt", ios::app);
    fout2 << "Петренко Олена,87" << endl; 
    fout2.close();
    
    ifstream fin_numbers("numbers.txt"); 
    int n, sum = 0;

    while (fin_numbers >> n) { 
        sum += n;
    }

    cout << "Сума чисел: " << sum << endl;
    fin_numbers.close(); 
    
    ifstream fin_count("students.txt");
    string student_name; 
    int student_grade; 
    int count = 0;

    while (getline(fin_count, student_name, ',') >> student_grade) { 
        if (student_grade >= 90) { 
            count++; 
        }
    }

    cout << "Кількість студентів зі стипендією: " << count << endl;
    fin_count.close(); 
}

Завдання 5

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("students.txt");
    if (!fin) {
        cout << "Не вдалося відкрити файл students.txt" << endl;
        return 1;
    }

    ofstream fout("report.txt"); 
    if (!fout) {
        cout << "Не вдалося створити файл report.txt" << endl;
        return 1;
    }

    string surname, name;
    int grade, dorm, extra; // extra - зайве число з файлу
    int countScholar = 0, countDorm = 0, total = 0, n = 0;

    // Заголовок
    cout << "№  ПІБ студента      Бал  Гурт  Стипендія  Гуртожиток\n";
    fout << "№  ПІБ студента      Бал  Гурт  Стипендія  Гуртожиток\n";

    while (fin >> surname >> name >> grade >> dorm >> extra) {
        n++;
        total += grade;

        // Вивід на екран
        cout << n << "  " << surname << " " << name << "  " << grade << "    " << dorm << "    ";
        // Запис у файл
        fout << n << "  " << surname << " " << name << "  " << grade << "    " << dorm << "    ";

        if (grade >= 90) {
            cout << "✅";
            fout << "✅";
            countScholar++;
        } else {
            cout << "  ";
            fout << "  ";
        }

        if (dorm == 1) {
            cout << "★";
            fout << "★";
            countDorm++;
        }

        cout << endl;
        fout << endl;
    }

    double avg = n > 0 ? (double)total / n : 0;

 
    cout << "\nКількість студентів зі стипендією: " << countScholar << endl;
    cout << "Кількість студентів у гуртожитку: " << countDorm << endl;
    cout << "Середній бал групи: " << avg << endl;

  
    fout << "\nКількість студентів зі стипендією: " << countScholar << endl;
    fout << "Кількість студентів у гуртожитку: " << countDorm << endl;
    fout << "Середній бал групи: " << avg << endl;

    fin.close();
    fout.close();

    cout << "\nРезультати також записані у файл report.txt" << endl;

    return 0;
}

[students.txt](https://github.com/user-attachments/files/23301834/students.txt)
Іваненко Іван 95 1 1
Петренко Олена 87 0 0
Ковальчук Сергій 92 1 1
Бондаренко Марія 78 0 0
Шевченко Андрій 88 1 0
Шевченко Олена 98 1 1

[report.txt](https://github.com/user-attachments/files/23301839/report.txt)
№  ПІБ студента      Бал  Гурт  Стипендія  Гуртожиток
1  Іваненко Іван  95    1    ✅★
2  Петренко Олена  87    0      
3  Ковальчук Сергій  92    1    ✅★
4  Бондаренко Марія  78    0      
5  Шевченко Андрій  88    1      ★
6  Шевченко Олена  98    1    ✅★

Кількість студентів зі стипендією: 3
Кількість студентів у гуртожитку: 4
Середній бал групи: 89.6667


