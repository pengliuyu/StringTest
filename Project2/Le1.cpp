#include <iostream>
#include <string>
#include <vector>
#include "Sales_item.h"
#include "Sales_data.h"
#include <stdexcept>

std::string::size_type find_char(const std::string &s, char c, std::string::size_type &count){
	auto ret = s.size();
	count = 0;
	for (decltype(ret) i = 0; i != s.size(); ++i){
		//std::cout << ret << std::endl;
		if (s[i] == c){
			if (ret == s.size())
			{
				ret = i;
			}
			++count;
		}
	}
	return ret;
}

bool is_sentence(const std::string &s){
	std::string::size_type ctr = 0;
	return find_char(s, '.', ctr) == s.size() - 1 && ctr == 1;
}

void print(const char *cp){
	if (cp)
	{
		while (*cp)
		{
			std::cout << *cp++;
		}
	}
}

template<typename T>
void print_array_length(T &p){
	std::cout << sizeof(p) / sizeof(p[0]) << std::endl;
}

void print_array_test(int (&a)){
	std::cout << sizeof(a) << std::endl;
}

void swap_int(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap_int1(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int wd = 80;
char def = ' ';

void screen(int = wd, char = def){
	std::cout << wd << "\n" << def << std::endl;
}

void f2(){
	def = '*';
	int wd = 100;
	screen();
}

int main()
{
	//Sales_data data1, data2;
	//double price = 0.0;
	//std::cin >> data1.bookNo >> data1.units_sold >> price;
	//data1.revenue = data1.units_sold * price;
	//std::cin >> data2.bookNo >> data2.units_sold >> price;
	//data2.revenue = data2.units_sold * price;
	////std::cout << data1.bookNo << ";" << data1.units_sold << ";" << price;
	//if (data1.bookNo == data2.bookNo)
	//{
	//	std::cout << data1.bookNo << " sales " << data1.revenue + data2.revenue << std::endl;
	//} 
	//else
	//{

	//}
	/*std::string word;
	while (std::cin >> word)
	{
	std::cout << word << std::endl;
	}*/
	//std::string s1 = "!@$%#&*&*hello!!!!"/* + ","*/;
	//for (auto &c : s1)
	//{
	//	c = toupper(c);
	//}
	/*std::vector<std::string> test;
	std::string word;
	while (std::cin>>word)
	{
	test.push_back(word);
	}
	std::vector<std::string>::iterator it;
	if (!test.empty()){
	for (it = test.begin(); it != test.end();++it)
	{
	std::cout << *it << std::endl;
	}
	}*/
	/*for (auto i = 0; i < test.size(); i++)
	{
	std::cout << test[i] << std::endl;
	}*/
	//std::cout <<  << std::endl;
	//std::vector<int> test2;
	/*if (test2.empty()){
		std::cout << "empty vector" << std::endl;
		}*/
	/*int desNum = 10;
	for (int i = 0; i <= 10; i++){
	test2.push_back(i);
	}
	auto beg = test2.begin(), end = test2.end();
	auto mid = beg + (end-beg) / 2;
	while (mid != end&&*mid != desNum){
	if (*mid<desNum)
	{
	beg = mid + 1;
	}
	else
	{
	end = mid;
	}
	mid = beg + (end - beg) / 2;
	}
	if (mid == end){
	std::cout << "no answer" << std::endl;
	}
	else
	{
	std::cout << *mid << std::endl;
	}*/

	/*int ia[3][4];
	size_t cnt = 0;
	for (auto &row :ia)
	{
		for (auto &col :row)
		{
			col = cnt;
			++cnt;
		}
	}
	for (auto &row:ia)
	{
		for (auto &col:row)
		{
			std::cout << col << std::endl;
		}
	}*/
	//for (auto p = ia; p != ia+3;p++)
	//{
	//	for (auto q = *p; q != *p + 4;++q)
	//	{
	//		/*col = cnt;
	//		++cnt;*/
	//		std::cout << *q << std::endl;
	//	}
	//}
	//std::cout << *ia(3+4) << std::endl;
	/*int grade = 50;
	std::string a = std::cout << (grade<60)?"fail":"succeed";
	std::cout << a << std::endl;*/

	/*int a[3];
	int *p = a;
	std::cout << sizeof(a) << std::endl;
	std::cout << sizeof(int) << std::endl;*/

/*std::vector<int> v = {0,1,2,3,4,5,6,7,8,9};
for (auto &r : v)
{
r *= 2;
}
for (auto r : v)
{
std::cout << r << std::endl;
}*/
	/*Sales_item item1, item2;
	while (std::cin >> item1 >> item2)
	{
		try{
			if (item1.isbn()!=item2.isbn())
			{
				throw std::runtime_error("not equal");
			}
			std::cout << "dafdsfa" << std::endl;

		}
		catch (std::runtime_error err){
			std::cout << err.what() << "Try" << std::endl;
		}
	}*/

	std::cout << "Function Start" << std::endl;

	/*for (int i = 0; i != 10; ++i){
		std::cout << count_calls() << std::endl;
		}*/
/*
	int j = 43;
	reset(j);*/
/*
	std::string test = "fafsfsadffdc";

	std::string::size_type ctr = 0;

	auto index = find_char(test, 's', ctr);

	std::cout << "the index is: " <<index << " and count is: " << ctr << std::endl;*/

	/*std::string test1 = "this is a test word.";

	std::cout << (is_sentence(test1)? "test1 is a sentence!" : "test1 isn't a sentence") << std::endl;
	*/

	//std::string test2 = "this is a test string";

	//print(test2.c_str());
	/*
		int a = 1, b = 2;

		swap_int1(&a, &b);
		swap_int(a, b);
		std::cout << a << " " << b << std::endl;*/
	f2();
	system("pause");
	return 0;
	
}

