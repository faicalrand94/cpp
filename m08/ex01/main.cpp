#include "span.hpp"


int main ()
{
	try
	{
		span obj(12);


		obj.addNumber(10);
		obj.addNumber(20);
		obj.addNumber(30);
		obj.addNumber(40);
		obj.addNumber(50);
		

		std::vector<int> vec2;
		vec2.push_back(100);
		vec2.push_back(200);
		vec2.push_back(300);
		vec2.push_back(400);
		vec2.push_back(500);

		obj.addNumber(vec2.begin(), vec2.end());
		if (obj.shortestSpan())
			std::cout << "shortest span :" << obj.shortestSpan() << std::endl;
		if (obj.longestSpan())
			std::cout << "longest span :" << obj.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	


	return 0;
}
