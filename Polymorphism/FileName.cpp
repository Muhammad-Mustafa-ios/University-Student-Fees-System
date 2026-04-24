
//TASK#01***********************************************************************************************

#include <iostream>
using namespace std;

// Base class 
class Operation {
public:
    // Virtual function
    virtual double perform(double a, double b) {
        return 0;
    }

    // Virtual destructor 
    virtual ~Operation() {}
};

// Addition class
class Addition : public Operation {
public:
    double perform(double a, double b) override {
        return a + b;
    }
};

// Subtraction class
class Subtraction : public Operation {
public:
    double perform(double a, double b) override {
        return a - b;
    }
};

// Multiplication class
class Multiplication : public Operation {
public:
    double perform(double a, double b) override {
        return a * b;
    }
};

int main() {
    // Sample values
    double num1 = 10;
    double num2 = 5;

    // Array of base class pointers
    Operation* operations[3];

    // Assigning different operations
    operations[0] = new Addition();
    operations[1] = new Subtraction();
    operations[2] = new Multiplication();

    cout << "Using same values: " << num1 << " and " << num2 << endl;
    cout << "----------------------------------" << endl;

    // Loop to call perform() for each object
    for (int i = 0; i < 3; i++) {
        cout << "Result " << i + 1 << ": "
            << operations[i]->perform(num1, num2) << endl;
    }

    // Free memory
    for (int i = 0; i < 3; i++) {
        delete operations[i];
    }

    return 0;


    //TASK#02***********************************************************************************************



#include <iostream>
#include <string>
    using namespace std;


    // Base class
    class Student {
    protected:
        std::string name;
        std::string program;

    public:
        Student(const string& name, const string& program)
            : name(name), program(program) {
        }

        virtual ~Student() {} // virtual destructor

        // Public getters 
        string getName() const { return name; }
        string getProgram() const { return program; }

        // Pure virtual function 
        virtual double calculateFee() const = 0;
    };

    // Derived class
    class BSStudent : public Student {
    private:
        double baseFee;
        double labCharges;

    public:
        BSStudent(const string& name, const string& program,
            double baseFee, double labCharges)
            : Student(name, program), baseFee(baseFee), labCharges(labCharges) {
        }

        double calculateFee() const override {
            return baseFee + labCharges;
        }
    };

    // Derived class
    class MSStudent : public Student {
    private:
        double baseFee;
        double researchFee;

    public:
        MSStudent(const string& name, const string& program,
            double baseFee, double researchFee)
            : Student(name, program), baseFee(baseFee), researchFee(researchFee) {
        }

        double calculateFee() const override {
            return baseFee + researchFee;
        }
    };

    // Derived class
    class PhDStudent : public Student {
    private:
        double baseFee;
        double supervisionFee;

    public:
        PhDStudent(const string& name, const string& program,
            double baseFee, double supervisionFee)
            : Student(name, program), baseFee(baseFee), supervisionFee(supervisionFee) {
        }

        double calculateFee() const override {
            return baseFee + supervisionFee;
        }
    };

    int main() {
        // array of Student pointer
        Student* students[3];

        // Initializing pointer

        students[0] = new BSStudent("Alice Chen", "Computer Science", 40000, 5000);
        students[1] = new MSStudent("Bob Khan", "Data Science", 60000, 10000);
        students[2] = new PhDStudent("Carla Gomez", "Physics", 80000, 15000);


        cout << "==== University Fee System ====\n";
        for (int i = 0; i < 3; ++i) {
            // Dynamic dispatch
            cout << "Student: " << students[i]->getName()
                << "\nProgram: " << students[i]->getProgram()
                << "\nCalculated Fee: $" << students[i]->calculateFee()
                << "\n---------------------------\n";
        }

        // deleting dynamically allocated memory 
        for (int i = 0; i < 3; ++i) {
            delete students[i];
        }

        return 0;
    }


    //TASK#03***********************************************************************************************


#include <iostream>
    using namespace std;

    // Abstract Base Class
    class Person {
    public:
        // Pure virtual functions
        virtual void getData() = 0;
        virtual void showData() = 0;
    };

    // Student Class
    class Student : public Person {
    private:
        string name;
        int rollNo;
        float gpa;

    public:
        void getData() {
            cout << "\n--- Enter Student Details ---" << endl;
            cout << "Name: ";
            cin >> name;
            cout << "Roll Number: ";
            cin >> rollNo;
            cout << "GPA: ";
            cin >> gpa;
        }

        void showData() {
            cout << "\n--- Student Record ---" << endl;
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << rollNo << endl;
            cout << "GPA: " << gpa << endl;
        }
    };

    // Lecturer Class
    class Lecturer : public Person {
    private:
        string name;
        int empID;
        string department;

    public:
        void getData() {
            cout << "\n--- Enter Lecturer Details ---" << endl;
            cout << "Name: ";
            cin >> name;
            cout << "Employee ID: ";
            cin >> empID;
            cout << "Department: ";
            cin >> department;
        }

        void showData() {
            cout << "\n--- Lecturer Record ---" << endl;
            cout << "Name: " << name << endl;
            cout << "Employee ID: " << empID << endl;
            cout << "Department: " << department << endl;
        }
    };

    int main() {
        // Using base class pointers
        Person* p1;
        Person* p2;

        Student s;
        Lecturer l;

        // Assigning objects to base pointers
        p1 = &s;
        p2 = &l;

        // Taking input
        p1->getData();
        p2->getData();

        // Displaying data
        p1->showData();
        p2->showData();

        return 0;
    }
