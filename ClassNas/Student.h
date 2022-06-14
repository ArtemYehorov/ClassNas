#include <iostream>
#include <string>
#pragma once
using namespace std;

class Student
{
	string name;
	int age;
	int* ratesPractics = nullptr;
	int* ratesExam = nullptr;
	int* rates = nullptr;
	int rate_count = 0;
	int rate_count_exam = 0;
	int rate_count_practics = 0;

public:
	Student();
	Student(const Student& original);

	void AddRateExam(int rateEx);
	void AddRatePractics(int ratePr);
	void AddRate(int rate);

	void PrintRates() const;
	void PrintRatesPractics() const;
	void PrintRatesExam() const;

	~Student();
};
