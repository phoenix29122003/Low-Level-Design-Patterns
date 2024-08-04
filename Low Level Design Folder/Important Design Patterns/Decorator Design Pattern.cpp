#include <iostream>
#include <string>
#include <memory>

// Coffee Interface
class Coffee {
public:
    virtual std::string getDescription() const = 0;
    virtual double getCost() const = 0;
    virtual ~Coffee() = default;
};

// PlainCoffee Class
class PlainCoffee : public Coffee {
public:
    std::string getDescription() const override {
        return "Plain Coffee";
    }

    double getCost() const override {
        return 2.0;
    }
};

// CoffeeDecorator Abstract Class
class CoffeeDecorator : public Coffee {
protected:
    std::shared_ptr<Coffee> decoratedCoffee;
public:
    CoffeeDecorator(std::shared_ptr<Coffee> decoratedCoffee) : decoratedCoffee(decoratedCoffee) {}

    std::string getDescription() const override {
        return decoratedCoffee->getDescription();
    }

    double getCost() const override {
        return decoratedCoffee->getCost();
    }
};

// MilkDecorator Class
class MilkDecorator : public CoffeeDecorator {
public:
    MilkDecorator(std::shared_ptr<Coffee> decoratedCoffee) : CoffeeDecorator(decoratedCoffee) {}

    std::string getDescription() const override {
        return decoratedCoffee->getDescription() + ", Milk";
    }

    double getCost() const override {
        return decoratedCoffee->getCost() + 0.5;
    }
};

// SugarDecorator Class
class SugarDecorator : public CoffeeDecorator {
public:
    SugarDecorator(std::shared_ptr<Coffee> decoratedCoffee) : CoffeeDecorator(decoratedCoffee) {}

    std::string getDescription() const override {
        return decoratedCoffee->getDescription() + ", Sugar";
    }

    double getCost() const override {
        return decoratedCoffee->getCost() + 0.2;
    }
};

// Main Function
int main() {
    // Plain Coffee
    std::shared_ptr<Coffee> coffee = std::make_shared<PlainCoffee>();
    std::cout << "Description: " << coffee->getDescription() << std::endl;
    std::cout << "Cost: $" << coffee->getCost() << std::endl;

    // Coffee with Milk
    std::shared_ptr<Coffee> milkCoffee = std::make_shared<MilkDecorator>(coffee);
    std::cout << "\nDescription: " << milkCoffee->getDescription() << std::endl;
    std::cout << "Cost: $" << milkCoffee->getCost() << std::endl;

    // Coffee with Sugar and Milk
    std::shared_ptr<Coffee> sugarMilkCoffee = std::make_shared<SugarDecorator>(milkCoffee);
    std::cout << "\nDescription: " << sugarMilkCoffee->getDescription() << std::endl;
    std::cout << "Cost: $" << sugarMilkCoffee->getCost() << std::endl;

    return 0;
}
