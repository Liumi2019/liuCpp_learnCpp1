#pragma once

#include<string>

using std::string;

class Sales_data
{
	// 公开接口函数，可以直接访问赋值
public:
	string book_note;
	unsigned units_sold;
	double revenue;

	// 私有类型， 外部不可访问，仅内部函数可访问！
private:
	string Not;

};

