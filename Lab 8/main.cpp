#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <map>
#include <sstream>
#include "Color.h"
using namespace std;

void ReadFile(const char* filename, map<string, Color>& colors);
void PrintColors(const map<string, Color>& colors);
void PrintColor(const Color& color);
void SearchForColor(map<string, Color>& colors);

int main()
{
	cout << "1-6: Load colors1/2/3/4/5/6.txt" << endl;
	cout << "7. Load all 6 files" << endl;
	int choice;
	cin >> choice;

	map<string, Color> colors;
	if (choice >= 1 && choice <= 6)
	{
		string file = "colors" + to_string(choice) + ".txt";
		ReadFile(file.c_str(), colors);
	}
	else if (choice == 7)
	{
		for (int i = 1; i <= 6; i++)
		{
			string file = "colors" + to_string(i) + ".txt";
			ReadFile(file.c_str(), colors);
		}

	}

	// Secondary menu
	cout << "1. Show all colors" << endl;
	cout << "2. Search for a color" << endl;
	cin >> choice;

	if (choice == 1)
		PrintColors(colors);
	else if (choice == 2)
		SearchForColor(colors);
	return 0;
}

void ReadFile(const char* filename, map<string, Color>& colors)
{
	// TODO: Read the file, create and store some Color objects
	ifstream inFile(filename);
	//ReadCharactersFromFile(path, characters);

	if (inFile.is_open())
	{

		//read a line from the file
		string lineFromFile;
	//	getline(inFile, lineFromFile);

		while (getline(inFile, lineFromFile))
		{
			//create a stream from our string
			istringstream stream(lineFromFile);
			string buffer;
			
			
			string Name;
			int Number;
			
			
			getline(stream, buffer, ' ');
			Name = buffer;
			//cout << buffer;

			getline(stream, buffer, ' ');
			Number = stoi(buffer);
			//cout << Number;

			//I think I need to call the other functions here
			//setValue(Number);
			const char *d = Name.c_str();
			Color c;
			c.SetName(d);
			c.SetValue(Number);
			colors.emplace(Name, c);

			//auto iter = colors.begin();
			//if (iter != colors.end())
			//{
			//	cout << iter->first << endl;
			//	cout << iter->second.GetHexValue();
			//}
		}

	}
}
void PrintColors(const map<string, Color>& colors)
{
	// TODO: iterate through all entries in the map and print each color, one at a time
	// Print out the color count afterward
	auto iter = colors.begin();
	int i = 0;
	for (; iter != colors.end(); ++iter)
	{
		cout << left << setw(20) << iter->second.GetName() << "	";
		cout << right << setw(10) << iter->second.GetHexValue() << "	";
		cout << "\t\t" << (int)iter->second.GetR() << ", ";
		cout << (int)iter->second.GetG() << ", ";
		cout << (int)iter->second.GetB() << endl;
		i++;
	}
	cout << "Number of colors: " << i << endl;
}
void PrintColor(const Color& color)
{
	cout << left << setw(20) << color.GetName();
	cout << right << setw(10) << color.GetHexValue();
	cout << "\t\t" << (int)color.GetR() << "," << (int)color.GetG() << "," << (int)color.GetB() << endl;
}
void SearchForColor(map<string, Color>& colors)
{
	// TODO: Get some input, check if that key exists, then print out the color (or an error message)
	auto iter = colors.begin();
	string searchcolor;
	cin >> searchcolor;
	iter = colors.find(searchcolor);

	if (iter == colors.end())
	{
		cout << searchcolor << " not found!" << endl;
	}
	else
	{
		cout << endl;
		cout << iter->second.GetName() << "			";
		cout << iter->second.GetHexValue() << "		";
		cout << (int)iter->second.GetR() << ",";
		cout << (int)iter->second.GetG() << ",";
		cout << (int)iter->second.GetB();
	}
}
