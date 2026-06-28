# 🎓 C++ OOP Concepts – Polymorphism & Abstract Classes

This repository contains three C++ programs that demonstrate important Object-Oriented Programming (OOP) concepts, especially **runtime polymorphism** and **abstract classes**.

These tasks are part of academic practice to understand how inheritance, virtual functions, and dynamic binding work in real-world scenarios.

---



##  University Fee Management System

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
