#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	time_t currentTime;  
	currentTime = time(0);  //这个函数返回的是time_t类型的变量，意思是从纪元时间开始到现在的秒数。
	cout << currentTime/((24*60*60)*365) << endl;
}