#include <iostream>
#include "Base.h"
#include "Car.h"
using namespace std;

int main()
{
	setlocale(0, "");
	Car car1;
	Car car2(1400,131, "white:");
	Car car3(car2);

}