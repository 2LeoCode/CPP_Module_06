/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 00:42:07 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/28 02:23:43 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <serialize.hpp>
# include <iostream>
void * serialize(void)
{
	Data * a = new Data;
	Timespec cTime;

	clock_gettime(CLOCK_REALTIME, &cTime);
	std::srand(cTime.tv_nsec);

	a->s1 = utils::randomString(8);
	a->n = utils::randomInt();
	a->s2 = utils::randomString(8);
	return ((void*)a);
}

Data * deserialize(void * raw)
{
	Data * a = new Data;
	
	a->s1 = "";
	a->s2 = "";

	a->s1 = *static_cast<std::string*>(raw);
	raw = static_cast<char*>(raw) + sizeof(std::string) + sizeof(std::string) % 8;
	a->n = *(reinterpret_cast<int*>(raw));
	raw = static_cast<char*>(raw) + sizeof(int) + sizeof(int) % 8;
	a->s2 = *static_cast<std::string*>(raw);
	return (a);
}
