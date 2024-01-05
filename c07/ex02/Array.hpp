/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 21:01:53 by vantonie          #+#    #+#             */
/*   Updated: 2024/01/05 17:35:26 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <cstddef>
#include <stdexcept>

template <typename T>
class Array {
private:
	unsigned int _size;
	T 			*_array;
public:
	Array<T>(): _size(0),  _array(NULL){ };
	~Array<T>(){ delete [] _array; };
	explicit Array<T>(unsigned int n): _size(n) , _array(NULL) {
		if (_size != 0) {
			this->_array = new T[n];
		}
	 };
	Array<T>(const Array<T> &src): _size(src._size), _array(NULL) {
		*this = src;
	};
	Array &operator=(const Array &rhs) {
		if (this != &rhs) {
			delete [] _array;
			_size = rhs.size();
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++) {
				_array[i] = rhs._array[i];
			}
		}
		return *this;
	};

	T &operator[](unsigned int i) {
		if (i >= _size) {
			throw std::out_of_range("Array index out of range!\n");
		}
		return _array[i];
	};

	const T &operator[](unsigned int i) const {
		if (i >= _size) {
			throw std::out_of_range("Array index out of range!\n");
		}
		return _array[i];
	};

	unsigned int size() const { return _size; };

};

template<typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const &rhs) {
	o << "[ ";
	for (unsigned int i = 0; i < rhs.size(); i++) {
		o << rhs[i];
		if (i + 1 < rhs.size())
			std::cout << ", ";
	}
	o << " ]" << std::endl;
	return o;
}

#endif