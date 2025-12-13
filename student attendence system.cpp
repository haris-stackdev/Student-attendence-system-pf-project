#include <iostream>
#include <string>
using namespace std;

int main()
{
    string students[100];      // store student names
    char attendance[100];      // 'P' for Present, 'A' for Absent
    int studentCount = 0;
    int choice;

    do
    {
        cout << "\n===== STUDENT ATTENDANCE SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Mark Attendance\n";
        cout << "3. View Attendance\n";
        cout << "4. Remove Student\n";    
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Add Student
        if (choice == 1)
        {
            cin.ignore();
            cout << "Enter student name: ";
            getline(cin, students[studentCount]);
            attendance[studentCount] = '-'; // not marked yet
            studentCount++;
            cout << "Student added successfully!\n";
        }

        // Mark Attendance
        else if (choice == 2)
        {
            if (studentCount == 0)
            {
                cout << "No students available to mark attendance.\n";
            }
            else
            {
                cout << "\nMark Attendance (P = Present, A = Absent)\n";
                for (int i = 0; i < studentCount; i++)
                {
                    cout << students[i] << ": ";
                    cin >> attendance[i];
                    attendance[i] = toupper(attendance[i]);
                }
                cout << "Attendance marked successfully!\n";
            }
        }

        // View Attendance
        else if (choice == 3)
        {
            if (studentCount == 0)
            {
                cout << "No students added yet.\n";
            }
            else
            {
                cout << "\n===== ATTENDANCE LIST =====\n";
                for (int i = 0; i < studentCount; i++)
                {
                    cout << i + 1 << ". " << students[i]
                         << " - " << attendance[i] << endl;
                }
            }
        }

        // REMOVE STUDENT 
        else if (choice == 4)
        {
            if (studentCount == 0)
            {
                cout << "No students to remove.\n";
            }
            else
            {
                int removeIndex;
                cout << "Enter student number to remove: ";
                cin >> removeIndex;

                if (removeIndex < 1 || removeIndex > studentCount)
                {
                    cout << "Invalid student number!\n";
                }
                else
                {
                    // Shift elements left to fill gap/ problem solved using index shifting
                    for (int i = removeIndex - 1; i < studentCount - 1; i++)
                    {
                        students[i] = students[i + 1];
                        attendance[i] = attendance[i + 1];
                    }
                    studentCount--;
                    cout << "Student removed successfully!\n";
                }
            }
        }

        // Exit
        else if (choice == 5)
        {
            cout << "Exiting program...\n";
        }

        else
        {
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 5);

    return 0;
}

