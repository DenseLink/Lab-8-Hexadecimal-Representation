#include "Color.h"
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <bitset>
using namespace std;

Color::Color(unsigned char red, unsigned char green, unsigned char blue, const string name, string HexValue)
{
	this->red = red;
	this->green = green;
	this->blue = blue;
	this->name = name;
	this->HexValue = HexValue;
}


void Color::SetValue(int value)
{
//get binary numbers of red green and blue
	//string HexValue = bitset<32>(value).to_string();
	//string binary_value1 = HexValue;
		//int n = binary_value1.length();
	//unsigned char binary_value[32];
	//binary_value = binary_value1;

	//unsigned char e = stoi(binary_value);
	//string comparison1 = bitset<32>(255).to_string();
		//int n = comparison1.length();
	//unsigned char comparison[32];
	//comparison = comparison1;
		//unsigned char comparison1 = stoi(binary_value);
//cout << value << " ";
	unsigned char integer = 255;
//cout << integer << " This is testing the integer variable" << endl;
	//unsigned char test = value;
//cout<< value << ": This is testing the passed in integer : " << endl;

	Color::blue = (value & integer);
	//Color::blue = (binary_value & comparison);
//cout << (int)blue << ": This is the blue parameter :( " << endl;
	//cout << GetB << "this is a test" << endl;
	//binary_value = binary_value >> 8; 
	int binary_value = value >> 8;
	
	Color::green = (binary_value & integer);
	
	binary_value = binary_value >> 8;

	Color::red = (binary_value & integer);

//get the hexadecimals of red green and blue
	string HexValue = "0x";
	//cout << HexValue << endl;
	int temp_hex = (int)red;
	//recursion(temp_hex, HexValue);

						if (temp_hex / 16 < 10)
						{
							int temp = temp_hex / 16;
							HexValue += to_string(temp);
						}
						else if (temp_hex / 16 == 10)
						{
							HexValue += 'A';
						}
						else if (temp_hex / 16 == 11)
						{
							HexValue += 'B';
						}
						else if (temp_hex / 16 == 12)
						{
							HexValue += 'C';
						}
						else if (temp_hex / 16 == 13)
						{
							HexValue += 'D';
						}
						else if (temp_hex / 16 == 14)
						{
							HexValue += 'E';
						}
						else if (temp_hex / 16 == 15)
						{
							HexValue += 'F';
						}
						int finalRed = temp_hex % 16;
						
	//int finalRed = temp_hex % 16;
							if (finalRed < 10)
							{
								HexValue += to_string(finalRed);
							}
							else if (finalRed == 10)
							{
								HexValue += 'A';
							}
							else if (finalRed  == 11)
							{
								HexValue += 'B';
							}
							else if (finalRed  == 12)
							{
								HexValue += 'C';
							}
							else if (finalRed  == 13)
							{
								HexValue += 'D';
							}
							else if (finalRed  == 14)
							{
								HexValue += 'E';
							}
							else if (finalRed  == 15)
							{
								HexValue += 'F';
							}
							//HexValue += to_string(finalRed);
	//cout << "red value" << HexValue << endl;
//cout << "final red" << finalRed << endl;

	temp_hex = (int)green;
							if (temp_hex / 16 < 10)
							{
								int temp = temp_hex / 16;
								HexValue += to_string(temp);
							}
							else if (temp_hex / 16 == 10)
							{
								HexValue += 'A';
							}
							else if (temp_hex / 16 == 11)
							{
								HexValue += 'B';
							}
							else if (temp_hex / 16 == 12)
							{
								HexValue += 'C';
							}
							else if (temp_hex / 16 == 13)
							{
								HexValue += 'D';
							}
							else if (temp_hex / 16 == 14)
							{
								HexValue += 'E';
							}
							else if (temp_hex / 16 == 15)
							{
								HexValue += 'F';
							}
							int finalGreen = temp_hex % 16;
							
//cout << "red value" << HexValue << endl;
	//recursion(temp_hex, HexValue);
	//int finalGreen = temp_hex % 16;
								if (finalGreen < 10)
								{
									HexValue += to_string(finalGreen);
								}
								else if (finalGreen  == 10)
								{
									HexValue += 'A';
								}
								else if (finalGreen  == 11)
								{
									HexValue += 'B';
								}
								else if (finalGreen  == 12)
								{
									HexValue += 'C';
								}
								else if (finalGreen  == 13)
								{
									HexValue += 'D';
								}
								else if (finalGreen == 14)
								{
									HexValue += 'E';
								}
								else if (finalGreen  == 15)
								{
									HexValue += 'F';
								}
							//	HexValue += to_string(finalGreen);

	temp_hex = (int)blue;
							if (temp_hex / 16 < 10)
							{
								int temp = temp_hex / 16;
								HexValue += to_string(temp);
							}
							else if (temp_hex / 16 == 10)
							{
								HexValue += 'A';
							}
							else if (temp_hex / 16 == 11)
							{
								HexValue += 'B';
							}
							else if (temp_hex / 16 == 12)
							{
								HexValue += 'C';
							}
							else if (temp_hex / 16 == 13)
							{
								HexValue += 'D';
							}
							else if (temp_hex / 16 == 14)
							{
								HexValue += 'E';
							}
							else if (temp_hex / 16 == 15)
							{
								HexValue += 'F';
							}
							int finalBlue = temp_hex % 16;
							
	//recursion(temp_hex, HexValue);
	//int finalBlue = temp_hex % 16;
							if (finalBlue < 10)
							{
								HexValue += to_string(finalBlue);
							}
							else if (finalBlue  == 10)
							{
								HexValue += 'A';
							}
							else if (finalBlue  == 11)
							{
								HexValue += 'B';
							}
							else if (finalBlue  == 12)
							{
								HexValue += 'C';
							}
							else if (finalBlue  == 13)
							{
								HexValue += 'D';
							}
							else if (finalBlue  == 14)
							{
								HexValue += 'E';
							}
							else if (finalBlue  == 15)
							{
								HexValue += 'F';
							}
							//HexValue += to_string(finalBlue);
//cout << " final: " << HexValue << endl;
	const string HexValue1;
	//HexValue1 = HexValue;
//cout << "const version " << endl;
this->HexValue = HexValue;
}
void Color::SetName(const char* name)
{
	this->name = name;
}

unsigned char Color::GetR() const
{
	return red;
}
unsigned char Color::GetG() const
{
	return green;
}
unsigned char Color::GetB() const
{
	return blue;
}
string Color::GetHexValue() const
{
	return HexValue;
}
string Color::GetName() const
{
	return name;
}
//void Color::dec_binary(int& value, unsigned int& e)
/*
	for (i = value; i >= 0 ; i--)
	{
		int new_number = value / 2;
		if (value % 2 == 0)
		{
			numbers[i] = 0;
		}
		else
		{
			numbers[i] = 1;
		}
	}*/
	
//void recursion(int& value, string& HexValue)
//{
//	if (value / 16 < 10)
//	{
//		HexValue = to_string(value);
//	}
//	else if (value / 16 == 10)
//	{
//		HexValue = 'A';
//	}
//	else if (value / 16 == 11)
//	{
//		HexValue = 'B';
//	}
//	else if (value / 16 == 12)
//	{
//		HexValue = 'C';
//	}
//	else if (value / 16 == 13)
//	{
//		HexValue = 'D';
//	}
//	else if (value / 16 == 14)
//	{
//		HexValue = 'E';
//	}
//	else if (value / 16 == 15)
//	{
//		HexValue = 'F';
//	}
//
//}
