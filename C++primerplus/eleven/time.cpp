#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	time_t currentTime;  
	currentTime = time(0);  //����������ص���time_t���͵ı�������˼�ǴӼ�Ԫʱ�俪ʼ�����ڵ�������
	cout << currentTime/((24*60*60)*365) << endl;
}