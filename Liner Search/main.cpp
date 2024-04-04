#include <iostream>
#include <cstdlib>
#include <ctime>


//Вывод массива в консоль
template <typename T>
void print_arr(T arr[], int size) {
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';
}
//Функция линейного поиска первого вхождения
//Значения key в массив arr начиная с позиции begin.
template <typename T>
int search_index(T arr[], const int length, T key, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == key)
			return i;
	return -1;
} 
//Функция линейного поиска последнего вхождения
//Значения key в массив arr начиная с позиции begin.
template <typename T>
int search_last_index(T arr[], const int length, T key) {
	for(int i = length - 1; i >= 0; i--)
		if (arr[i] == key)
			return i;
	return -1;
}
template <typename T>
int search_last_index(T arr[], const int length, T key, int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == key)
			return i;
	return -1;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	const int size = 10;
	int arr[size]{ 5, 20, 10, 8, 5, 20, 7, 8, 20, 1 };
	std::cout << "Массив: \n";
	print_arr(arr, size);

	std::cout << "Введите число для поиска -> ";
	std::cin >> n;
	int index = search_index(arr, size, n);
	if (index != -1)
		std::cout << "Позиция числа: " << index << std::endl;
	else
		std::cout << "Числа нет в массиве.\n";
	
	int last_index = search_last_index(arr, size, n);
	if (last_index != -1)
		std::cout << "Позиция числа: " << last_index << std::endl;
	else 
		std::cout << "Числа нет в массиве.\n";


	return 0;
}