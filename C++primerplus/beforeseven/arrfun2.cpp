#include<iostream>
const int ArSize = 8;
int arr_sum(int arr[], int n);
int main()
{
	int cookies[ArSize]{ 1,2,4,8,16,32,64,128};
	std::cout << cookies << " = array address, ";

	std::cout << sizeof cookies << " = sizeof cookies\n";
	int sum = arr_sum(cookies, ArSize);
	std::cout << "Total cookies eaten: " << sum << std::endl;
	sum = arr_sum(cookies, 3);
	std::cout << "First three eaters ate " << sum << " cookies.\n";
	sum = arr_sum(cookies + 4, 4);
	std::cout << "Last four eaters ate " << sum << " cookies.\n";
	return 0;
}
int arr_sum(int arr[], int n)
{
	int total = 0;
	std::cout << arr <<" = arr, " << sizeof arr <<" = sizeof arr" << std::endl;
	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	return total;
}