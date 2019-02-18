#include<iostream>
#include "field.h"
#include"player1.h"
#include"player2.h"
#include"field.h"
#include<iostream>
using namespace std;
int main() 
{
	field a;
	field d;
	player1 b;	
	player2 c;
	a.show_field();
	for(int i=0;i<4;i++){

	b.draw_x(d.arr);
	c.draw_o(d.arr);
	}
	system("pause");

	
}