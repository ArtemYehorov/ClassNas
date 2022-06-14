#include"Student.h"

Student::Student()
{
	name = "Vasya Pupkin";
	age = 30;
}

Student::Student(const Student& original)
{

	name = original.name;
	age = original.age;

	rate_count = original.rate_count;
	rate_count_exam = original.rate_count_exam;
	rate_count_practics = original.rate_count_practics;

	ratesPractics = new int [rate_count_practics];
	ratesExam = new int[rate_count_exam];
	rates = new int[rate_count];

	for (int i = 0; i < rate_count; i++)
	{
		rates[i] = original.rates[i];
	}

	for (int i = 0; i < rate_count_exam; i++)
	{
		ratesExam[i] = original.ratesExam[i];
	}

	for (int i = 0; i < rate_count_practics; i++)
	{
		ratesPractics[i] = original.ratesPractics[i];
	}
}


void Student::AddRateExam(int rateEx)
{
	int* tempEx = new int[rate_count_exam + 1];
	for (int i = 0; i < rate_count_exam; i++)
	{
		tempEx[i] = ratesExam[i];
	}
	tempEx[rate_count_exam] = rateEx;
	delete[] ratesExam;
	ratesExam = tempEx;
	rate_count_exam++;
}

void Student::AddRatePractics(int ratePr)
{
	int* tempPr = new int[rate_count_practics + 1];
	for (int i = 0; i < rate_count_practics; i++)
	{
		tempPr[i] = ratesPractics[i];
	}
	tempPr[rate_count_practics] = ratePr;
	delete[] ratesPractics;
	rates = tempPr;
	rate_count_practics++;
}

void Student::AddRate(int rate)
{
	int* temp = new int[rate_count + 1];
	for (int i = 0; i < rate_count; i++)
	{
		temp[i] = rates[i];
	}
	temp[rate_count] = rate;
	delete[] rates;
	rates = temp;
	rate_count++;
}

void Student::PrintRates() const
{
	for (int i = 0; i < rate_count; i++)
	{
		cout << rates[i] << ", ";
	}
	cout << "\n";
}

void Student::PrintRatesPractics() const
{
	for (int i = 0; i < rate_count_practics; i++)
	{
		cout << ratesPractics[i] << ", ";
	}
	cout << "\n";
}

void Student::PrintRatesExam() const
{
	for (int i = 0; i < rate_count_exam; i++)
	{
		cout << ratesExam[i] << ", ";
	}
	cout << "\n";
}



Student::~Student()
{

	cout << "Student D-TOR!\n";
	if (rates != nullptr)
	{
		delete[] rates;
		rates = nullptr;
	}

	cout << "Student D-TOR!\n";
	if (ratesExam != nullptr)
	{
		delete[] ratesExam;
		ratesExam = nullptr;
	}

	cout << "Student D-TOR!\n";
	if (ratesPractics != nullptr)
	{
		delete[] ratesPractics;
		ratesPractics = nullptr;
	}
}