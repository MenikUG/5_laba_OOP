#pragma once
class Base {
public:
	Base() {
		cout << "����������� �� ��������� Base\n";
	}
	Base(Base* obj) {
		cout << "����������� (Base* obj)\n";
	}
	Base(Base& obj) {
		cout << "����������� (Base& obj)\n";
	}

	~Base(){
		cout << "���������� Base\n";
	}
};

class Desc : public Base {
public:
	Desc() {
		cout << "����������� �� ��������� Desc\n";
	}
	Desc(Desc* obj) {
		cout << "����������� (Desc* obj)\n";
	}
	Desc(Desc& obj) {
		cout << "����������� (Desc& obj)\n";
	}

	~Desc() {
		cout << "���������� Desc\n";
	}
};