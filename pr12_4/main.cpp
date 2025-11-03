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