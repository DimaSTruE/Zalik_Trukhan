#include <iostream>
#include "Real_Num.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "Ukrainian");
	Real_Num tmp;

	try
	{
		cout << "¬вед≥ть числа в≥д -20 до 20: " << endl;
		tmp.Fill_Array();
		tmp.Show();

		tmp.Show_Biggest(1);
		tmp.Show_Biggest(1.2, 2);
		tmp.Show_Lowest(1);
		tmp.Show_Lowest(1.2, 2);

		+tmp;
		-tmp;
		*tmp;
		tmp.operator/(1);
	}
	catch (const char)
	{
		cout << "’алепа" << endl;
	}

	system("pause");
}