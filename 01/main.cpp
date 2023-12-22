#include <iostream>


int main(int argc, char** argv) {
	system("chcp 1251");
	std::string name = "";
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << "Здравствуйте, " << name + "!";
	return 0;
}