#include <iostream>
#include <string>
#include <Windows.h>

std::string text;

std::string upperText(std::string text);

void askForText()
{
	system("cls");
	std::cout << "Enter the text to be converted to uppercase:" << std::endl;

	std::getline(std::cin, text);

	std::cout << std::endl;
	std::cout << upperText(text);
	std::cout << std::endl << std::endl;

	system("pause");
	askForText();
}

std::string upperText(std::string text)
{
	std::string result;
	for (char i : text) 
	{
		result += toupper(i);
	}
	return result;
}

int main()
{
	askForText();
}