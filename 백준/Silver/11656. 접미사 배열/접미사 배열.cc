#include <iostream>
#include <string>
using namespace std;

string arr[1000];

int main() {
	string S;
	cin >> S;

	int size = S.size();

	for (int i = 0; i < size; i++)
	{
		arr[i] = S.substr(i);
	}

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				string temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\n";
	}

	return 0;
}