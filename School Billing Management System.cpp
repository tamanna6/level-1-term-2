#include <iostream>
#include <string>

using namespace std;

 int MAX_COURSES = 50;

// Class representing a Course
class Course {
public:
    string name;
    double fee;

    Course(string name, double fee) : name(name), fee(fee) {}
};

// Class representing a Student
class Student {
public:
    string name;
    int studentId;
    Course** courses;
    int numCourses;

    Student(string name, int studentId, int maxCourses) : name(name), studentId(studentId), numCourses(0) {
        courses = new Course*[maxCourses];
        for (int i = 0; i < maxCourses; ++i) {
            courses[i] = nullptr; // Initialize each course pointer to nullptr
        }
    }

    ~Student() {
        for (int i = 0; i < numCourses; ++i) {
            delete courses[i]; // Also delete each allocated Course object
        }
        delete[] courses;
    }
};


// Function to display the main menu
int showMainMenu() {
    int choice;
    cout << "\n--- School Billing Management System ---\n";
    cout << "1. Add Student\n";
    cout << "2. Add Course\n";
    cout << "3. Display All Students\n";
    cout << "4. Display All Courses\n";
    cout << "5. Generate Bill\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}

int main(){
    showMainMenu();
}
