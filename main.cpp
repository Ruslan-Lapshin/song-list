




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
		std::cout << "������� ���" << std::endl;
		std::cin >> name;
		std::cout << "����� ��������" << std::endl;
		std::cin >> cl;
		std::cout << "�������" << std::endl;
		std::cin >> level;
		std::cout << "�����������" << std::endl;
		std::cin >> id;

	}
	void print()
	{
		std::cout << "���-" << name << " " << "����� ��������-" << cl << " " << "�������-" << level << " " << "�� ��������-" << id;
	}
	Student()
	{
		std::cout << "������� ������" << std::endl;
		name = "����������";
		cl = "��122";
		level = 25;
		id = 2222;
		std::cout << "���-" << name << " " << "����� ��������-" << cl << " " << "�������-" << level << " " << "�� ��������-" << id;


	}
	~Student()
	{
		std::cout << "������� ��������";
	}


};

int main()
{
	setlocale(LC_ALL, "Rus");
	std::vector <Student> vector_points;
	int kol;
	std::cout << "������� ���������� ���������" << std::endl;
	std::cin >> kol;
	vector_points.resize(kol);

	for (size_t i = 0; i < kol; i++)
	{

		vector_points.at(i).print();
	}
	std::cout << std::endl;

	std::cout << "������� �� �� �������� ������ � ��������? ���� �� ������� 1";
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
		std::cout << "�� �������������";