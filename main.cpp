#include "MyString.h"

int main()
{
	MyString str1("Hello ", 6);
	MyString str2("World", 5);
	MyString str3 = str1 + str2;

	str3.Print();

	return 0;
}