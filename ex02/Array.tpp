/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:01:15 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/09/18 16:01:47 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : arr(nullptr), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n) {
    arr = new T[n];
}

template <typename T>
Array<T>::Array(const Array &other) : arr(nullptr), _size(0) {
    *this = other;
}

template <typename T>
Array<T>::~Array() {
    delete[] arr;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other) {
    if (this != &other) {
        delete[] arr;
        _size = other._size;
        arr = new T[_size];
        for (unsigned int i = 0; i < _size; ++i) {
            arr[i] = other.arr[i];
        }
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int index) {
    if (index >= _size) {
        throw OutOfBoundsException();
    }
    return arr[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const {
    if (index >= _size) {
        throw OutOfBoundsException();
    }
    return arr[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}

#endif // ARRAY_TPP
