/*
	Name: What number is missing?
	Copyright: 2019 Augusto Machado Ramos
	Author: Augusto Machado Ramos
	Date: 07/18/2019 10:13 am
	Comment language: en
	Description: 
		The goal was to develop a simple game to search a number missing
            and using a text user interface.
		In addition to developing the notion of programming in general,
			know the fundamentals of software programming, Software Engineering concepts,
			in addition to developing basic knowledge in C++.
*/

# include <iostream>
# include <cstdlib>
# include <ctime>
# include <stdlib.h>
using namespace std;

#define true 1
#define false 0

void printGameBoard(int *numberRandomMissing);

int main() {	
	int numberRandomMissing;
	int level = 0, answerUser = 0;
	bool isTheAnswerCorrect = true;
	
	// Based on clock computer, the system generate a random number
	srand(time(0));
	
	while (isTheAnswerCorrect == true) {
		// A random function return a number between zero and one hundred
		numberRandomMissing = (1 + (rand() % 100));
		
		printGameBoard(&numberRandomMissing);
		
		cout << "What number is missing?" << endl;
		cin >> answerUser;
		
		if (numberRandomMissing != answerUser){
			isTheAnswerCorrect = false;
		} else {
			system ("CLS");
			level++;
		}
	}
	cout << level << endl;
	
	return 0;
}

void printGameBoard(int *numberRandomMissing) {
	for(int i = 1; i < 101; i++){
		if (i == *numberRandomMissing) {
			if (i%10 == 0) {
				cout << "   " << endl;
			} else {
				cout << "    ";
			}
		} else if(i > 0 && i < 10){
			cout << "   " << i;
		} else if (i%10 == 0) {
			cout << "  " << i << endl;
		} else {
			cout << "  " << i;
		}
	}
}
