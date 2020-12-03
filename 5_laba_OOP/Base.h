#pragma once
class Base {
public:
	Base() {
		cout << "Конструктор по умолчанию Base\n";
	}
	Base(Base* obj) {
		cout << "Конструктор (Base* obj)\n";
	}
	Base(Base& obj) {
		cout << "Конструктор (Base& obj)\n";
	}

	~Base(){
		cout << "Деструктор Base\n";
	}
};

class Desc : public Base {
public:
	Desc() {
		cout << "Конструктор по умолчанию Desc\n";
	}
	Desc(Desc* obj) {
		cout << "Конструктор (Desc* obj)\n";
	}
	Desc(Desc& obj) {
		cout << "Конструктор (Desc& obj)\n";
	}

	~Desc() {
		cout << "Деструктор Desc\n";
	}
};