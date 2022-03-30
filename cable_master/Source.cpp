

#include<iostream>
using namespace std;


int main()
{
	int n, k;

	long long max, min = 1;
	double enter, t=0;
	cin >> n >> k;
	float* arr = new float[n];

	for (int i = 0; i < n; i++)
	{
		cin >> enter;
		arr[i] = enter * 100;
	}
	max = arr[0];
	
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	
	while (min <= max)
	{
		long long step = (min + max) / 2;
		long long sum = 0;
		
		for (int i = 0; i < n; i++)
		{
			sum = sum + (int)(arr[i] / step);
		}

		if (sum < k)
		{
			max = step - 1;
		}
		else
		{
			min = step + 1;
			t = step;
		}

	}
	if (t == 0) cout << "0.00" << endl;
	else {
		printf("%.2f", (float)t / 100);
	}
}


