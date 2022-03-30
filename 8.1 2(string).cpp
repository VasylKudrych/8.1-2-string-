#include <iostream>
#include <string>
using namespace std;

void Change(string& s);

int main()
{
    string str; // оголошується масив символів
    cout << "Enter string:" << endl;
    getline(cin, str); // в масив вводяться введені символи
    Change(str); // викликається функція заміни одинакових символів 
    cout << "Result: " << str << endl;
}

void Change(string& str)
{
    size_t found = str.find("!!!");
    while (found != string::npos)
    {
        str.replace(found, 3, "**"); // заміна однакових символів на зірочки
        found = str.find("!!!");
    }
}
