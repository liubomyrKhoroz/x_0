#include "player1.h"
#include<iostream>
#include"field.h"
#include<iomanip>
using namespace std;

void player1::draw_x(char arr[9])
{
	
	char x;
	cout << "It is first player turn" << endl;
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
		cout << "wrong data please enter available room(not "<<x<<")" << endl;
		return draw_x(arr);
	}
	for ( int i=0 ; i < 9; i++) {
		
			if (arr[i] == x) {
		arr[i] ='X';
			}	
	}
	
	for ( int i=0 ; i < 9; i++) {

		
			cout << "|" << setw(6) << arr[i] << setw(6) << "|";
			if (i == 2||i==5||i== 8) {
				cout << endl;
			}
	}
	
	   check_res(arr);
	 
}
