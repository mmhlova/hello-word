#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int fam(string x) {
	string mas[20] = { "Антонова",  "Буркина", "Завгородний", "Кузнецов", "Кузнецова", "Пипар", "Эбель", "Сиряева", "Михайлова", "Смирнова", "Цветков", "Цыбульский", "Самчик", "Шамина", "Григорьева", "Тихомирова", "Колчанова", "Балабанова", "Кленов", "Головань"
	};
	for (int i = 0; i <= 19; i++) {
		if (mas[i] == x) {
			int num = i + 1;
			return num;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите искомую фамилию: ";
	string x;
	cin >> x;
	cout << "Номер вводимой фамилии:" << fam(x) << endl;
}