#pragma once

class MyString
{
private:
	char* Data;
	size_t Length;

public:
	MyString();
	MyString(const char C);
	MyString(const char* C);
	MyString(const MyString& Other);
	~MyString();

	inline size_t GetLength() const
	{
		return Length;
	}

	MyString operator+ (const MyString& Other) const;
	MyString operator= (const MyString& Other);
	char operator[](const int Index) const;

	void Print() const;
};

