#include "Span.h"

Span::Span() : N(0), size(0)
{
}

Span::Span(unsigned int N) : N(N), size(0)
{
}

Span::Span(Span const &obj) : N(obj.N), size(obj.size)
{
	for (unsigned int i = 0; i < obj.size; i++)
		vec.push_back(obj.vec[i]);
}

Span::~Span()
{
}

Span &Span::operator=(Span const &obj)
{
	N = obj.N;
	size = obj.size;
	for (unsigned int i = 0; i < obj.size; i++)
		vec.push_back(obj.vec[i]);
	return (*this);
}

void Span::addNumber(int n)
{
	if (size == N)
		throw FullException();
	vec.push_back(n);
	size++;
}

int Span::shortestSpan()
{
	if (size < 2)
		throw Span::NotEnoughException();
	int s = INT_MAX;
	std::vector<int>::iterator it = vec.begin();

	while (it != vec.end())
	{
		for (std::vector<int>::iterator it2 = it + 1; it2 != vec.end(); it2++)
		{
			if (*it2 > *it && (*it2 - *it) < s)
				s = *it2 - *it;
			else if (*it2 < *it && (*it - *it2) < s)
				s = *it - *it2;
		}
		it ++;
	}
	return s == INT_MAX ? 0 : s;	
}

int Span::longestSpan()
{
	if (size < 2)
		throw Span::NotEnoughException();
	int s = 0;
	std::vector<int>::iterator it = vec.begin();

	while (it != vec.end())
	{
		for (std::vector<int>::iterator it2 = it + 1; it2 != vec.end(); it2++)
		{
			if (*it2 > *it && (*it2 - *it) > s)
				s = *it2 - *it;
			else if (*it2 < *it && (*it - *it2) > s)
				s = *it - *it2;
		}
		it ++;
	}
	return s;
}

void Span::fillArr()
{
	for (unsigned int i = 0; i < N; i++)
		vec.push_back(rand() % 10000);
	size = N;
}

void Span::printArr()
{
	for (unsigned int i = 0; i < size; i++)
		std::cout << vec[i] << " ";
}

const char *Span::FullException::what() const _NOEXCEPT
{
	return ("Span is full");
}

const char *Span::NotEnoughException::what() const _NOEXCEPT
{
	return ("Add Numbers first\n");
}
