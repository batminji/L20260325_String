#include "MyString.h"
#include <iostream>

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

MyString MyString::operator+ (const MyString& Other) const
{
	int NewLength = Length + Other.GetLength();
	char* NewData = new char[NewLength];
	for (size_t i = 0; i < Length; ++i)
	{
		NewData[i] = Data[i];
	}
	for (size_t i = 0; i < NewLength; ++i)
	{
		NewData[i + Length] = Other.Data[i];
	}

	return MyString(NewData, NewLength);
}

void MyString::Print() const
{
	for (int i = 0; i < Length; ++i)
	{
		std::cout << Data[i];
	}
}