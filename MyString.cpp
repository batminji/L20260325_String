#include "MyString.h"

MyString::MyString()
{
	Data = nullptr;
	Length = 0;
}

MyString::MyString(char C)
{
	Data = new char[1];
	Data[0] = C;
	Length = 1;
}

MyString::MyString(const char* C, const size_t Size)
{
	Data = new char[Size];
	Length = Size;
	for (int i = 0; i < Length; ++i)
	{
		Data[i] = C[i];
	}
}

MyString::~MyString()
{
	if (Data)
	{
		delete[] Data;
		Data = nullptr;
	}
}
