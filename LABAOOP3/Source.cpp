#include <iostream>
#include "Real_Num.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "Ukrainian");
	Real_Num tmp;

	try
	{
		cout << "������ ����� �� -20 �� 20: " << endl;
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
		cout << "������" << endl;
	}

	system("pause");
}