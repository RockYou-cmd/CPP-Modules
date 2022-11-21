#include "Span.h"

int main()
{
	try{
		Span span = Span(100000);
		Span span2 = Span(3);
		span.fillArr();
		span2 = span;
		span2.printArr();
		std::cout << "the shortest span : "<< span2.shortestSpan() << std::endl;
		std::cout << "the longest span : " << span2.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}