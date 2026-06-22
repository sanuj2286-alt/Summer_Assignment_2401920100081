#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Abstract Base Class
class Compartment {
public:
    virtual string notice() = 0; // Pure virtual function
    virtual ~Compartment() {}    // Virtual destructor
};

// Derived Classes
class FirstClass : public Compartment {
public:
    string notice() override {
        return "First Class Compartment: Premium facilities available.";
    }
};

class Ladies : public Compartment {
public:
    string notice() override {
        return "Ladies Compartment: Reserved for women passengers.";
    }
};

class General : public Compartment {
public:
    string notice() override {
        return "General Compartment: Open for all passengers.";
    }
};

class Luggage : public Compartment {
public:
    string notice() override {
        return "Luggage Compartment: For luggage and parcels only.";
    }
};

int main() {
    srand(time(0));

    Compartment* compartments[10];

    // Create 10 random compartments
    for (int i = 0; i < 10; i++) {
        int choice = rand() % 4 + 1; // Random number between 1 and 4

        switch (choice) {
            case 1:
                compartments[i] = new FirstClass();
                break;
            case 2:
                compartments[i] = new Ladies();
                break;
            case 3:
                compartments[i] = new General();
                break;
            case 4:
                compartments[i] = new Luggage();
                break;
        }
    }

    cout << "Compartment Notices:\n\n";

    // Polymorphic behavior
    for (int i = 0; i < 10; i++) {
        cout << "Compartment " << i + 1 << ": "
             << compartments[i]->notice() << endl;
    }

    // Free memory
    for (int i = 0; i < 10; i++) {
        delete compartments[i];
    }

    return 0;
}