#include<iostream>
#include"my_Learn_Fun.h"


int main() {

	int i, *p = &i;
	int &r = *p;

	i = 1;
	p = nullptr;

	std::cout << i << "\n" << "\n" << r << std::endl;


	// int a = 0;

	//a = input_a(a);

	// reference_yu(a);

	// learn_for_PP(a);
	// learn_while_PP(a);
	
	// »ù±¾´úÂë
	// system("pause");
	return 0;
}
