#ifndef MutantStack_h

#include <iostream>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
	private:
		std::stack<T> stack;
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(MutantStack const &obj) : std::stack<T>(obj) {}
		~MutantStack() {}
		MutantStack &operator=(MutantStack const &obj) {
			if (this != &obj)
				this->_stack = obj.stack;
			return *this;
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
};

#endif // !MutantStack_h