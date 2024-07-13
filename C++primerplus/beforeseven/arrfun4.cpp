#include<iostream>
const int ArSize = 8;
int sum_arr(const int* begin, const int* end);
int main()
{
	using namespace std;
	int arr[ArSize]{ 1,2,4,8,16,32,64,128 };
	cout << "Total cookies eaten: " << sum_arr(arr, arr + ArSize) << endl;
	cout << "First three eaters ate " << sum_arr(arr, arr + 3) << endl;
	cout << "Last four eaters ate " << sum_arr(arr + 4, arr + 8) << endl;
	return 0;
}
int sum_arr(const int* begin, const int* end)
{
	const int* pr;
	int total = 0;
	for (pr = begin; pr != end; pr++)
	{
		total += *pr;
	}
	return total;
}