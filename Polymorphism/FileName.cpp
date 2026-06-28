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


