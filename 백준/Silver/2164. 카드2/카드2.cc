#include <iostream>
#include <queue>

using namespace std;

int main(void) {
	int card_length = 0;
	cin >> card_length;
	if (card_length < 0 || card_length > 500,000)
	{
		return -1;
	}

	queue<int> q;
	for (int i = 1; i <= card_length; i++)
	{
		q.push(i);
	}

	while (q.size() != 1)
	{
		q.pop();
		q.push(q.front());
		q.pop();
	}

	cout << q.front() << endl;
	return 0;
}