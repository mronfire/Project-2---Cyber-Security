
#ifndef VECTOR_H_
#define VECTOR_H_

#include<algorithm>

using std::copy;

template <class Type>
class vector
{
private:
	int siz; //Total elements
	Type *elem; //Dynamic array
	int space; //Allocated space

public:
	vector() : siz(0), elem(NULL), space(0) {}
	explicit vector(int s) : siz(s), elem(new Type[s]), space(s)
	{
		for(int index = 0; index < siz; index++) elem[index] = 0;
	}

	vector(const vector& src) : siz(src.siz), elem(new Type[src.siz]), space(src.space)
	{
		copy(src.elem, src.elem + siz, elem);
	}

	vector& operator=(const vector& src)
	{
		Type* p = new Type[src.siz];
		copy(src.elem, src.elem + src.siz, p);
		delete[] elem;
		elem = p;
		siz = src.siz;
		return *this;
	}

	vector<Type>(vector<Type>&);
	vector& operator =(vector&);
	~vector(){ delete[] elem;}
	Type& operator[](int n) {return elem[n];}
	const Type& operator[](int n) const {return elem[n];}
	int getSize() const { return siz;}
	int getSpace() const {return space;}

	void reserve(int newAlloc) //Reserves space
	{
		if(newAlloc <= space) return;
		Type* p = new Type[newAlloc];
		for(int index = 0; index < siz; index++) p[index] = elem[index];
		delete[] elem;
		elem = p;
		space = newAlloc;
	}

	void resize(int newSize) //Resizes the array
	{
		reserve(newSize);
		for(int index = 0; index < newSize; index++) elem[index] = 0;
		siz = newSize;
	}

	void push_back(Type newElem) //Pushes new element to the end of the array
	{
		if(space == 0) reserve(8);
		else if(siz == space) reserve(2 * space);
		elem[siz] = newElem;
		siz++;
	}

	void delElem(int location) //Deletes an element
	{
		Type* p = new Type[siz - 1];
		int f = 0;

		for(int index = 0; index < siz; index++)
		{
			if(index != location)
			{
				p[index - f] = elem[index];
			}
			else
			{
				f++;
			}
		}

		siz--;
		delete[] elem;
		elem = p;
	}

	int begin() {return 0;}
	int end() {return siz - 1;}
};



#endif