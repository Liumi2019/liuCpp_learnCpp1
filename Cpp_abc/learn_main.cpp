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

	std::cout << "һ��" << book1.units_sold + book2.units_sold << "����"
		<< "�ܼ۸�Ϊ��" << book1.revenue * book1.units_sold + book2.revenue * book2.units_sold
		<< "Ԫ" << std::endl;


	
	// int a = 0;

	//a = input_a(a);

	// reference_yu(a);

	// learn_for_PP(a);
	// learn_while_PP(a);
	
	// ��������
	// system("pause");
	return 0;
}
