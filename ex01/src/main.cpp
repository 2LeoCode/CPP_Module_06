/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 01:06:33 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/28 02:05:20 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <serialize.hpp>
#include <iostream>

int main(void)
{
	void * ptr = serialize();
	Data * data = deserialize(ptr);
	std::cout << data->s1 << std::endl << data->n << std::endl << data->s2 << std::endl;
	delete static_cast<Data*>(ptr);
	delete data;
	return (0);
}
