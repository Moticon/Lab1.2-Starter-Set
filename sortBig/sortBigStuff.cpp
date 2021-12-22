#include "sortBigStuff.h"
//global array 
Student students[] = {
						{ "nancy", 3.5f },
						{ "bill", 3.7f },
						{ "abe", 4.0f },
						{ "jim", 2.8f },
						{ "betty", 3.9f },
						{ "fred", 3.7f },
						{ "sue", 4.0f },
						{ "harry", 2.8f },
						{ "jimmy", 3.9f },
						{ "amy", 3.5f },
						{ "billy", 3.7f },
						{ "able", 4.0f },
						{ "baker", 2.8f },
						{ "sally", 3.9f },
						{ "nic", 3.7f },
						{ "timothy", 4.0f },
						{ "matthew", 2.8f },
						{ "gary", 3.9f }
};

int main()
{
	const int NUM_STUDENTS = sizeof(students) / sizeof(Student);

	cout << "Before sort:\n " << endl;
	display(students, NUM_STUDENTS);

	auto start = std::chrono::high_resolution_clock::now();
	sort(students, NUM_STUDENTS);
	auto end = std::chrono::high_resolution_clock::now();
	auto elapsed = end - start;
	chrono::nanoseconds ns = duration_cast<chrono::nanoseconds>(elapsed);
	cout << "\nThe sort took " << ns.count()/1000000 << " milliseconds." << endl;

	cout << "\n\nAfter sort:\n" << endl;
	display(students, NUM_STUDENTS);

	return 0;
}




