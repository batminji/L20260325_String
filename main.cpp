#include <iostream>
#include "MyString.h"

int main()
{
	MyString str1("Hello ");
	MyString str2("World");
	MyString str3 = str1 + str2 + " My Name is Minji";

	str3.Print();

	for (int i = 0; i < str3.GetLength(); ++i)
	{
		std::cout << str3[i];
	}
	std::cout << std::endl;

	return 0;
}