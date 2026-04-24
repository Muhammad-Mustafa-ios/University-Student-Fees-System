# 🎓 C++ OOP Concepts – Polymorphism & Abstract Classes

This repository contains three C++ programs that demonstrate important Object-Oriented Programming (OOP) concepts, especially **runtime polymorphism** and **abstract classes**.

These tasks are part of academic practice to understand how inheritance, virtual functions, and dynamic binding work in real-world scenarios.

---

## 📌 Task 01: Calculator Engine (Runtime Polymorphism)

### 🔍 Overview

This program demonstrates **runtime polymorphism** using a simple calculator system.

* A base class `Operation` defines a virtual function `perform(double a, double b)`
* Derived classes:

  * `Addition`
  * `Subtraction`
  * `Multiplication`
* Each class overrides the `perform()` function with its own logic

### ⚙️ Key Concept

Using an array of base class pointers (`Operation*`), different operations are executed at runtime depending on the object type.

### ✅ Output Example

```
Addition: 10 + 5 = 15
Subtraction: 10 - 5 = 5
Multiplication: 10 * 5 = 50
```

---

## 📌 Task 02: University Fee Management System

### 🔍 Overview

This program applies **polymorphism** to calculate fees for different types of students.

* Base class `Student`

  * Data members: `name`, `program`
  * Pure virtual function: `calculateFee()`
* Derived classes:

  * `BSStudent`
  * `MSStudent`
  * `PhDStudent`

Each class calculates fees using different formulas (tuition + lab/thesis charges).

### ⚙️ Key Concept

Dynamic dispatch is used through `Student*` pointers to call the correct `calculateFee()` function.

### ✅ Features

* Stores multiple student types
* Calculates fees dynamically
* Displays:

  * Name
  * Program
  * Total Fee

---

## 📌 Task 03: Personnel Record Management System

### 🔍 Overview

This program demonstrates **abstract classes** and real-life data handling.

* Abstract base class `Person`

  * Pure virtual functions:

    * `getData()`
    * `showData()`
* Derived classes:

  * `Student` (Roll No, GPA)
  * `Lecturer` (Employee ID, Department)

### ⚙️ Key Concept

Using base class pointers (`Person*`) to handle different types of personnel records.

### ✅ Features

* Takes user input
* Stores different record types
* Displays structured information

---

## 🧠 Concepts Covered

* Inheritance
* Function Overriding
* Virtual Functions
* Pure Virtual Functions
* Abstract Classes
* Runtime Polymorphism (Dynamic Binding)
* Base Class Pointers

---

## 🚀 How to Run

1. Copy the code into any C++ compiler (e.g., Dev C++, CodeBlocks, VS Code)
2. Compile the program:

   ```
   g++ filename.cpp -o output
   ```
3. Run:

   ```
   ./output
   ```

---

## 📚 Purpose

This repository is created for learning and practicing core OOP concepts in C++. It helps in understanding how polymorphism is used in real-world applications like calculators, university systems, and personnel management.

---

## ✍️ Author

**Muhammad Mustafa**
(Software Engineering Student)

---

## ⭐ Note

Feel free to modify or enhance the programs (e.g., add menu systems, file handling, or GUI) to make them more advanced and practical.

---
