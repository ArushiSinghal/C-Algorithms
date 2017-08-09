#include<iostream>
#include<string>
using namespace std;

int Quicksort(int Array[100], int ini, int fin)
{
	if(ini == fin)
		return 0;
	int left[100];
	for(int i=ini;i<=fin;i++)
		left[i] = Array[i];
	int k =ini;
	int l = fin;
	int pivot = (ini+fin)/2;
	for(int i=ini;i<=fin;i++)
	{
		if (left[i] < left[pivot])
			Array[k++] = left[i];
		else if (left[i] > left[pivot])
			Array[l--] = left[i];
	}
	for (int i=k;i<=l;i++)
		Array[i] = left[pivot];
	if (k!=ini)
		Quicksort(Array, 0, k-1);
	if(l!=fin)
		Quicksort(Array, l+1, fin);
	return 0;
}

int main()
{
	int Array[100];
	int i;
	int k;
	cin >> i;
	for(k=0; k<i; k++)
		cin >> Array[k];
	Quicksort(Array, 0, i-1);
	for(k=0; k<i; k++)
		cout << Array[k] << " ";
	return 0;
}	
