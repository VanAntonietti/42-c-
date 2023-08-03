#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array {
  public:
    Array<T>() : _size(0), _array(NULL) {};

    Array<T>(Array<T> const &other) : _size(_size), _array(NULL) {
      *this = other;
    };

    explicit Array<T>(unsigned int n): _size(n) , _array(NULL) {
      if (_size != 0) {
       this->_array = new T[n];
      }
    };

    Array &operator=(const Array &other) {
      if (this != &other) {
        if (_array)
          delete[] _array;
        _size = other.size();
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; i++) {
          _array[i] = other[i];
        }
      }
      return *this;
    };
    
    ~Array<T>() {
      delete[] _array;
    };
    
    Array<T>(unsigned int n) : _size(n), _array(new T[n]) {};

    T &operator[](unsigned int i) const {
      if (i >= _size) {
        throw std::out_of_range("Array index out of range!\n");
      }
      return _array[i];
    };

    const T &operator[](unsigned int i) {
      if (i >= _size) {
        throw std::out_of_range("Array index out of range!\n");
      }
      return _array[i];
    };

    unsigned int size() const {
      return _size;
    };

  private:
    T* _array;
    unsigned int _size;

};

template <typename T>
std::ostream &operator<<( std::ostream & o, Array<T> const &other){
  o << "[ ]";
  for (unsigned int i = 0; i < other.size(); i++) {
    o << " " << other[i];
    if (i + 1 < other.size())
      o << ", ";
  }
  o << " ]" << std::endl;
  return o;
}

#endif /* *********************************************************** ARRAY_H */