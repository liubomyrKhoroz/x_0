#pragma once
class field
{
public:
	char arr[9] = {
		'1', '2', '3',
		'4', '5', '6',
		'7', '8', '9'

	};
	void check_res(char arr[9]);
	void show_field();
	field();
	~field();
};

