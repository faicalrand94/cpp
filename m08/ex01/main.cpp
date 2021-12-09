#include "span.hpp"


int main ()
{
	try
	{
		span sp(15);


		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		

		std::vector<int> vec2(5);
		vec2.push_back(100);
		vec2.push_back(200);
		vec2.push_back(300);
		vec2.push_back(400);
		vec2.push_back(500);

		sp.addNumber(vec2.begin(), vec2.end());
		//if (obj.shortestSpan())
			std::cout << sp.shortestSpan() << std::endl;
		// if (obj.longestSpan())
			std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	


	return 0;
}
