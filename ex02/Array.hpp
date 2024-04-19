#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>

class Array
{
  private:
    T *array;
    size_t _size;
  public:
    Array(): array(NULL) {};
    Array(size_t n): _size(n){
      if ( n > 0 )
      {
        array = new T(n);
        for (size_t i = 0; i < _size; i++)
          array[i] = T();
      }
      else
        array = NULL;
    }
    Array(const Array& other): _size(other._size)
    {
      if (other.array != NULL)
      {
        this->array = new T[_size];
        for (size_t i = 0; i < _size; i++)
          array[i] = other.array[i];
      }
      else
        this->array = NULL;
    }

    Array& operator=(const Array& rhs)
    {
      if (this != &rhs)
      {
        delete[] array;
        _size = rhs._size;
        if (rhs.array != NULL)
        {
          array = new T(_size);
          for (size_t i = 0; i < _size; i++)
            array[i] = rhs.array[i];
        }
        else
          array = NULL;
      }
      return (*this);
    }

    ~Array() { delete[] array; }

    size_t size() { return (_size); }

    T& operator [](size_t index)
    {
      if (index >= _size)
        throw IndexOutOfBound();   
      return (array[index]);
    }

  class IndexOutOfBound : public std::exception
  {
    virtual const char * what() const throw() { return ("Index out of bound!"); }
  };
};

#endif