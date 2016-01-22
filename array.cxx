#include "array.h"

template <typename T>

Rank Vector<T>::insert(Rank r, T const& e)
{
    expand();
    for (int i = _size; i > r; i--)
        _elem[i] = _elem[i-1];
    _elem[r] = e;
    _size++;

    return r;
}

template <typename T>
void Vector<T>::expand()
{
  if (_size < _capacity) return;
  if (_capacity < DEFAULT_CAPACITY) _capacity = DEFAULT_CAPACITY;
  T* oldElem = _elem; _elem = new T[_capacity <<= 1];
  for (int i = 0; i < _size; i++)
    _elem[i] = oldElem[i];
  delete [] oldElem;
}

template <typename T>
T& Vector<T>::operator[](Rank r) const
{
  return _elem[r];
}
