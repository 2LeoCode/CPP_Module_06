/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 20:15:53 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/27 23:12:56 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <convert.hpp>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./convert <number>" << std::endl;
		return (-1);
	}

	Litteral n(atof(argv[1]));
	std::cout << n;
	return (0);
}
