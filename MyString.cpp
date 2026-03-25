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

MyString::MyString(const char* C)
{
	Length = 0;
	while (C[Length] != '\0')
	{
		Length++;
	}
	Data = new char[Length];
	for (int i = 0; i < Length; ++i)
	{
		Data[i] = C[i];
	}
}

MyString::MyString(const MyString& Other)
{
	Length = Other.GetLength();
	Data = new char[Length];
	for (int i = 0; i < Length; ++i)
	{
		Data[i] = Other.Data[i];
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
	char* NewData = new char[NewLength + 1];
	for (size_t i = 0; i < Length; ++i)
	{
		NewData[i] = Data[i];
	}
	for (size_t i = 0; i < Other.GetLength(); ++i)
	{
		NewData[i + Length] = Other.Data[i];
	}
	NewData[NewLength] = '\0';

	MyString Result(NewData);
	delete[] NewData;
	NewData = nullptr;

	return Result;
}

MyString& MyString::operator=(const MyString& Other)
{
	if (this == &Other)
	{
		return *this;
	}

	delete[] Data;
	Length = Other.GetLength();
	Data = new char[Length];
	for (int i = 0; i < Length; ++i)
	{
		Data[i] = Other.Data[i];
	}

	return *this;
}

void MyString::Print() const
{
	for (int i = 0; i < Length; ++i)
	{
		std::cout << Data[i];
	}
}