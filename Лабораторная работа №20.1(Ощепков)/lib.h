class fraction
{
public:
	float first; //оклад
	int second; //количество отработанных дней
	float summa(float a, int b, int col_d_m)
	{
		float summ = a / col_d_m * b;
		return summ;
	};
};

