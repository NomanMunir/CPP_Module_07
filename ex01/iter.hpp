#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <class T>

void iter(T *arr, size_t size, void (*func)(T&))
{
  for (size_t i = 0; i < size; i++)
  {
    func(arr[i]);
  }
}

template <class T>
void print (T& c)
{
  std::cout << c << " ";
}

#endif