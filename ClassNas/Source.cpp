#include <iostream>
#include <string>
#include"Student.h"
using namespace std;



int main()
{
	Student s;
	s.AddRate(2);
	s.AddRate(3);
	s.PrintRates();

	Student copy = s;

	//StudentFileWriter fw;
	//// ���������� ������ ��� ������ �������� � ����� �����
	//fw.SaveStudentToFile(s, "C://1//itstep.txt");

}

//class Student
//{
//	string name;
//	int age;
//	int* ratesPractics = nullptr;
//	int* ratesExam = nullptr;
//	int* rates = nullptr; // ������������ ������ ������
//	int rate_count = 0; // ���������� ������ � �������public:
//	int rate_count_exam = 0;
//	int rate_count_practis = 0;
//
//public:
//	Student()
//	{
//		name = "Vasya Pupkin";
//		age = 30;
//	}
//
//	// ����������� ����������� 
//	// � ��� ������, ����� � ����� ����� ������� �������� ����� ������� ���� Student,
//	// ��������� �������� ������������� �����������
//	// ������ ������������ �����������: ��� ������ ����-���������, ������� ������ ����� ������-�� ����������� ���������� ������� ��� ���� ������ ������� ��������
//	// ������ ���� ���� �������� ����� ������ (����� �������� ������ ��� ���� ����� ������� ������)
//	// �������� �� ����� ���� � ����� ������ (������, ��� & ��� *) - ������ ��� ����� ����������� �������� �� ��������, ������� ������ �� ����� �������� �����, � ����� ���-�� ������ ������� 
//	// const ����� ����� Student& ��������� ������ ��������� ������������� ������� 
//	Student(const Student& original)
//	{
//		// � ����� � ������� ���� Student
//		// � ���� name ������� ����� �������� ���� name �� ���������
//		name = original.name;
//		age = original.age; // � ���� ����� ������� age ������� �������� ���� age ��������� �������
//		rate_count = original.rate_count;
//
//		// � ����� �������� ����� ���� ���������� ������ ������
//		rates = new int[rate_count];
//
//		// ������� ������ �� ������� ������ ��������� �� ������ ������ (� �����) ������ ����� ��������
//		for (int i = 0; i < rate_count; i++)
//		{
//			rates[i] = original.rates[i];
//		}
//	}
//
//
//	void AddRateExam(int rateEx)
//	{
//		int* tempEx = new int[rate_count_exam + 1];
//		for (int i = 0; i < rate_count_exam; i++)
//		{
//			tempEx[i] = ratesExam[i];
//		}
//		tempEx[rate_count_exam] = rateEx;
//		delete[] ratesExam;
//		ratesExam = tempEx;
//		rate_count_exam++;
//	}
//
//	void AddRatePractics(int ratePr)
//	{
//		int* tempPr = new int[rate_count_practis + 1];
//		for (int i = 0; i < rate_count_practis; i++)
//		{
//			tempPr[i] = ratesPractics[i];
//		}
//		tempPr[rate_count_practis] = ratePr;
//		delete[] ratesPractics;
//		rates = tempPr;
//		rate_count_practis++;
//	}
//
//	void AddRate(int rate)
//	{
//		int* temp = new int[rate_count + 1];
//		for (int i = 0; i < rate_count; i++)
//		{
//			temp[i] = rates[i];
//		}
//		temp[rate_count] = rate;
//		delete[] rates;
//		rates = temp;
//		rate_count++;
//	} 
//
//	void PrintRates() const
//	{
//		for (int i = 0; i < rate_count; i++)
//		{
//			cout << rates[i] << ", ";
//		}
//		cout << "\n";
//	} 
//
//	void PrintRatesPractics() const
//	{
//		for (int i = 0; i < rate_count_practis; i++)
//		{
//			cout << ratesPractics[i] << ", ";
//		}
//		cout << "\n";
//	}
//
//	void PrintRatesExam() const
//	{
//		for (int i = 0; i < rate_count_exam; i++)
//		{
//			cout << ratesExam[i] << ", ";
//		}
//		cout << "\n";
//	}
//
//
//	/*void CleanMemory()
//	{
//		delete[] rates;
//		rates = nullptr;
//	} */
//	// ��� ��� � ������ ���� ����-���������, ��� ������� ���-�� (� ������������, �������, ����� ������ ������) ���� �������� ������ �� ����� ����������, ��
//	// ��� ������ ���-�� ���������� ���������� ������� �� ��������� ������. ����� ������� ����������� �����-����������, ������� �����
//	// ���������� ������������� � ������ ������ ������� (��� �������� �� �����), � � ���� ������ ����� ����� ��������� ������ ��������� delete ��� ���� ����������, ������� ������� ������ ������������ ������
//	// ~��������������()
//	// ��������� � ���������� �������� ������ (��� ������, ��� ��� ������ ������������)
//	// ���������� ����������� ���������� �� ���� �������
//	// � ����� ������, � ������ ������ ���� ���������� - ���� ����������� ���� ������ ������������, ���� � ������ ����� ����������� ������������
//	~Student()
//	{
//		// �������� ���������� ����������� - ������� ������
//		cout << "Student D-TOR!\n";
//		if (rates != nullptr)
//		{
//			delete[] rates;
//			rates = nullptr;
//		}
//
//		cout << "Student D-TOR!\n";
//		if (ratesExam != nullptr)
//		{
//			delete[] ratesExam;
//			ratesExam = nullptr;
//		}
//
//		cout << "Student D-TOR!\n";
//		if (ratesPractics != nullptr)
//		{
//			delete[] ratesPractics;
//			ratesPractics = nullptr;
//		}
//	}
//};

//������ ������ ������ ����� ����������� ������ �� �������� � ���� , �� ��� � ����������� ������� 
//class StudentFileWriter
//{
//public:
//	void SaveStudentToFile(Student copy, string path_to_file)
//	{
//		//�������� �������� ���������� �� ��������
//		////�������� �� ������ ������ �������� � ����
//		//FILE* f;
//		//fwrite();
//	}
//};

//int main()
//{
//	//for (int i = 0; i < 1000000; i++)
//	//{
//	// // �������� ��������� ���������� ���� ������� (����������� �� �����)
//	// Student s;
//	// for (int i = 0; i < 1000; i++)
//	// {
//	// s.AddRate(rand() % 12 + 1);
//	// } // s.CleanMemory(); // //s.PrintRates();
//	// //Sleep(100); // // � ����� �������� ��������� ������ ���� ������� ����������� �� �����
//	// // ���� ��������: ������ ������
//	// // ������� ��� �������� ��� ����� ���� ������� ������ �����������
//	// // ��������, ���� ������ ������
//	//}
//	Student s; // 1) ������ � ����������, ����� ���������� ������� ���������, � ������ ����������� �� ����� Student* ptr = new Student;
//	// 2) ������ � ����������, ������ ��� ����������� ���� �������� ������ �� ����
//
//}


//
//int main()
//{
//	//for (int i = 0; i < 1000000; i++)
//	//{
//	// // �������� ��������� ���������� ���� ������� (����������� �� �����)
//	// Student s;
//	// for (int i = 0; i < 1000; i++)
//	// {
//	// s.AddRate(rand() % 12 + 1);
//	// }
//
//
//
//	// s.CleanMemory();
//
//
//
//	// //s.PrintRates();
//	// //Sleep(100);
//
//
//
//	// // � ����� �������� ��������� ������ ���� ������� ����������� �� �����
//	// // ���� ��������: ������ ������
//	// // ������� ��� �������� ��� ����� ���� ������� ������ �����������
//	// // ��������, ���� ������ ������
//	//}
//
//	Student s; // 1) ������ � ����������, ����� ���������� ������� ���������, � ������ ����������� �� �����
//
//
//
//	Student* ptr = new Student;
//	delete ptr; // 2) ������ � ����������, ������ ��� ����������� ���� �������� ������ �� ����
//}

//class Animal
//{
//public:
//	virtual void Speak() { // �������� ����� �������� �����-�� ���������� �����
//
//	}
//};
//
//
//
//class Cat : public Animal
//{
//public:
//	void Speak() { // ��������������� ������
//		cout << "MEOW!\n";
//	}
//};
//
//
//
//class Dog : public Animal
//{
//public:
//	void Speak() { // ��������������� ������
//		cout << "WOOF!\n";
//	}
//};
//
//
//
//int main()
//{
//	srand(time(0));
//	// ����������� �������
//	int r = rand() % 2; // 0 ��� 1
//	Animal* animal;
//	if (r == 0) // ����� ���
//	{
//		animal = new Cat;
//	}
//	else // �����
//	{
//		animal = new Dog;
//	}
//
//
//
//
//
//
//
//	// ����������� ������ ����
//	animal->Speak(); // ���������� ��� ������� ������� (�� ����� ����������) �� ��������!
//}
//
////class Cat
////{
////public:
////	Cat()
////	{
////		cout << "C-TOR WITHOUT PARAMS!\n";
////	}
////}; int main()
////{
////	// ����������� ����� �������� ����!
////	Cat c = Cat::Cat();
////}