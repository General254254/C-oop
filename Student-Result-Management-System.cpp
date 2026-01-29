#include <iostream>
using namespace std;

class Student {
private:
    int studentID;
    string name;
    float marks[3];

public:
    Student(int id, string studentName) {
        studentID = id;
        name = studentName;
    }

    void inputMarks() {
        cout << "Enter marks for 3 subjects for " << name << ": ";
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
        }
    }

    float calculateAverage() {
        float sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += marks[i];
        }
        return sum / 3;
    }

    char getGrade() {
        float average = calculateAverage();

        if (average >= 70)
            return 'A';
        else if (average >= 60)
            return 'B';
        else if (average >= 50)
            return 'C';
        else if (average >= 40)
            return 'D';
        else
            return 'F';
    }

    void displayResult() {
        cout << "Student ID: " << studentID << endl;
        cout << "Name: " << name << endl;

        cout << "Marks: ";
        for (int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;

        cout << "Average: " << calculateAverage() << endl;
        cout << "Grade: " << getGrade() << endl;
    }
};

int main() {
    Student s1(101, "John Doe");
    s1.inputMarks();
    s1.displayResult();

    return 0;
}