# 🎓 CGPA Calculator Using C

A simple **CGPA Calculator built using C programming** that calculates a student's Cumulative Grade Point Average based on subject credits and grade points.

This is my first beginner-friendly C project, created as part of my journey to learn programming, improve logical thinking, and build practical projects.

## ✨ Features

- 📚 Accepts the number of subjects.
- 🔢 Takes subject credits and grade points as input.
- 🧮 Calculates credit-weighted grade points.
- 📊 Displays total credits and calculated CGPA.
- ✅ Includes basic input validation.

## 🛠️ Technologies Used

- **Language:** C
- **Header File:** `stdio.h`
- **Concepts:** Variables, data types, `scanf()`, `printf()`, loops, conditional statements, and arithmetic operations.

## 🧠 Formula Used

CGPA is calculated using the credit-weighted average:

**CGPA = Total Weighted Grade Points / Total Credits**

Where:

**Weighted Grade Points = Subject Credits × Subject Grade Point**

## 💻 Example Output

```text
===== CGPA CALCULATOR =====
Enter number of subjects: 3

Subject 1
Enter subject credits: 4
Enter grade point: 8.5

Subject 2
Enter subject credits: 3
Enter grade point: 9

Subject 3
Enter subject credits: 3
Enter grade point: 8

===== RESULT =====
Total Credits: 10
CGPA: 8.50
```

## 🚀 How to Run

1. Clone this repository or download the source code.
2. Save the program as `cgpa_calculator.c`.
3. Compile it using a C compiler such as GCC:

   ```bash
   gcc cgpa_calculator.c -o cgpa_calculator
   ```

4. Run the program:

   **Windows:**
   ```bash
   cgpa_calculator.exe
   ```

   **Linux/macOS:**
   ```bash
   ./cgpa_calculator
   ```

## 📚 What I Learned

Through this project, I practiced:

- Using variables and data types in C.
- Taking user input and displaying output.
- Using `for` loops to process multiple subjects.
- Applying conditional statements for input validation.
- Performing arithmetic calculations.
- Understanding weighted averages.

## 🔮 Future Improvements

- Add support for multiple semesters.
- Validate grade points against a configurable grading scale.
- Display individual subject details.
- Calculate SGPA for each semester.
- Improve the user interface and error handling.

## 👨‍💻 About the Developer

I'm a B.Tech Computer Science and Engineering (AI & ML) student and a beginner in programming, currently learning C from the fundamentals.

This project is one of my first steps toward becoming a better programmer. I'm learning by building small projects and improving them as I gain experience.

**Learning one line of code at a time! 🚀**

⭐ If you find this project useful, feel free to star the repository.
