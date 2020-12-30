#include <iostream>
#include <cmath>
using namespace std;
double S0(const int N)
{
	double s = 0;
	for (int i = 1; i <= N; i++)
		s += sin(i) / (1 + cos(i));
	return s;
}
double S1(const int, const int N, const int i)
{
	if (i > N)
		return 0;
	else
		return sin(i) / (1 + cos(i)) + S1(1, N, i + 1);
}

double S2(const int, const int N, const int i)
{
	if (i < 1)
		return 0;
	else
		return sin(i) / (1 + cos(i)) + S2(1, N, i - 1);
}

double S3(const int, const int N, const int i, double t)
{
	t = t + sin(i) / (1 + cos(i));
	if (i >= N)
		return t;
	else
		return sin(i) / (1 + cos(i)) + S3(1, N, i + 1, t);
}

double S4(const int, const int N, const int i, double t)
{
	t = t + sin(i) / (1 + cos(i));
	if (i <= 1)
		return t;
	else
		return sin(i) / (1 + cos(i)) + S4(1, N, i - 1, t);
}

int main()
{
	int  N;

	cout << "N = "; cin >> N;
	cout << "(iter) S0 = " << S0(N) << endl;
	cout << "(rec up ++) S1 = " << S1(1, N, 1) << endl;
	cout << "(rec up --) S2 = " << S2(1, N, N) << endl;
	cout << "(rec down ++) S3 = " << S3(1, N, 1, 0) << endl;
	cout << "(rec down --) S4 = " << S4(1, N, N, 0) << endl;
	return 0;
	system("pause");
}
