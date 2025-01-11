/*
 ▄▄▄▄▄▄▄▄▄▄   ▄         ▄  ▄▄        ▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄       ▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄       ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄         ▄  ▄▄▄▄▄▄▄▄▄▄▄ 
▐░░░░░░░░░░▌ ▐░▌       ▐░▌▐░░▌      ▐░▌▐░░░░░░░░░░░▌▐░░▌     ▐░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌     ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌       ▐░▌▐░░░░░░░░░░░▌
▐░█▀▀▀▀▀▀▀█░▌▐░▌       ▐░▌▐░▌░▌     ▐░▌▐░█▀▀▀▀▀▀▀█░▌▐░▌░▌   ▐░▐░▌ ▀▀▀▀█░█▀▀▀▀ ▐░█▀▀▀▀▀▀▀▀▀      ▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌▐░▌       ▐░▌▐░█▀▀▀▀▀▀▀▀▀ 
▐░▌       ▐░▌▐░▌       ▐░▌▐░▌▐░▌    ▐░▌▐░▌       ▐░▌▐░▌▐░▌ ▐░▌▐░▌     ▐░▌     ▐░▌               ▐░▌       ▐░▌▐░▌       ▐░▌▐░▌       ▐░▌▐░▌       ▐░▌▐░▌       ▐░▌▐░▌          
▐░▌       ▐░▌▐░█▄▄▄▄▄▄▄█░▌▐░▌ ▐░▌   ▐░▌▐░█▄▄▄▄▄▄▄█░▌▐░▌ ▐░▐░▌ ▐░▌     ▐░▌     ▐░▌               ▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄▄▄ 
▐░▌       ▐░▌▐░░░░░░░░░░░▌▐░▌  ▐░▌  ▐░▌▐░░░░░░░░░░░▌▐░▌  ▐░▌  ▐░▌     ▐░▌     ▐░▌               ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌
▐░▌       ▐░▌ ▀▀▀▀█░█▀▀▀▀ ▐░▌   ▐░▌ ▐░▌▐░█▀▀▀▀▀▀▀█░▌▐░▌   ▀   ▐░▌     ▐░▌     ▐░▌               ▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀█░█▀▀ ▐░█▀▀▀▀█░█▀▀ ▐░█▀▀▀▀▀▀▀█░▌ ▀▀▀▀█░█▀▀▀▀  ▀▀▀▀▀▀▀▀▀█░▌
▐░▌       ▐░▌     ▐░▌     ▐░▌    ▐░▌▐░▌▐░▌       ▐░▌▐░▌       ▐░▌     ▐░▌     ▐░▌               ▐░▌       ▐░▌▐░▌     ▐░▌  ▐░▌     ▐░▌  ▐░▌       ▐░▌     ▐░▌               ▐░▌
▐░█▄▄▄▄▄▄▄█░▌     ▐░▌     ▐░▌     ▐░▐░▌▐░▌       ▐░▌▐░▌       ▐░▌ ▄▄▄▄█░█▄▄▄▄ ▐░█▄▄▄▄▄▄▄▄▄      ▐░▌       ▐░▌▐░▌      ▐░▌ ▐░▌      ▐░▌ ▐░▌       ▐░▌     ▐░▌      ▄▄▄▄▄▄▄▄▄█░▌
▐░░░░░░░░░░▌      ▐░▌     ▐░▌      ▐░░▌▐░▌       ▐░▌▐░▌       ▐░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌     ▐░▌       ▐░▌▐░▌       ▐░▌▐░▌       ▐░▌▐░▌       ▐░▌     ▐░▌     ▐░░░░░░░░░░░▌
 ▀▀▀▀▀▀▀▀▀▀        ▀       ▀        ▀▀  ▀         ▀  ▀         ▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀       ▀         ▀  ▀         ▀  ▀         ▀  ▀         ▀       ▀       ▀▀▀▀▀▀▀▀▀▀▀ 
                                                                                                                                                                              
*/

#include <iostream>

#pragma warning(once : 6385) // just check warning on C6385 


static void myInitialize(const int STUDENT_COUNT, const int MARKS_STUDENT, int& n, int** m, std::string* names) {
    int sum = 0;
    bool commone = true;
    for (int i = 0; i < n; i++) {
        std::cout << "Enter student name " << i + 1 << ": ";
        std::cin >> names[i];
        std::cout << "Enter 5 grades for student " << i + 1 << ": ";
        for (int j = 0; j < MARKS_STUDENT; j++) {
            std::cin >> m[i][j];
        }
    }
}
// Check who has excellent grades
static void checkExcellent(const int MARKS_STUDENT, int n, int** m, std::string* names) {
    for (int i = 0; i < n; i++) {
        bool isExcellent = true; // TO CHECK WHO IS AN EXCELLENT STUDENT
        int sum = 0;
        for (int j = 0; j < MARKS_STUDENT; j++) {
            sum += m[i][j];
            if (m[i][j] != 5) {
                isExcellent = false;
            }
        }
        float avg = static_cast<float>(sum) / MARKS_STUDENT;
        std::cout << "\nStudent " << names[i] << ":\n";
        std::cout << "Average grade: " << avg;
        if (isExcellent) {
            std::cout << " - Excellent student!";
        }
    }
}
int main() {
    const int STUDENT_COUNT = 0;
    const int MARKS_STUDENT = 5;
    int n;
    std::cout << "Enter number of students: ";
    std::cin >> n;
    std::string* names = new std::string[n];
    int** m = new int* [n];
    for (int i = 0; i < n; i++) {
        m[i] = new int[MARKS_STUDENT];
    }
    myInitialize(STUDENT_COUNT, MARKS_STUDENT, n, m, names);
    checkExcellent(MARKS_STUDENT, n, m, names);
    for (int i = 0; i < n; i++) {
        delete[] m[i];
    }
    delete[] m;
    return 0;
}