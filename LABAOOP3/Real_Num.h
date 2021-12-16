#pragma once
class Real_Num
{
private:
	static const int Real_Num_Count = 10;
	float Real_Num_Array[Real_Num_Count];
	long float temp1 = 0, temp2 = 0, temp3 = 0, temp4 = 0;
public:
	Real_Num();
	~Real_Num(void);

	void Fill_Array();
	void Show();

	void Show_Biggest(int value);
	void Show_Biggest(float value, int value2);
	void Show_Lowest(int value);
	void Show_Lowest(float value, int value2);

	Real_Num& operator+();
	Real_Num& operator-();
	Real_Num& operator*();
	Real_Num& operator/(int a);
};

