/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:44:36 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/09/21 15:16:14 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) 
{
	int array[] = { 0, 1, 2, 3, 4 };
	iter(array, 5, print);
    
	std::string array2[] = { "AAA", "BBB", "CCC", "DDD", "EEE" };
	iter(array2, 5, print);
}
