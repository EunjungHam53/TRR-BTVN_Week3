#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n; int a[100]{}, out[100]{}, maxx = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (maxx < a[i]) maxx = a[i];
	} maxx++;
	int count[100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		count[a[i]]++;
	}
	for (int i = 1; i < maxx; i++)
	{
		count[i] += count[i - 1];
	}
	for (int i = 0; i < n; i++)
	{
		out[count[a[i]]] = a[i];
		count[a[i]]--;
	}
	for (int i = 1; i <= n; i++) cout << out[i] << " ";
	return 0;
}
