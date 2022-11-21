#ifndef Array_h
#define Array_h

#include <iostream>

template <typename T>

class Array
{
	private:
		T *array;
		unsigned int size;
	public:
		Array()
		{
			array = new T[0];
			size = 0;
		}
		Array(unsigned int n)
		{
			array = new T[n];
			size = n;
		}
		Array(const Array &obj)
		{
			array = new T[obj.size];
			size = obj.size;
			for (unsigned int i = 0; i < size; i++)
				array[i] = obj.array[i];	
		}
		~Array()
		{
			delete [] array;
		}
		Array &operator=(const Array &obj)
		{
			if (this == &obj)
				return (*this);
			delete [] array;
			array = new T[obj.size];
			size = obj.size;
			for (unsigned int i = 0; i < size; i++)
				array[i] = obj.array[i];
			return (*this);
		}
		T &operator[](unsigned int n)
		{
			if (n >= size)
				throw std::exception();
			return (array[n]);
		}
		int Size() const
		{
			return (size);
		}

};

#endif // !Array_h