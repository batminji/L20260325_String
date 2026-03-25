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

	MyString operator+ (const MyString& Other) const;

	void Print() const;
};

