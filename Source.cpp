#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
using namespace std;
class Mat
{
public:
	int** Create(int n, int m)
	{
		int** mas = (int**)malloc(n * sizeof(int*));
		for (int i = 0; i < n; i++)
		{
			mas[i] = (int*)malloc(n * sizeof(int));
		}
		return mas;
	}
	void Rand(int** mas, int n, int m)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << i << "," << j<<" = ";
				cin>>mas[i][j];
			}
		}
	}
	void Print(int** mas, int n, int m)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << mas[i][j] << "\t";
			}
			cout << "\n";
		}
		cout << "\n";
	}
	int** Create1(int n, int m)
	{
		int** mas = (int**)malloc(n * sizeof(int*));
		for (int i = 0; i < n; i++)
		{
			mas[i] = (int*)malloc(n * sizeof(int));
		}
		return mas;
	}
	void Rand1(int** mas, int n, int m)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << i << "," << j << " = ";
				cin >> mas[i][j];
			}
		}
	}
	void Print1(int** mas, int n, int m)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << mas[i][j] << "\t";
			}
			cout << "\n";
		}
		cout << "\n";
	}
	void Sum(int** mas, int n, int m, int** mas1,int** mas2)
	{

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				 mas2[i][j] = mas[i][j] + mas1[i][j];
				 cout << mas2[i][j] << "\t";
			}
			cout << "\n";
		}
		cout << "\n";
	}
	void Sum1(int** mas, int n, int m, int** mas1, int** mas2)
	{

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				mas2[i][j] = mas[i][j] - mas1[i][j];
				cout << mas2[i][j] << "\t";
			}
			cout << "\n";
		}
		cout << "\n";
	}
	void Sum2(int** mas, int n, int m, int** mas1, int** mas2)
	{

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				mas2[i][j] = mas[i][j] * mas1[i][j];
				cout << mas2[i][j] << "\t";
			}
			cout << "\n";
		}
		cout << "\n";
	}
	void Sum3(int** mas, int n, int m, int** mas1, int** mas2)
	{

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				mas2[i][j] = mas[i][j] / mas1[i][j];
				cout << mas2[i][j] << "\t";
			}
			cout << "\n";
		}
		cout << "\n";
	}
};

int main()
{
	Mat x;
	int n,m;
	cout << "Enter first size : ";
	cin >> n >> m;
	int** mas = x.Create(n, m);
	x.Rand(mas, n, m);
	x.Print(mas, n, m);
	cout << "\n";
	int n1, m1;
	cout << "Enter second size : ";
	cin >> n1 >> m1;
	int** mas1 = x.Create1(n1, m1);
	x.Rand1(mas1, n1, m1);
	int** mas2 = x.Create(n, m);
	x.Print1(mas1, n1, m1);
	cout << "Sum: \n";
	x.Sum(mas, n, m, mas1, mas2);
	cout << "Min: \n";
	x.Sum1(mas, n, m, mas1, mas2);
	cout << "Multiplication: \n";
	x.Sum2(mas, n, m, mas1, mas2);
	cout << "Division: \n";
	x.Sum3(mas, n, m, mas1, mas2);
}