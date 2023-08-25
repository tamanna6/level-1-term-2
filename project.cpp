#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 100;
const int MAX_COURSES = 50;

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
    Course courses[MAX_COURSES];
    int numCourses;

    Student(string name, int studentId) : name(name), studentId(studentId), numCourses(0) {}
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

// Function to add a new student
void addStudent(Student students[], int& numStudents) {
    string name;
    int studentId;
    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter student ID: ";
    cin >> studentId;
    students[numStudents++] = Student(name, studentId);
    cout << "Student added successfully!\n";
}

// Function to add a new course
void addCourse(Course courses[], int& numCourses) {
    string name;
    double fee;
    cout << "Enter course name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter course fee: ";
    cin >> fee;
    courses[numCourses++] = Course(name, fee);
    cout << "Course added successfully!\n";
}

// Function to display all students
void displayStudents(const Student students[], int numStudents) {
    cout << "\n--- All Students ---\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "ID: " << students[i].studentId << ", Name: " << students[i].name << endl;
    }
}

// Function to display all courses
void displayCourses(const Course courses[], int numCourses) {
    cout << "\n--- All Courses ---\n";
    for (int i = 0; i < numCourses; ++i) {
        cout << "Course: " << courses[i].name << ", Fee: $" << courses[i].fee << endl;
    }
}

// Function to generate a bill for a student
void generateBill(const Student students[], int numStudents, const Course courses[], int numCourses) {
    int studentId;
    cout << "Enter student ID: ";
    cin >> studentId;

    // Find the student by ID
    const Student* student = nullptr;
    for (int i = 0; i < numStudents; ++i) {
        if (students[i].studentId == studentId) {
            student = &students[i];
            break;
        }
    }

    if (student == nullptr) {
        cout << "Student not found!\n";
        return;
    }

    // Display student details
    cout << "\n--- Bill for Student ---\n";
    cout << "Name: " << student->name << endl;
    cout << "ID: " << student->studentId << endl;

    // Calculate total bill
    double totalBill = 0.0;
    for (int i = 0; i < student->numCourses; ++i) {
        totalBill += student->courses[i].fee;
    }

    // Display courses and their fees
    cout << "\nCourses:\n";
    for (int i = 0; i < student->numCourses; ++i) {
        cout << "- " << student->courses[i].name << ", Fee: $" << student->courses[i].fee << endl;
    }

    cout << "\nTotal Bill: $" << totalBill << endl;
}

int main() {
    Student students[MAX_STUDENTS];
    Course courses[MAX_COURSES];
    int numStudents = 0;
    int numCourses = 0;

    int choice;
    while ((choice = showMainMenu()) != 6) {
        switch (choice) {
            case 1:
                addStudent(students, numStudents);
                break;
            case 2:
                addCourse(courses, numCourses);
                break;
            case 3:
                displayStudents(students, numStudents);
                break;
            case 4:
                displayCourses(courses, numCourses);
                break;
            case 5:
                generateBill(students, numStudents, courses, numCourses);
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
                break;
        }
    }

    return 0;
}

