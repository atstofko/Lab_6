#include "FileCreator.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

FileCreator::FileCreator(string storename)
{
	myfile.open(storename);
}
void FileCreator::WriteFile(string storename, double JanSales, double FebSales, double MarSales, double AprSales, double TotalSales)
{
	myfile << (storename) << "," << JanSales << "," << FebSales << "," << MarSales << "," << AprSales << "," << TotalSales << endl;
}
void FileCreator::WriteHeader()
{
	myfile << "Store,January,February,March,April,Total" << endl;
}
void FileCreator::CloseFile()
{
	myfile.close();
}