#include<iostream>
#include"my_Learn_Fun.h"
#include"Sales_data.h"


int main() {

	Sales_data book1, book2;

	book1.book_note = "1234";
	book1.revenue = 1.5;
	book1.units_sold = 20;

	book2.book_note = "5678";
	book2.revenue = 50;
	book2.units_sold = 10;

	std::cout << "一共" << book1.units_sold + book2.units_sold << "本书"
		<< "总价格为：" << book1.revenue * book1.units_sold + book2.revenue * book2.units_sold
		<< "元" << std::endl;


	
	// int a = 0;

	//a = input_a(a);

	// reference_yu(a);

	// learn_for_PP(a);
	// learn_while_PP(a);
	
	// 基本代码
	// system("pause");
	return 0;
}
