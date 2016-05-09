#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main() {
	int big, little;
	char*plittle = (char*)&little;
	char*pbig = (char*)&big;
	while (cin >> little) {
		for (int i = 0; i < 4; i++)
			pbig[i] = plittle[3 - i];
		cout << little << " converts to " << big << endl;
	}

	//system("PAUSE");
	return 0;
}