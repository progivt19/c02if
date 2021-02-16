// 2. Напишите программу, которая вводит с клавиатуры один символ, и
// выводит DIGIT, этот символ является цифрой, CAPITAL - если 
// заглавной латинской буквой, LOWERCASE - если строчной, и выводит
// NON-ALPHANUMERIC в противном случае.

#include <iostream>
using namespace std;
// или раскомментируйте это, если вам больше нравится stdio.h/printf/scanf:
// #include <stdio.h>

int main() {
	char symb;
	cin >> symb
	// или scanf("%c", &symb);

	if (symb >= '0' && symb <= '9') {
		cout << "DIGIT\n";
		// или printf("DIGIT\n");

		//...

	}
	return 0;
}