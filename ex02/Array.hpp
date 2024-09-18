/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:55:56 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/09/18 16:00:26 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array 
{
    public:
        Array(); 
        Array(unsigned int n);  
        Array(const Array &copyTemplate);  
        ~Array(); 
        Array &operator=(const Array &initTemplate);  

        T &operator[](unsigned int index);  
        const T &operator[](unsigned int index) const;  

        unsigned int size() const;  

        class OutOfBoundsException : public std::exception {
        public:
            virtual const char *what() const throw() 
            {
                return "Array index out of bounds";
            }
        };

    private:
        T *arr; 
        unsigned int _size;  
};


#endif 
