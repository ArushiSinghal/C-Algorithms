#include<iostream>
#include<string>
using namespace std;
int Merge(int Array[100],int ini,int mid,int fin)
{
	int left[100];
	for(int i=ini;i<=mid;i++)
		left[i] = Array[i];
	for(int i=mid+1;i<=fin;i++)
        	left[i] = Array[i];
	int k =  ini;
	int j = mid + 1;
	int m = ini;
	while(k<=mid && j<=fin)
		{
			if(left[k] <= left[j])
				{
					Array[m] = left[k];
					k++;
				}
			else
				{
					Array[m] = left[j];
					j++;
				}
			
			m++;
		}

	while (k<=mid)
		{
			Array[m] = left[k];
			m++;
			k++;
		}
	while (j<=fin)
		{
			Array[m] = left[j];
                        m++;
			j++;
		}
	return 0;
}

int Mergesort(int Array[100], int ini, int fin)
{
	if(ini == fin)
		return 0;
	int mid = (ini+fin)/2;
	Mergesort(Array,ini,mid);
	Mergesort(Array,mid+1,fin);
	Merge(Array,ini,mid,fin);
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
	Mergesort(Array, 0, i-1);
	for(k=0; k<i; k++)
                cout << Array[k] << " ";
	return 0;
}	
