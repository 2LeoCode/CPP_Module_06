/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 00:41:07 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/28 01:09:02 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_H
# define SERIALIZE_H

# include <string>
# include <ctime>
# include <cstdlib>

typedef struct timespec Timespec;

namespace utils
{
	std::string randomString(int);
	int randomInt(int a = 0, int b = RAND_MAX);
}

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void * serialize(void);
Data * deserialize(void * raw);

#endif