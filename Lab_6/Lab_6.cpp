#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "FileCreator.h"
#include <windows.h>
using namespace std;

int main()
{
    int janSale, febSale, marchSale, aprilSale, total;
    string storeName[] = { "Chicago","Naperville","Evanston","Oakton","Skoki" };
    string fileName;
    cout << "Enter the file name (include .csv at the end): ";
    getline(cin, fileName);
    FileCreator f1(fileName);
    f1.WriteHeader();
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter sale data for the " << storeName[i] << " store:\n\n";
        cout << "Enter the sale Of the month January: ";
        cin >> janSale;
        cout << "Enter the sale Of the month February: ";
        cin >> febSale;
        cout << "Enter the sale Of the month March: ";
        cin >> marchSale;
        cout << "Enter the sale Of the month April: ";
        cin >> aprilSale;
        total = janSale + febSale + marchSale + aprilSale;
        f1.WriteFile(storeName[i], janSale, febSale, marchSale, aprilSale, total);
    }
    f1.CloseFile();
}
