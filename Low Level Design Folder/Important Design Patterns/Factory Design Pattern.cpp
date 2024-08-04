#include <iostream>

// Library classes
class Vehicle {
public:
    virtual void printVehicle() = 0; // Pure virtual function
    virtual ~Vehicle() = default;    // Virtual destructor for proper cleanup of derived classes
};

class TwoWheeler : public Vehicle {
public:
    void printVehicle() override {
        std::cout << "I am two wheeler" << std::endl;
    }
};

class FourWheeler : public Vehicle {
public:
    void printVehicle() override {
        std::cout << "I am four wheeler" << std::endl;
    }
};

// Client (or user) class
class Client {
private:
    Vehicle* pVehicle;

public:
    Client(int type) {
        if (type == 1) {
            pVehicle = new TwoWheeler();
        } else if (type == 2) {
            pVehicle = new FourWheeler();
        } else {
            pVehicle = nullptr;
        }
    }

    ~Client() {
        cleanup();
    }

    void cleanup() {
        if (pVehicle != nullptr) {
            delete pVehicle;
            pVehicle = nullptr;
        }
    }

    Vehicle* getVehicle() {
        return pVehicle;
    }
};

// Driver program
int main() {
    Client pClient(1);
    Vehicle* pVehicle = pClient.getVehicle();
    if (pVehicle != nullptr) {
        pVehicle->printVehicle();
    }
    pClient.cleanup();

    return 0;
}
