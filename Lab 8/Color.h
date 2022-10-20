#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
class Color
{
private:
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	string name;
	string HexValue;

public:
	Color(unsigned char red = 0, unsigned char green = 0, unsigned char blue = 0, string name = "", string HexValue = "");
	void SetValue(int value);
	void SetName(const char* name);

	unsigned char GetR() const;
	unsigned char GetG() const;
	unsigned char GetB() const;
	string GetHexValue() const;
	string GetName() const;
	//void recursion(int& value, string& HexValue);

	//void dec_binary(int& value,unsigned int &e);
};

