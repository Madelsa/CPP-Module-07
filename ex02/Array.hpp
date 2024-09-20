/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:55:56 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/09/20 23:08:32 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array 
{
    private:
        T* arr;
        unsigned int len;

    public:
        Array();                        
        Array(unsigned int n);           
        Array(const Array &copyTemplate);       
        ~Array();                        
        Array<T>& operator=(const Array &initTemplate); 
        T& operator[](unsigned int index);            
        const T& operator[](unsigned int index) const; 
        unsigned int size() const;      

        class OutOfBoundsException : public std::exception
        {
            public:
                const char* what() const throw() {
                    return "Index is out of bounds!";
                }
        };
};

template <typename T>
Array<T>::Array() : arr(NULL), len(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : len(n) 
{
    if (n > 0)
        arr = new T[n];
    else
        throw std::invalid_argument("Size of array cannot be zero");
}

template <typename T>
Array<T>::Array(const Array &copyTemplate) : arr(NULL), len(0) 
{
    *this = copyTemplate;
}

template <typename T>
Array<T>::~Array() 
{
    delete[] arr;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &initTemplate) 
{
    if (this != &initTemplate) 
    {
        delete[] arr;
        len = initTemplate.len;
        arr = new T[len];
        for (unsigned int i = 0; i < len; ++i) {
            arr[i] = initTemplate.arr[i];
        }
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
 {
    if (index >= len) 
    {
        throw OutOfBoundsException();
    }
    return arr[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const 
{
    if (index >= len) 
    {
        throw OutOfBoundsException();
    }
    return arr[index];
}

template <typename T>
unsigned int Array<T>::size() const 
{
    return len;
}




#endif

