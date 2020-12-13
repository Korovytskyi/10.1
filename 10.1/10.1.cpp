#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool txt(char* Name)
{
    ifstream fin(Name);
    if (!fin)
    {
        setlocale(LC_CTYPE, "ukr");
        cout << "файл не знайдено" << endl;
    }
    string x;
    while (getline(fin, x))
    {
        if (x.find("!!!") != -1)
            return true;
    }
    return false;
}
int main()
{
    setlocale(LC_CTYPE, "ukr");
    char Name[] = "t.txt";
    if (txt(Name))

        cout << "Група !!! присутня в докуметi" << endl;
    else
        cout << "Група !!! вiдсутня в докуметi" << endl;
    cout << endl;
}