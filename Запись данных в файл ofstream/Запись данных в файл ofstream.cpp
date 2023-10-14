#include <iostream>
#include <fstream>
#include <string>
//ofstream - возможность сохранения данных в файл 

int main() {
	setlocale(LC_ALL, "rus");
	std::string path = "test.txt";
	int arr[]{ 0, 1, 2, 3, 4, 5 };
	
	std::ofstream fout;
	fout.open(path, std::ofstream::app);// app - добавить значение к ранее записанному без стерания предыдущих данных
	if (!fout.is_open()) {
		std::cout << "Ошибка открытия файла" << std::endl;
	}
	else {
		std::cout << "Файл открыт" << std::endl;
		std::cout << "Введите число: ";
		int a;
		std::cin >> a;
		fout << a;
		
		fout << "Это наши данные" << std::endl;;// Записали в файл
fout << "Новейшие данные данные\n";
		for (int i = 0; i < 5; i++) {
			fout << arr[i] << std::endl;
		}
		
	}

	fout.close();

	return 0;
}