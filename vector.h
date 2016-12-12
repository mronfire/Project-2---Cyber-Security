#ifndef VECTOR_H_
#define VECTOR_H_

#include<algorithm>

using std::copy;

/*!
 *  \brief Template Vector class
 *  \details This templated vector class will allow us to store any type of data into the vector
 *           and use it as a container to hold all customers
 */
template <class Type>
class vector
{
private:
    int siz;     /*!< Total elements */
    Type *elem;  /*!< Dynamic array */
    int space;   /*!< Allocated space */

public:
    /*!
     * \brief vector() - Constructor
     * \details This will initialize the constructor
     */
	vector() : siz(0), elem(NULL), space(0) {}

    /*!
     * \brief vector() - Constructor alternate
     * \details This will initialize the constructor
     */
	explicit vector(int s) : siz(s), elem(new Type[s]), space(s)
	{
		for(int index = 0; index < siz; index++) elem[index] = 0;
	}

    /*!
     * \brief vector() - Copy Constructor
     * \details This will copy another vector into our vector
     */
	vector(const vector& src) : siz(src.siz), elem(new Type[src.siz]), space(src.space)
	{
		copy(src.elem, src.elem + siz, elem);
	}

    /*!
     * \brief vector() - Assignment operator
     * \details This will allow to user the assignment opeartor
     */
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

    /*!
     * \brief vector() - Assignment operator
     * \details This will allow to user the assignment opeartor
     */
	vector& operator =(vector&);

    /*!
     * \brief vector() - Destructor
     * \details This will destroy all elements from the vector
     */
	~vector(){ delete[] elem;}

    /*!
     * \brief vector() - operator[]
     * \details This will return the element n in the vector
     */
	Type& operator[](int n) {return elem[n];}

    /*!
     * \brief vector() - const operator[]
     * \details This will return the element n in the vector
     */
	const Type& operator[](int n) const {return elem[n];}

    /*!
     * \brief vector() - getSize
     * \details This will return the size of vector
     */
	int getSize() const { return siz;}

    /*!
     * \brief vector() - getSpace
     * \details This will return the space of the vector
     */
	int getSpace() const {return space;}

    /*!
     * \brief vector() - reserve
     * \details This will reserve space into the vector
     */
	void reserve(int newAlloc) //Reserves space
	{
        if(newAlloc <= space)
            return;

		Type* p = new Type[newAlloc];

        for(int index = 0; index < siz; index++)
        {
            p[index] = elem[index];
        }

		delete[] elem;
		elem = p;
		space = newAlloc;
	}

    /*!
     * \brief vector() - resize
     * \details This will resize the vector
     */
	void resize(int newSize) //Resizes the array
	{
		reserve(newSize);

        for(int index = 0; index < newSize; index++)
        {
            elem[index] = 0;
        }

		siz = newSize;
	}

    /*!
     * \brief vector() - push Back
     * \details This will push new elemnts into the vector at the end
     */
    void push_back(Type newElem)
	{
        if(space == 0)
        {
            reserve(8);
        }
        else if(siz == space)
        {
            reserve(2 * space);
        }

		elem[siz] = newElem;
		siz++;
	}

    /*!
     * \brief vector() - delete element
     * \details This will remove an element from the vector
     */
	void delElem(int delElem) //Deletes an element
	{
        Type* newArr = new Type[siz - 1]; ///New array with one less element

        int f = 0; ///Is incremented after element deletion to prevent skipping an index

		for(int index = 0; index < siz; index++)
		{
            if(index != delElem) ///Copies elements from the old array unless index matches delElem
			{
				newArr[index - f] = elem[index];
			}
			else
			{
                f++; ///Increments f if index matches delElem
			}
		}

		siz--;
		delete[] elem;
		elem = newArr;
	}

	typedef Type* iterator, const_iterator;

    /*!
     * \brief iterator - begin
     * \details This will return the address of the first element in the vector
     */
    iterator begin()
	{
		if(siz == 0)
			return nullptr;

		return &elem[0];
	}

    /*!
     * \brief iterator - const begin
     * \details This will return the address of the first element in the vector
     */
    const_iterator begin() const
	{
		if(siz == 0)
			return nullptr;

		return &elem[0];
	}

    /*!
     * \brief iterator - end
     * \details This will return the address of the last element in the vector
     */
    iterator end()
	{
		if(siz == 0)
			return nullptr;

		return &elem[siz];
	}

    /*!
     * \brief iterator - const end
     * \details This will return the address of the last element in the vector
     */
    const_iterator end() const
	{
		if(siz == 0)
			return nullptr;

		return &elem[siz];
	}

    /*!
     * \brief iterator - insert
     * \details This will insert an elemtn at the "location" index
     */
    iterator insert(iterator location, const Type& val)
	{
		int index = location - begin();

		if(siz == space)
			reserve(siz * 2);

		siz++;

		iterator newLocation = begin() + index;

		for(iterator pos = end() - 1; pos!= newLocation; pos--)
			*pos = *(pos - 1);

		*(begin() + index) = val;

		return newLocation;
	}

    /*!
     * \brief iterator - find
     * \details This will find the specified value in the vector and return its address
     */
    iterator find(Type val)
	{
		iterator found = begin();

		for(int index = 0; index < siz; index++)
		{
			if(elem[index] == val)
			{
				found = &elem[index];
				return found;
			}
		}

		found = end();
		return found;
	}

    /*!
     * \brief iterator - sort
     * \details This will sort the elements in ascending order
     */
    void sort()
	{
		Type temp;
		bool sorted = false;

		while(sorted == false)
		{
			for(int index = 0; index < siz; index++)
			{
				sorted = true;

				if(&elem[index + 1] != end() && elem[index + 1] < elem[index])
				{
					temp = elem[index];
					elem[index] = elem[index + 1];
					elem[index + 1] = temp;
					sorted = false;
				}

			}
		}
	}
};



#endif
