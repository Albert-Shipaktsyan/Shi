#include <iostream>
#include <string>
#include <windows.h>
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string films[28] = { "Карты, деньги, два ствола","Залечь на дно в Брюгге","7 дней в аду","Большой Лебовски",
		"Лицо со шрамом","На игле","Драйв","Твин пикс","Большой куш","50 оттенков серого","Бесстыжие",
		"Во все тяжкие","Ледибаг","Универ","Реквием по мечте","Враг","Интерстеллар","Друзья",
		"Реальные пацаны","Коносуба","Рик и Морти","Токийский гуль","Спанч Боб","Евангелион","Наруто",
		"Игры разума","Зведные войны","Властелин колец" };
	string persons[28] = { "Артур Чапарян","Папич","Мэйби Бэйби","Lana Del Rey","Хоффманита","Максим Лавров",
		"Скриптонит","Ильяс Фахурдинов","Weeknd","ZAYN","Alexandra Dadario","Justin Bieber","Cher","LIDA",
		"Джиган","Альбина Сексова","Егор Шип","Кочанов Марк Борисович","Doja Cat","Eva Elfie",
		"Ким Кардашьян","Кайли Дженнер","Selena Gomez","Райан Гослинг","Джейсон Стетхэм",
		"ramzes666","Icona Pop","Thomas Mraz" };
	string music[9] = { "Young and Beautiful - Lana Del Rey","Pillowtalk - ZAYN","Blinding Light - Weeknd",
		"Spirits - The Strumbellas","Кадиллак - Моргенштерн","Гэнг Бэнг - LIDA","Dior - Егор Шип",
		"Ribs - Lorde","Лапки - Хоффманита" };
	string lit = "абвгдежзиклмнопрстуфхцчшщэюя";
	string name, surname;
	int year;
	cout << "Имя: ";
	cin >> name;
	cout << "Фамииля: ";
	cin >> surname;
	cout << "Год рождения: ";
	cin >> year;
	for (int i = 0; i < 28; i++)
		if (name[0] == lit[i]) {
			cout << "Ваш фильм: " << films[i] << endl;
			break;
		}
	for (int j = 0; j < 28; j++)
		if (surname[0] == lit[j]) {
			cout << "Ваша звезда: " << persons[j] << endl;
			break;
		}

	while (year / 10 != 0)
	{
		year = year / 1000 + (year / 100) % 10 + (year / 10) % 10 + year % 10;
	}
	year = year - 1;
	cout << "Музыка для вас: " << music[year] << endl;

	return 0;
}