#include "field.h"
#include<iostream>
#include <iomanip>
using namespace std;

void field::check_res(char arr[9])
{	
	
		if (arr[0] == arr[1]&&arr[1] == arr[2]&& arr[2] == 'X') {
			cout << "First player wins" << endl;

		}
else	if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == 'O') {
			cout << "Second player wins" << endl;
		}
else	if (arr[3] == arr[4] && arr[4] == arr[5] && arr[5] == 'X')
		{
			cout << "First player wins" << endl;
		}
else	if (arr[3] == arr[4] && arr[4] == arr[5] && arr[5] == 'O')
		{
			cout << "Second player wins" << endl;
		}
else	if (arr[6] == arr[7] && arr[7] == arr[8] && arr[8] == 'X')
		{
			cout << "First player wins" << endl;
		}
else	if (arr[6] == arr[7] && arr[7] == arr[8] && arr[8] == 'O')
		{
			cout << "Second player wins" << endl;
		}
else	if (arr[0] == arr[3] && arr[3] == arr[6] && arr[6] == 'X')
		{
			cout << "First player wins" << endl;
		}
else	if (arr[0] == arr[3] && arr[3] == arr[6] && arr[6] == 'O')
		{
			cout << "Second player wins" << endl;
		}
else	if (arr[1] == arr[4] && arr[4] == arr[7] && arr[7] == 'X')
		{
			cout << "First player wins" << endl;
		}
else	if (arr[1] == arr[4] && arr[4] == arr[7] && arr[7] == 'O')
		{
			cout << "Second player wins" << endl;
		}
else	if (arr[2] == arr[5] && arr[5] == arr[8] && arr[8] == 'X')
		{
			cout << "First player wins" << endl;
		}
else	if (arr[2] == arr[5] && arr[5] == arr[8] && arr[8] == 'O')
		{
			cout << "Second player wins" << endl;
		}
else	if (arr[0] == arr[4] && arr[4] == arr[8] && arr[8] == 'X')
		{
			cout << "First player wins" << endl;
		}
else	if (arr[0] == arr[4] && arr[4] == arr[8] && arr[8] == 'O')
		{
			cout << "Second player wins" << endl;
		}
else	if (arr[2] == arr[4] && arr[4] == arr[6] && arr[6] == 'X')
		{
			cout << "First player wins" << endl;
		}
else	if (arr[2] == arr[4] && arr[4] == arr[6] && arr[6] == 'O')
		{
			cout << "Second player wins" << endl;
		}
		
	else {
	cout << "It is draw" << endl;
		}
}

void field::show_field()
{
	for (int i = 0;i < 9; i++) {		
			cout <<"|"<< setw(6) << arr[i]<<setw(6)<<"|";	
			if (i == 2 || i == 5 || i == 8) {
				cout << endl;
			}
}
}

field::field()
{
}


field::~field()
{
}
