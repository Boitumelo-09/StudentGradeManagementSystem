# Student Grades Management System

   ### Dev. Boitumelo M
 
## Description
This is a simple C++ program that allows users to manage student grades using **arrays and pointers**. It enables users to:
- Enter the number of students.
- Store student names and grades dynamically using pointers.
- Calculate the **average grade** of the class.
- Display student details along with their **Pass/Fail** status.

---

## Features
- Uses **dynamic memory allocation** for storing student names and grades.
- Implements **pointer arithmetic** for accessing and modifying array values.
- Computes the **class average**.
- Displays student names, grades, and their **status** (Pass if ≥50, otherwise Fail).

---

## How to Run
1. Clone or download this repository.
2. Open the project folder and compile the C++ file using a compiler (e.g., g++ or MinGW for Windows).
3. Run the compiled executable.
4. Follow the prompts to enter student details and view results.

Example compilation and execution in terminal:
```sh
 g++ student_grades.cpp -o student_grades
 ./student_grades
```

---

## Sample Output
```
Enter the number of students: 3

Enter name for student 1: Alice
Enter grade for student Alice: 78

Enter name for student 2: Bob
Enter grade for student Bob: 45

Enter name for student 3: Charlie
Enter grade for student Charlie: 62

Student Grades:
Alice - 78 (Pass)
Bob - 45 (Fail)
Charlie - 62 (Pass)

Class Average: 61.67
```

---

## Improvements & Challenges
- Sort students by **grades** using pointers.
- Identify the **highest and lowest grade**.
- Allow users to **update a student’s grade**.
- Implement the program using a **struct or class** instead of separate arrays.

---

## License
This project is open-source and free to use for learning purposes.

---

## Author
[Boitumelo Clement M](https://github.com/Boitumelo-09)

