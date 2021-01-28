/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Litteral.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 20:17:55 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/27 23:10:34 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITTERAL_HPP
# define LITTERAL_HPP

# include <string>
# include <sstream>
# include <iostream>
# include <cctype>

# define INF (1.0 / 0.0)

namespace utils
{
	inline bool isnan(const double n) { return (n != n); }
	inline bool isinf(const double n) { return (n == INF); }
};

class Litteral
{
	public:

	Litteral(void) : _value() { }
	Litteral(const Litteral & src) : _value(src._value) { }
	Litteral(const int val) : _value((double)val) { }
	Litteral(const char val) : _value((double)val) { }
	Litteral(const float val) : _value((double)val) { }
	Litteral(const double val) : _value(val) { }
	~Litteral(void) { }

	inline void operator=(const Litteral & src) { _value = src._value; }
	inline void operator=(const int val) { _value = (double)val; }
	inline void operator=(const char val) { _value = (double)val; }
	inline void operator=(const float val) { _value = (double)val; }
	inline void operator=(const double val) { _value = val; }

	std::string getInt(void) const;
	std::string getChar(void) const;
	std::string getFloat(void) const;
	std::string getDouble(void) const;

	double getValue(void) const { return (_value); }


	private:

	double _value;
};

std::ostream & operator<<(std::ostream & out, Litteral & n);

#endif
