#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	int ned, day;
	cout << "Введите количество дней: ";
	cin >> day;
	ned = day / 7;
	day = day % 7;
	cout << ned << " Недель/и\t" << day << " Дней/Дня";



	return 0;
}
