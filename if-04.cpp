// 4. Напишите программу, которая вводит с клавиатуры возраст n лет и
// выводит сообщение ВАМ n ЛЕТ/ГОДА/ГОД, используя правильное слово, 
// если 1 <= n <= 100, или ERROR в противном случае 
// (На Windows используйте setlocale("ru", LC_ALL);).

#include <clocale> //Win
#include <iostream>

using namespace std;

int main(){
	int n;

	setlocale(LC_ALL, "ru");//Win
	cin >> n;

    cout << "ВАМ " << n << " ЛЕТ\n";
	return 0;
}