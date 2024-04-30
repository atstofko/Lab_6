#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class FileCreator
{
private:
	ofstream myfile;
public:
	FileCreator(string);
	void WriteFile(string, double, double, double, double, double);
	void WriteHeader();
	void CloseFile();
};



