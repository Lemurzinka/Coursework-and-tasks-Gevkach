#include <iostream>
using namespace std;

// Базовий клас "Літак"
class Airplane {
public:
virtual void display() {
cout << "Це літак." << endl;
}
virtual double calculateSpeed() = 0;
};

// Похідний клас "Пасажирський літак"
class PassengerPlane : public Airplane {
private:
double maxCapacity;

public:
PassengerPlane(double capacity) : maxCapacity(capacity) {}


void display() {
    cout << "Це пасажирський літак." << endl;
}

double calculateSpeed() {
    return 900.0; // Швидкість пасажирського літака в кілометрах на годину
}
};

// Похідний клас "Військовий літак"
class MilitaryPlane : public Airplane {
private:
double maxAltitude;

public:
MilitaryPlane(double altitude) : maxAltitude(altitude) {}


void display() {
    cout << "Це військовий літак." << endl;
}

double calculateSpeed() {
    return 1200.0; // Швидкість військового літака в кілометрах на годину
}
};

int main() {
// Створення об'єктів різних типів, але з використанням вказівників базового класу
Airplane* airplane1 = new PassengerPlane(200.0);
Airplane* airplane2 = new MilitaryPlane(15000.0);

// Виклик поліморфних методів через вказівники базового класу
airplane1->display();  
cout << "Швидкість пасажирського літака: " << airplane1->calculateSpeed() << " км/год" << endl;

airplane2->display();  
cout << "Швидкість військового літака: " << airplane2->calculateSpeed() << " км/год" << endl;

// Звільнення пам'яті
delete airplane1;
delete airplane2;

return 0;
}
