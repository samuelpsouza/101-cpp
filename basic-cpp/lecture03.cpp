#include <iostream>

void pp(const int & a)
{
	std::cout << &a << " " << sizeof(a) << " " << a << std::endl;
}

class IntArray
{
  size_t m_size;
  int * m_arr;

public:
  IntArray(size_t size)
    : m_size (size)
    , m_arr  (new int[size])
  {
    std::cout << "Array constructor" << std::endl;
  }

  ~IntArray()
  {
    delete [] m_arr;
    std::cout << "Array destructor" << std::endl;
  }

  int get(size_t index) const
  {
    return m_arr[index];
  }

  void set(size_t index, int val)
  {
    m_arr[index] = val;
  }

  void print() const
  {
    for(size_t i = 0; i < m_size; i++)
    {
      std::cout << i << " " << m_arr[i] << std::endl;
    }
  }

};

template <typename T>
class DynamicArray
{
  size_t m_size;
  T*     m_arr;

public:
  DynamicArray(size_t size)
    : m_size  (size)
    , m_arr   (new T[size])
  {
    std::cout << "DynamicArray constructor" << std::endl;
  }

  ~DynamicArray()
  {
    delete [] m_arr;

    std::cout << "DynamicArray destructor" << std::endl;
  }

  T get(size_t index) const
  {
    return m_arr[index];
  }

  void set(size_t index, T val)
  {
    m_arr[index] = val;
  }

  void print() const
  {
    for (size_t i = 0; i < m_size; i++) {
      std::cout << i << " " << m_arr[i] << std::endl;
    }
  }

  T & operator [] (size_t index)
  {
    return m_arr[index];
  }
};

int main(int argc, char * argv[])
{
	int a = 10;
	int b = 25;

	pp(a);
	pp(b);

	// int arr[10];
	int   arr[10] = {};
	int * harr    = new int[10];

	for (size_t i=0; i<10; i++)
	{
		pp(arr[i]);
	}

	for (size_t i=0; i<10; i++)
	{
		pp(harr[i]);
	}

  // Point math
  
  int* pa = &a;
  int* pb = &b;

  *pa = 17;
  *(&a) = 17;
  *(pb-1) = 10;

  pp(a);
  pp(b);

  // Play with arrays

  IntArray myArray(10);
  myArray.set(7, 123);
  myArray.set(4, 23);
  myArray.print();

  DynamicArray<int> myNewArray(10);
  myNewArray.set(1, 10);
  myNewArray.set(3, 3);
  myNewArray.print();


  DynamicArray<float> floatArray(1);
  floatArray.set(0, 3.14);
  floatArray.print();

  floatArray[0] = 2.14;
  floatArray.print();
	return 0;
}

