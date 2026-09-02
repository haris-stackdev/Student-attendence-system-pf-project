# Student Attendance System

A simple **Student Attendance System** developed in **C++**. The program is a console-based application that allows users to manage students and record their attendance.

## Features

The system provides the following options:

1. **Add Student** – Add a student's name to the system.
2. **Mark Attendance** – Mark each student as:

   * `P` = Present
   * `A` = Absent
3. **View Attendance** – Display all students along with their attendance status.
4. **Remove Student** – Remove a student from the list.
5. **Exit** – Close the program.

The main menu provides these five operations.

## Technologies Used

* **Language:** C++
* **Libraries:** `<iostream>`, `<string>`
* **Concepts Used:**

  * Arrays
  * Loops
  * Conditional statements
  * `if-else`
  * `do-while` loop
  * Strings
  * Character variables
  * User input/output
  * Array element shifting

## How It Works

The program uses two arrays:

```cpp
string students[100];
char attendance[100];
```

The `students` array stores student names, while the `attendance` array stores their attendance status. The program can store up to **100 students**.

### 1. Add Student

The user enters a student's name. The student's attendance is initially set to `-`, meaning attendance has not been marked yet.

```cpp
attendance[studentCount] = '-';
```

The student count is then increased.

### 2. Mark Attendance

The program asks the user to enter attendance for every student.

* `P` → Present
* `A` → Absent

The entered character is converted to uppercase using `toupper()`.

### 3. View Attendance

The system displays the student number, name, and attendance status.

Example:

```text
===== ATTENDANCE LIST =====
1. Ali - P
2. Ahmed - A
3. Hassan - P
```

This functionality is implemented using a `for` loop.

### 4. Remove Student

The user enters the student number they want to remove.

After removal, the program shifts the remaining array elements one position to the left so there is no gap in the list.

### 5. Exit

Selecting option `5` exits the program.

```text
Exiting program...
```

The menu continues to appear until the user chooses option 5.

## Example

```text
===== STUDENT ATTENDANCE SYSTEM =====
1. Add Student
2. Mark Attendance
3. View Attendance
4. Remove Student
5. Exit
Enter your choice: 1

Enter student name: Ali
Student added successfully!
```

After marking attendance:

```text
===== ATTENDANCE LIST =====
1. Ali - P
2. Ahmed - A
```

## How to Compile and Run

### Using g++

```bash
g++ student_attendence_system.cpp -o attendance
```

Then run:

**Windows:**

```bash
attendance.exe
```

**Linux/macOS:**

```bash
./attendance
```

## Limitations

* The program can store a maximum of **100 students**.
* Data is stored only while the program is running.
* Attendance is stored for the current list of students only.
* There is no database or file storage.
* The program does not currently validate whether the user enters only `P` or `A`.

## Future Improvements

Possible improvements include:

* Save attendance to a file.
* Add dates for attendance records.
* Validate `P` and `A` input.
* Add student IDs.
* Calculate attendance percentages.
* Add a search student feature.
* Use structures or classes for better data organization.
* Add a graphical user interface.

## Author

**Student Attendance System**
Developed as a C++ programming project.

## License

This project is created for **educational purposes**.
