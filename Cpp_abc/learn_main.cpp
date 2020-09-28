#include<iostream>
#include"my_Learn_Fun.h"


int main() {

	const int i = 5, &ci = i;
	auto a = i;
	auto b = ci;
	auto c = &i;

	const int ii = 4;
	const auto e = i;

	c = &ii;
	a = 5;
	b = 10;


	std::cout << i << "\n" << c << std::endl;


	// int a = 0;

	//a = input_a(a);

	// reference_yu(a);

	// learn_for_PP(a);
	// learn_while_PP(a);
	
	// »ù±¾´úÂë
	// system("pause");
	return 0;
}
