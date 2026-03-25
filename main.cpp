#include "MyString.h"

int main()
{
	MyString str1("Hello ");
	MyString str2("World");
	MyString str3 = str1 + str2;

	str3.Print();

	return 0;
}