/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:11:03 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/09/18 13:33:26 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b) 
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T min(const T &a, const T &b) 
{
    if (a == b)
        return b;
    else
        return ((a < b) ? a : b);
}

template <typename T>
T max(const T &a, const T &b) 
{
    if (a == b)
        return b;
    else
        return ((a > b) ? a : b);
}

#endif