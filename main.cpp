
#include "pch.h"
#include <iostream>
#include <locale.h>
#include <vector>
#include "human.h"
#include "student.h"

using namespace std;

int main(int atgc, char* argv[]){
	vector<int> scores;
	setlocale(LC_ALL, "rus");

	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(2);
	scores.push_back(2);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	student *stud = new student("Петров", "Иван", "Алексеевич", scores);

	cout << stud->get_full_name() << endl;
	cout << "Средний балл: " << stud->get_averaged_score() << endl;
	system("pause");
	return 0;
}