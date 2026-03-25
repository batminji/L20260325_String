#pragma once
#include <iostream>

class MyString
{
public:
	char* Data;
	size_t Length;

public:
	MyString();
	MyString(const char C);
	MyString(const char* C, const size_t Size);
	~MyString();

	inline size_t GetLength() const
	{
		return Length;
	}

	MyString operator+ (const MyString& Other)
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

	void Print()
	{
		for (int i = 0; i < Length; ++i)
		{
			std::cout << Data[i];
		}
	}
};

