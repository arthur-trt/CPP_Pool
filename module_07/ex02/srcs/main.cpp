#include "class.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

#define MAX_VAL 750
#define SIZE 52

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define PINK "\x1B[45;1m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define BLUE3 "\x1B[34;1m"
# define END "\033[0m"

/*
void	testSubject(void)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++) {
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	Array<int> tmp = numbers;
	Array<int> test(tmp);
	for (int i = 0; i < MAX_VAL; i++) {
		if (mirror[i] != numbers[i])
			std::cerr << "didn't save the same value!!" << std::endl;
	}
	try {
		numbers[-2] = 0;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	for (int i = 0; i < MAX_VAL; i++) {
		numbers[i] = rand();
	}
	delete [] mirror;
}

void	testIntArray(void)
{
	Array<int> test(6);
	Array<int>	test2(2);
	Array<int>	test3(12);

	for (int i = 0; i < 6; i++) {
		test[i] = std::rand() % 1000;
	}
	try {
		std::cout << test[9] << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	try {
		std::cout << test[-1] << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		std::cout << "my value is : " << test[0] << std::endl;
		std::cout << "my value is : " << test[2] << std::endl;
		std::cout << "my value is : " << test[3] << std::endl;
		std::cout << "my value is : " << test[5] << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		test3 = test;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		test2 = test;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

}

void	testCharArray(void)
{
	Array<char>	test4(10);

	for (unsigned int i = 0; i < 10 ; i++)
	{
		char c = 'A' + (random() % 26);
		test4[i] = c ;
	}
	try{
		Array<char> copy(test4);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try{
		std::cout << "my value is : " << test4[1] << std::endl;
		std::cout << "my value is : " << test4[3] << std::endl;
		std::cout << "my value is : " << test4[4] << std::endl;
		std::cout << "my value is : " << test4[6] << std::endl;
		std::cout << "my value is : " << test4[8] << std::endl;
		std::cout << "my value is : " << test4[9] << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	srand(time(NULL));
	try {

		Array<int> test; //test with empty array

		std::cout << PINK << "____SUBJECT____ " << END << std::endl;
		testSubject();
		std::cout << std::endl;

		std::cout << PINK << "____TESTS INT____ " << END << std::endl;
		testIntArray();
		std::cout << std::endl;

		std::cout << PINK << "____TESTS CHAR____ " << END << std::endl;
		testCharArray();
		std::cout << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}*/

int	main(void)
{
	const Array<int> test(10);

	test[4] = 12;
	std::cout << test[4] << std::endl;
	return (0);
}
