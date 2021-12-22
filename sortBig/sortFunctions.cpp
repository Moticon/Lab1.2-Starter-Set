#include "sortBigStuff.h"

void display(Student students[], int size)
{
	cout << fixed << showpoint << setprecision(1);

	for (int i = 0; i < size; i++)
	{
		cout << setw(10) << left << students[i].name << right << setw(4) << students[i].gpa << endl;
	}
}

void sort(Student students[], int size)
{
	bool swap;
	Student temp;

	do
	{
		swap = false;
		for (int i = 0; i < (size - 1); i++)
		{
			if (students[i].name > students[i + 1].name)
			{
				temp = students[i];
				students[i] = students[i + 1];
				students[i + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}