/*
 ▄               ▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄
▐░▌             ▐░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌
 ▐░▌           ▐░▌ ▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀▀▀  ▀▀▀▀█░█▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌
  ▐░▌         ▐░▌  ▐░▌          ▐░▌               ▐░▌     ▐░▌       ▐░▌▐░▌       ▐░▌
   ▐░▌       ▐░▌   ▐░█▄▄▄▄▄▄▄▄▄ ▐░▌               ▐░▌     ▐░▌       ▐░▌▐░█▄▄▄▄▄▄▄█░▌
    ▐░▌     ▐░▌    ▐░░░░░░░░░░░▌▐░▌               ▐░▌     ▐░▌       ▐░▌▐░░░░░░░░░░░▌
     ▐░▌   ▐░▌     ▐░█▀▀▀▀▀▀▀▀▀ ▐░▌               ▐░▌     ▐░▌       ▐░▌▐░█▀▀▀▀█░█▀▀
      ▐░▌ ▐░▌      ▐░▌          ▐░▌               ▐░▌     ▐░▌       ▐░▌▐░▌     ▐░▌
       ▐░▐░▌       ▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄▄▄      ▐░▌     ▐░█▄▄▄▄▄▄▄█░▌▐░▌      ▐░▌
        ▐░▌        ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌     ▐░▌     ▐░░░░░░░░░░░▌▐░▌       ▐░▌
         ▀          ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀       ▀       ▀▀▀▀▀▀▀▀▀▀▀  ▀         ▀

*/

#include <iostream>
#include <vector>
#include <fstream>

using std::vector; // for specific vector definition
using std::ofstream; // for specific file output definition

struct LETS {
    const int marks_students = 5;
    int n;
    vector<std::string> names;
    vector<vector<int>>marks;
    void pedro() {
        std::cout << "Enter the number of students: ";
        std::cin >> n;
        names.resize(n); // resize for changes the number of elements in a vector
        marks.resize(n, vector<int>(marks_students));
    }
};
// For files
static bool initializeFiles(ofstream myfiles, const char* filename) {
    myfiles.open(filename); // to open .txt file
    // Check if our file doesn't open
    if (!myfiles.is_open()) {
        std::cout << "ERROR TO CREATE FILES!";
        return false;
    }
    return true;
}
static void commone(const int& marks_students, int& n, std::vector<std::string>& names, std::vector<std::vector<int>>& marks) {
    names.resize(n);
    marks.resize(n);
    for (auto& student_marks : marks) // foreach loop
        student_marks.resize(marks_students);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter student name " << i + 1 << ": ";
        std::cin >> names[i];
        std::cout << "Enter 5 grades for student " << i + 1 << ": ";
        for (int j = 0; j < marks_students; j++) {
            std::cin >> marks[i][j];
        }
    }
}
// The initialization itself
static void myInitialize(const int& marks_students, int& n, std::vector<std::string>& names, std::vector<std::vector<int>>& marks, ofstream& myfiles) {
    for (int i = 0; i < n; i++) {
        bool isExcellent = true;
        int sum = 0;
        for (int j = 0; j < marks_students; j++) {
            sum += marks[i][j];
            if (marks[i][j] != 5) {
                isExcellent = false;
            }
        }
        // Calculation of the sum itself
        float average = static_cast<float>(sum) / marks_students;
        std::cout << "\nName: " << names[i] << ":\n";
        myfiles << "\nName: " << names[i];
        std::cout << "Average grade: " << average;
        myfiles << "Average grade: " << average;
        if (isExcellent) {
            std::cout << " - Excellent student!";
            myfiles << " - Excellent student";
        }
    }
}
int main() {
    LETS lets; // for structure
    lets.pedro(); // the function itself
    ofstream myfiles("Paplo.txt");
    commone(lets.marks_students, lets.n, lets.names, lets.marks);
    myInitialize(lets.marks_students, lets.n, lets.names, lets.marks, myfiles);
    myfiles.close(); // closing the file
    return 0;
}