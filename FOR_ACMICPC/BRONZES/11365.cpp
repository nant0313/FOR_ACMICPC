#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <cstring>
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>
#include <malloc.h>
#include <limits.h>
using namespace std;

int main() {
	string str;

	while (1) {
		getline(cin, str);
		if (str == "END")
			break;
		else
			for (int i = str.length() - 1; i >= 0; i--)
				cout << str.at(i);
		cout << "\n";
	}
}