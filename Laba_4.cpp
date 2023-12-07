#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int c, y;
	short x, a, b;
ma:
	cout << "Введіть a -->";
	cin >> c;
	if (c < -32768 || c>32767)
	{
		cout << "Помилка діапозону. Повторіть введення" << endl;
		goto ma;
	}
	a = c;
	cout << "a=" << a << endl;
mb:
	cout << "Введіть b -->";
	cin >> c;
	if (c < -32768 || c>32767)
	{
		cout << "Помилка діапозону. Повторіть введення" << endl;
		goto mb;
	}
	b = c;
	cout << "b=" << b << endl;
	if (a == b)
	{
		y = -125;
		goto m1;
	}
	else
	{
		if (a > b)
		{
			if (a == 0)
			{
				cout << "Помилка: ділення на 0" << endl;
				return 0;
			}
			y = 52 * b / a + b;
			goto m1;
		}
			else if (b == 0)
			{
				cout << "Помилка: ділення на 0" << endl;
				return 0;
			}
			y = (a - 5) / b;
			goto m1;
		}
m1:
	if (y < -32768 || y>32767)
	{
		cout << "Помилка діапозону результату" << endl;
		return 0;
	}
	else x = y;
	cout << "x=" << x << endl;
	return 0;
}
