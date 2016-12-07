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

	void delElem(int delElem) //Deletes an element
	{
		Type* newArr = new Type[siz - 1]; //New array with one less element
		int f = 0; //Is incremented after element deletion to prevent skipping an index

		for(int index = 0; index < siz; index++)
		{
			if(index != delElem) //Copies elements from the old array unless index matches delElem
			{
				newArr[index - f] = elem[index];
			}
			else
			{
				f++; //Increments f if index matches delElem
			}
		}

		siz--;
		delete[] elem;
		elem = newArr;
	}

	using iterator = Type*;
	using const_iterator = Type*;

	iterator begin() //Return address of beginning of the array
	{
		if(siz == 0)
			return nullptr;

		return &elem[0];
	}

	const_iterator begin() const //Return address of beginning of array (constant)
	{
		if(siz == 0)
			return nullptr;

		return &elem[0];
	}

	iterator end() //Return address of end of array
	{
		if(siz == 0)
			return nullptr;

		return &elem[siz];
	}

	const_iterator end() const //Return address of end of array (constant)
	{
		if(siz == 0)
			return nullptr;

		return &elem[siz];
	}
};



#endif
