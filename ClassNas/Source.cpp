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
	//// дописываем данные про нового студента в конец файла
	//fw.SaveStudentToFile(s, "C://1//itstep.txt");

}

//class Student
//{
//	string name;
//	int age;
//	int* ratesPractics = nullptr;
//	int* ratesExam = nullptr;
//	int* rates = nullptr; // динамический массив оценок
//	int rate_count = 0; // количество оценок в массивеpublic:
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
//	// конструктор копирования 
//	// в тот момент, когда в любом месте проекта создаётся копия объекта типа Student,
//	// программа вызывает специфический конструктор
//	// задача конструктора копирования: под каждое поле-указатель, которое хранит адрес какого-то динамически созданного объекта или даже целого массива объектов
//	// должна быть явно выделена новая память (копия студента создаёт для себя копию массива оценок)
//	// параметр не может быть с типом класса (просто, без & или *) - потому что будет происходить передача по значению, которая влечёт за собой создание копии, а копию кто-то должен сделать 
//	// const перед типом Student& запрещает менять состояние оригинального объекта 
//	Student(const Student& original)
//	{
//		// в копию в объекта типа Student
//		// в поле name пишется копия значения поля name из оригинала
//		name = original.name;
//		age = original.age; // в поле копии объекта age пишется значение поля age оригинала объекта
//		rate_count = original.rate_count;
//
//		// у копии студента будет свой собственнй массив оценок
//		rates = new int[rate_count];
//
//		// перенос оценок из массива оценок оригинала во второй массив (в копию) оценок копии студента
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
//	// так как в классе есть поле-указатель, под которое где-то (в конструкторе, сеттере, любом другом методе) была выделена память на этапе выполнения, то
//	// эту память как-то необходимо возвращать системе во избежание утечек. можно сделать специальный метод-деструктор, который будет
//	// вызываться автоматически в момент гибели объекта (при выгрузке со стека), и в этом методе можно будет выполнить вызовы оператора delete для всех указателей, которые хранили адреса динамической памяти
//	// ~НазваниеКласса()
//	// параметры в деструктор передать нельзя (нет смысла, так как объект уничтожается)
//	// перегрузки деструктора невозможны по этой причине
//	// в любом случае, в классе всегда есть деструктор - либо прописанный явно руками программиста, либо с пустым телом оформленный компилятором
//	~Student()
//	{
//		// основное назначение деструктора - очистка памяти
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

//объект такого класса может скопировать данные по студенту в файл , БД или в эксклквскую таблицу 
//class StudentFileWriter
//{
//public:
//	void SaveStudentToFile(Student copy, string path_to_file)
//	{
//		//передача студента происходит по значению
//		////алгоритм по записы оценок студента в файл
//		//FILE* f;
//		//fwrite();
//	}
//};

//int main()
//{
//	//for (int i = 0; i < 1000000; i++)
//	//{
//	// // создаётся локальная переменная типа Студент (размещается на стеке)
//	// Student s;
//	// for (int i = 0; i < 1000; i++)
//	// {
//	// s.AddRate(rand() % 12 + 1);
//	// } // s.CleanMemory(); // //s.PrintRates();
//	// //Sleep(100); // // в конце итерации локальный объект типа Студент выгружается со стека
//	// // есть проблема: утечка памяти
//	// // студент мог выделять для своих нужд участки памяти динамически
//	// // например, есть массив оценок
//	//}
//	Student s; // 1) попали в деструктор, когда закончится область видимости, и объект выгружается со стека Student* ptr = new Student;
//	// 2) попали в деструктор, потому что программист явно выгрузил объект из хипа
//
//}


//
//int main()
//{
//	//for (int i = 0; i < 1000000; i++)
//	//{
//	// // создаётся локальная переменная типа Студент (размещается на стеке)
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
//	// // в конце итерации локальный объект типа Студент выгружается со стека
//	// // есть проблема: утечка памяти
//	// // студент мог выделять для своих нужд участки памяти динамически
//	// // например, есть массив оценок
//	//}
//
//	Student s; // 1) попали в деструктор, когда закончится область видимости, и объект выгружается со стека
//
//
//
//	Student* ptr = new Student;
//	delete ptr; // 2) попали в деструктор, потому что программист явно выгрузил объект из хипа
//}

//class Animal
//{
//public:
//	virtual void Speak() { // животное может издавать какие-то конкретные звуки
//
//	}
//};
//
//
//
//class Cat : public Animal
//{
//public:
//	void Speak() { // переопределение метода
//		cout << "MEOW!\n";
//	}
//};
//
//
//
//class Dog : public Animal
//{
//public:
//	void Speak() { // переопределение метода
//		cout << "WOOF!\n";
//	}
//};
//
//
//
//int main()
//{
//	srand(time(0));
//	// подбрасываю монетку
//	int r = rand() % 2; // 0 или 1
//	Animal* animal;
//	if (r == 0) // выпал орёл
//	{
//		animal = new Cat;
//	}
//	else // решка
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
//	// полиморфная строка кода
//	animal->Speak(); // конкретный тип объекта заранее (на этапе компиляции) НЕ ИЗВЕСТЕН!
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
////	// конструктор можно вызывать явно!
////	Cat c = Cat::Cat();
////}