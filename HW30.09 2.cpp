#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;


int main()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	int count = 20;
	int chtoto = 12;
	string elem = "@";
	bool lie = true;

	SetConsoleTextAttribute(h, chtoto);
	for (int i = 0; i < cout; i++) {
		cout << elem;
		if (lie) cout << "\n";
	}
}