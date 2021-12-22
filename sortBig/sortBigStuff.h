#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>
using namespace std;
using std::chrono::duration_cast;

const int REPORT_SIZE = 1000000; // one million

struct Student
{
	string name;
	float  gpa;
	char   researchPaper[REPORT_SIZE];
};



void display(Student students[], int size);
void sort(Student students[], int size);