#pragma once

using namespace std;

class Car {
protected:
	int weight, power;
	string name = "Car";
public:
	Car() {
		weight = 0;
		power = 0;
		cout << "Конструктор Car()\n";
	}
	
	Car(int weight, int power) {
		this->weight = weight;
		this->power = power;
		cout << "Конструктор Car(int weight, int power, string color)\n";
	}

	Car(Car& car) {
		this->power = car.power;
		this->weight = car.weight;
		cout << "Конструктор Car(const Car& car)\n";
	}

	virtual string classname() {
		cout << "Виртуальный метод classname (Car)\n";
		return name;
	}

	virtual bool isA(string classname) {
		cout << "Виртуальный метод isA (Car)\n";
		if (name == "Car")
			return 1;
		else
			return 0;
	}

	virtual ~Car() {
		cout << "Деструктор ~Car\n";
	}
};

class Jeep : public Car {
protected:
	string drive_unit;
	string name = "Jeep";
public:
	Jeep(): Car() {
		drive_unit = "";
		cout << "Конструктор Jeep()\n";
	}

	Jeep(int weight, int power, string dr): Car(weight, power) {
		drive_unit = dr;
		cout << "Конструктор Jeep(int weight, int power, string color, string dr)\n";
	}

	Jeep(Jeep& jeep): Car(jeep) {
		drive_unit = jeep.drive_unit;
		cout << "Конструктор Jeep(Jeep& jeep)\n";
	}

	string classname() {
		cout << "Невиртуальный метод classname (Jeep)\n";
		return name;
	}

	bool isA(string classname) {
		cout << "Невиртуальный метод isA (Jeep)\n";
		if (name == "Jeep")
			return 1;
		else
			return 0;
	}

	~Jeep() {
		cout << "Деструктор ~Jeep\n";
	}
};