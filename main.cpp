




#include<iostream>
#include<string>
#include<vector>

class Student
{
public:
	std::string name;
	std::string cl;
	int level, id;

	void edit()
	{
		std::cout << "Введите имя" << std::endl;
		std::cin >> name;
		std::cout << "Класс обучения" << std::endl;
		std::cin >> cl;
		std::cout << "Возраст" << std::endl;
		std::cin >> level;
		std::cout << "Индификатор" << std::endl;
		std::cin >> id;

	}
	void print()
	{
		std::cout << "Имя-" << name << " " << "Класс обучения-" << cl << " " << "Возраст-" << level << " " << "Ид студента-" << id;
	}
	Student()
	{
		std::cout << "Студент создан" << std::endl;
		name = "Константин";
		cl = "БВ122";
		level = 25;
		id = 2222;
		std::cout << "Имя-" << name << " " << "Класс обучения-" << cl << " " << "Возраст-" << level << " " << "Ид студента-" << id;


	}
	~Student()
	{
		std::cout << "Студент исключен";
	}


};

int main()
{
	setlocale(LC_ALL, "Rus");
	std::vector <Student> vector_points;
	int kol;
	std::cout << "Введите количество студентов" << std::endl;
	std::cin >> kol;
	vector_points.resize(kol);

	for (size_t i = 0; i < kol; i++)
	{

		vector_points.at(i).print();
	}
	std::cout << std::endl;

	std::cout << "Желаете ли вы изменить данные о студенте? Если да нажмите 1";
	int kol1;
	std::cin >> kol1;
	if (kol1 = 1)
	{
		for (size_t i = 0; i < kol1; i++)
		{
			vector_points.at(i).edit();
		}
	}
	else
	{
		std::cout << "Не редактировать";