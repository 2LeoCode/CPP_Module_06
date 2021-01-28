/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Litteral.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 20:18:02 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/27 23:30:48 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Litteral.class.hpp"

std::string Litteral::getChar(void) const
{
	std::ostringstream s;

	if (utils::isinf(_value) || utils::isnan(_value) || !isascii((int)_value))
		s << "impossible";
	else if (!isprint((int)_value))
		s << "Non displayable";
	else
		s << '\'' << (char)_value << '\'';
	return (s.str());
}

std::string Litteral::getInt(void) const
{
	std::ostringstream s;

	if (utils::isinf(_value))
		s << "infd";
	else if (utils::isnan(_value))
		s << "impossible";
	else
		s << (int)_value;
	return (s.str());
}

std::string Litteral::getDouble(void) const
{
	std::ostringstream s;

	s.precision(__DBL_DIG__);
	s << _value;
	if (!(_value - (int)_value))
		s << ".0";
	return (s.str());
}

std::string Litteral::getFloat(void) const
{
	std::ostringstream s;

	s.precision(__FLT_DIG__);
	s << (float)_value;
	if (!(_value - (int)_value))
		s << ".0";
	s << 'f';
	return (s.str());
}

std::ostream & operator<<(std::ostream & out, Litteral & n)
{
	out << "char: " << n.getChar() << std::endl;
	out << "int: " << n.getInt() << std::endl;
	out << "float: " << n.getFloat() << std::endl;
	out << "double: " << n.getDouble() << std::endl;
	return (out);
}
