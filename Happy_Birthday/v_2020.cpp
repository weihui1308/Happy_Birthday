#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
	int sleep_time = 1000;
	//char name[10] = {'M', 'i', 's', 's', '.', ' ', 'Z', 'h', 'o', 'u'};
	string name = "Miss.Zhou";
	std::cout << "         " << "Hello! Miss.Zhou\n";
	Sleep(sleep_time);
	std::cout << "           " << "I am WeiHui!\n";
	Sleep(sleep_time);
	std::cout << "      " << "Happy birthday to you !!!\n";
	Sleep(sleep_time);
	std::cout << "   " << "Next, there is the surprise !!!!!!\n";
	Sleep(sleep_time);
	std::cout << "    " << "Are you ready ??? (yes or no): ";

	string input;
	cin >> input;
	if (input == "yes") {
		for (int i = 5; i >= 0; --i) {
			std::cout << "                " << i << "\n";
			Sleep(sleep_time);
		}

		cout << "            ****   ****\n";
		cout << "          ******* *******\n";
		cout << "        *******************\n";
		cout << "      ***********************\n";
		cout << "     ******* MISS.ZHOU *******\n";
		cout << "      ***********************\n";
		cout << "        *******************\n";
		cout << "          ***************\n";
		cout << "            ***********\n";
		cout << "              *******\n";
		cout << "                ***\n";
		Sleep(1000);
		return 0;

	}
	else {
		std::cout << "          " << "I love you! Byebye.\n";
		Sleep(2000);
		return 0;
	}


}


