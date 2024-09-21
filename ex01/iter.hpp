/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:48:09 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/09/21 15:15:28 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, size_t length, void (*func)(const T&)) 
{
    for (size_t i = 0; i < length; ++i) 
    {
        func(array[i]);
    }
}

template <typename T>
void print(const T &element) 
{
    std::cout << element << std::endl;
}

#endif