#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

void Create(int* a, const int size, const int Low, const int High);
void Cout(int* a, const int size);
int Condition(int* a, const int size);

int main()
{
	srand((unsigned)time(NULL));
	const int size = 10;
	int a[size];

	int Low = -10;
	int High = 10;

	Create(a, size, Low, High);

	cout << "Masyv:" << endl;
	cout << endl;
	Cout(a, size);

	Condition(a, size);

	cout << "Vporyadkovano za zrostannyam:" << endl;
	Cout(a, size);
	
	return 0;

}
void Create(int* a, const int n, const int Low, const int High)
{
	for (int i = 0;i < n;i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Cout(int* a, const int n)
{
	for (int i = 0;i < n;i++)
		cout << setw(5) << a[i];
	cout << endl;
	cout << endl;
}
int Condition(int* a, const int size)
{
	int k = 0;
	int j = 0;
	int t = 0;

	for (int i = 0;i < size;i++)
	{
		j = i;
		for (t = i;t < size;t++)
		{
			if(a[j]>a[t])
			{
				j = t;
			}
		}
		swap(a[i],a[j]);
	}
	return 0;

}