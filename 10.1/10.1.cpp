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
        cout << "���� �� ��������" << endl;
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

        cout << "����� !!! �������� � �������i" << endl;
    else
        cout << "����� !!! �i������ � �������i" << endl;
    cout << endl;
}