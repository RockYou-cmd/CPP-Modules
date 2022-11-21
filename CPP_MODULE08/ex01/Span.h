#ifndef Span_h
#define Span_h

#include <iostream>
#include <vector>

class Span
{
	private:
		unsigned int N;
		unsigned int size;
		std::vector <int> vec;
	public:
		Span();
		Span(unsigned int N);
		Span(Span const &obj);
		~Span();
		Span &operator=(Span const &obj);
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		void fillArr();
		void printArr();
		class FullException : public std::exception
		{
			public:
				virtual const char *what() const _NOEXCEPT;
		};
		class NotEnoughException : public std::exception
		{
			public:
				virtual const char *what() const _NOEXCEPT;
		};
};

#endif // !Span_h