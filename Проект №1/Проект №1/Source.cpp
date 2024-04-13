#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251");
	string a;
	string b;
	string c;
		

	cout << "Привет, друг! Как имя твое ?" <<endl;
	cin >> a;
	cout <<a <<", значит. И кто же дал тебе это имя ?" <<endl;
	cin >> b;
	cout << "Я не пониамаю, это кто. Твой " << b << "?" <<endl;
	cin >> c;
	cout << "То есть " << b << " является для тебе " << c << ".Мне очень интересно," << a << endl;
	cout << "Большое спасибо за информацию" <<endl;


	return 0;
}




