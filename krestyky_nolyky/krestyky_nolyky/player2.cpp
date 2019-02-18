#include "player2.h"
#include<iostream>
#include<iomanip>
using namespace std;

void player2::draw_o(char arr[9])
{	label:
	char x;
	cout << "It is second player turn" << endl;
	cout << "Enter the room you want to choose" << endl;
	cin >> x;
	system("cls");
	if (arr[static_cast<int>(x) - 49] == 'O' || arr[static_cast<int>(x) - 49] == 'X') {
		for (int i = 0; i < 9; i++) {

			cout << "|" << setw(6) << arr[i] << setw(6) << "|";

			if (i == 2 || i == 5 || i == 8) {
				cout << endl;
			}
		}
		cout << "wrong data please enter available room(not " << x << ")" << endl;
		goto label;
	}
	for (int i = 0; i < 9; i++) {

		if ( arr[x-1]== 'O'|| arr[x - 1] =='X') {
			cout << "wrong data" << endl;
		}
	}
	
	for (int i=0; i < 9; i++) {

		if (arr[i] == x) {
			arr[i] = 'O';
		}
	}
	for (int i = 0; i < 9; i++) {
	
			cout << "|" << setw(6) << arr[i]<< setw(6) << "|";
		
			if (i == 2 || i == 5 || i == 8) {
				cout << endl;
			}
	}
	check_res(arr);
}

