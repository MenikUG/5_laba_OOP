#include <iostream>
#include "Base.h"
#include "Car.h"
using namespace std;

void func1(Base obj) {
	cout << "func1(Base obj)\n";
}

void func2(Base* obj) {
	cout << "func2(Base* obj)\n";
}

void func3(Base& obj) { 
	cout << "func3(Base& obj)\n";
}



int main()
{
	setlocale(0, "");
    Car* car1 = new Car();
    Car* car2 = new Jeep();
    Jeep* jeep1 = new Jeep();

    cout << "\t\tПроверка на принадлежность\n";
    cout << "\tПроверка через метод isA\n";
    cout << car1->isA("Car") << endl;
    cout << car2->isA("Jeep") << endl;
    cout << jeep1->isA("Car") << endl;
     
    cout << "\tПроверка через метод classname\n";
    cout << car1->classname() << endl;
    cout << car2->classname() << endl;
    cout << jeep1->classname() << endl;


    cout << "\n\t\tПриведение типов через dynamic cast\n";
    Jeep* jeep2 = dynamic_cast<Jeep*>(car2);
    cout << jeep2->classname() << endl;
    // Перекрытые методы
    jeep2->unvirtualmetod();
    car2->unvirtualmetod();

    cout << "\n\t\tНебезопасное приведение типов\n";
    Jeep* jeep3 = new Jeep;
    if (car2->isA("Jeep"))
        jeep3 = (Jeep*)car2;
    jeep3->unvirtualmetod();
    car2->unvirtualmetod();
    
    cout << "\n\tУдаление объектов\n";
    delete car1;
    delete car2;
    delete jeep1;
    
    cout << "\n\t\tПередача объектов классов Base и Desk в качестве параметров функций\n";

    cout << "\tBase:\n";
    {       
        Base base1 ;
        func1(base1);
        cout << endl;
        Base* base2 = new Base();
        func2(base2);
        cout << endl;
        Base base3 ;
        func3(base3);
        cout << endl; 
        delete base2;
    }
    {
        cout << "\tDesk:\n";
        Desc desc1;
        func1(desc1);
        cout << endl;
        Desc* desc2 = new Desc();
        func2(desc2);
        cout << endl;
        Desc desc3;
        func3(desc3);
        cout << endl;
        delete desc2;
    }
    

}