#include <iostream>

using namespace std;

int main()
{
	int N;
	int F = 1;
	setlocale(LC_ALL, "rus");
	cout << "Факториал какого числа необходимо вычислить?\n";
	cin >> N;
	if (N < 0)
	{
		cerr << "Недопустимое значение. Введите число >= 0\n";
		return 1;
	}
	for (int i = 2; i <= N; i++)
	{
		F *= i;
	}
	cout << "Факториал " << N << " = "<<F<<endl;
	return 0;
}