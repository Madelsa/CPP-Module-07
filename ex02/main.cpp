/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:55:58 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/09/21 15:52:14 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"


// class Person 
// {
//     public:
//         std::string name;
//         Person() : name("") {}
//         Person(const std::string &name) : name(name) {}    
// };

// int main() 
// {
//     try {
//     Array<Person> personArray(3);
    
//     personArray[0] = Person("Alice");
//     personArray[1] = Person("Bob");
//     personArray[2] = Person("Charlie");

//     for (unsigned int i = 0; i < personArray.size(); i++) 
//     {
//         std::cout << "Person " << i + 1 << ": " << personArray[i].name << std::endl;
//     }
//     } catch (const std::exception &e) 
//     {
//         std::cerr << e.what() << std::endl;
//     }
// }

int main() 
{
    try {
        Array<int> emptyArray;
        std::cout << "Empty array created. Size: " << emptyArray.size() << std::endl;

        Array<int> originalArray(3);
        for (unsigned int i = 0; i < originalArray.size(); i++) 
        {
            originalArray[i] = i + 1;
        }
        std::cout << "Original array before copy:" << std::endl;
        for (unsigned int i = 0; i < originalArray.size(); i++) 
        {
            std::cout << "originalArray[" << i << "] = " << originalArray[i] << std::endl;
        }

        Array<int> copyArray(originalArray);
        std::cout << "Copy array after copying originalArray:" << std::endl;
        for (unsigned int i = 0; i < copyArray.size(); i++) 
        {
            std::cout << "copyArray[" << i << "] = " << copyArray[i] << std::endl;
        }

        copyArray[0] = 99;
        std::cout << "After modifying copyArray[0] to 99:" << std::endl;
        std::cout << "originalArray[0] = " << originalArray[0] << std::endl; 
        std::cout << "copyArray[0] = " << copyArray[0] << std::endl;  

        Array<int> assignedArray = originalArray;
        std::cout << "Assigned array after assignment from originalArray:" << std::endl;
        for (unsigned int i = 0; i < assignedArray.size(); i++) 
        {
            std::cout << "assignedArray[" << i << "] = " << assignedArray[i] << std::endl;
        }

        assignedArray[0] = 88;
        std::cout << "After modifying assignedArray[0] to 88:" << std::endl;
        std::cout << "originalArray[0] = " << originalArray[0] << std::endl;
        std::cout << "assignedArray[0] = " << assignedArray[0] << std::endl;
    } catch (const std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }
}
