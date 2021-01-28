/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 01:00:46 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/28 01:39:13 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <serialize.hpp>

int utils::randomInt(int a, int b)
{
	return (a + std::rand() % (b - a + 1));
}

std::string utils::randomString(int len)
{
	std::string s;
	int rd;

	while (len--)
	{
		rd = randomInt('A', 'Z' + ('Z' - 'A'));
		s += ((rd > 'Z') ? rd + 7 : rd);
	}
	return (s);
}
