//1. Напишите программу, которая вводит с клавиатуры одно целое число,
//и выводит POL, если оно положительно, OTR — если отрицательно, и
//NUL, если это нуль.

#include <iostream>
using namespace std;

int main(){
	int n;

	cin >> n;
	if (n > 0) 
		cout << "POL\n";
	return  0;
}