#pragma once
#include<iostream>
using std::ostream;
using std::istream;

class String
{
private:
	char* str;
	int len;
	static int num_strings;
	const static int CINLIM = 80;
public:
	String();
	String(const char* s);
	String(const String&);
	~String();
	int length() const { return len; }

	String& operator=(const String& st);
	String& operator=(const char* arr);
	char& operator[](int i);
	const char& operator[](int i) const;  //����const���б�Ҫ��ô���� �����ǼǴ���

	friend bool operator<(const String& st1, const String& st2);
	friend bool operator>(const String& st1, const String& st2);
	friend bool operator==(const String& st1, const String& st2);
	friend ostream& operator<<(ostream& os, const String& st);
	friend istream& operator>>(istream& is, String& st); //����Ļ��Ͳ��ܲ�����String������ֵ��

	static int HowMany();
};
