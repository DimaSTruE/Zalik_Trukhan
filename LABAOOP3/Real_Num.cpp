#include "Real_Num.h"
#include "cctype"
#include <iostream>
using namespace std;
Real_Num::Real_Num(void)
{
}
Real_Num::~Real_Num(void)
{
}

void Real_Num::Fill_Array()
{
	cout << "������ ���� �����: " << endl;
	for (int i = 0; i < Real_Num_Count; i++)
	{
		cin>>Real_Num_Array[i];
		if (Real_Num_Array[i]<=-20 || Real_Num_Array[i]>=20)
		{
			cout << "���������� �������" << endl;
			throw 'F';
		}
	}
}
void Real_Num::Show()
{
	cout << "���� ���� �����: ";
	for (int i = 0; i < Real_Num_Count; i++)
	{
		cout<<Real_Num_Array[i]<<" ";
	}
	cout << endl;
}

void Real_Num::Zalik()
{
	cout << "ZALIK";
}

void Real_Num::Show_Biggest(int value)
{
	float max = Real_Num_Array[0];
	for (int i = 0; i < Real_Num_Count; i++)
	{
		if (Real_Num_Array[i] >= max)
		{
			max = Real_Num_Array[i];
		}
	}
	cout << "Max: " << max << endl;
}
void Real_Num::Show_Biggest(float value, int value2)
{
	float max = Real_Num_Array[0];
	for (int i = 0; i < Real_Num_Count; i++)
	{
		if (Real_Num_Array[i] >= max)
		{
			max = Real_Num_Array[i];
		}
	}
}

void Real_Num::Show_Lowest(int value)
{
	float min = Real_Num_Array[0];
	for (int i = 0; i < Real_Num_Count; i++)
	{
		if (Real_Num_Array[i] <= min)
		{
			min = Real_Num_Array[i];
		}
	}
	cout << "Min: " << min << endl;
}
void Real_Num::Show_Lowest(float value, int value2)
{
	float min = Real_Num_Array[0];
	for (int i = 0; i < Real_Num_Count; i++)
	{
		if (Real_Num_Array[i] <= min)
		{
			min = Real_Num_Array[i];
		}
	}
}

Real_Num& Real_Num::operator+()
{
	for (int i = 0; i < Real_Num_Count; i++)
	{
		temp1 += Real_Num_Array[i];
	}
	cout << "���� �����: "<< temp1 << endl;
	return *this;
}

Real_Num& Real_Num::operator-()
{
	temp2 = Real_Num_Array[0];
	for (int i = 1; i < Real_Num_Count; i++)
	{
		temp2 -= Real_Num_Array[i];
	}
	cout << "г����� �����: " << temp2 << endl;
	return *this;
}

Real_Num& Real_Num::operator*()
{
	temp3 = Real_Num_Array[0];
	for (int i = 1; i < Real_Num_Count; i++)
	{
		temp3 *= Real_Num_Array[i];
	}
	cout << "������� �����: " << temp3 << endl;
	return *this;
}

Real_Num& Real_Num::operator/(int a)
{
	temp4 = Real_Num_Array[0];
	for (int i = 1; i < Real_Num_Count; i++)
	{
		temp4 /= Real_Num_Array[i];
	}
	cout << "ĳ����� �����: " << temp4 << endl;
	return *this;
}
