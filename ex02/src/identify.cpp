/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 02:38:07 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/28 19:03:10 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <identify.hpp>

static inline Base * newA(void) { return (new A); }
static inline Base * newB(void) { return (new B); }
static inline Base * newC(void) { return (new C); }

Base * generate(void)
{
	base_ft c[3] = { &newA, &newB, &newC };
	int rd = rand() % 3;

	return ((*c[rd])());
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << 'A' << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << 'B' << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << 'C' << std::endl;
}

void identify_from_reference(Base & p)
{
	try { static_cast<void>(dynamic_cast<A &>(p)), std::cout << 'A' << std::endl; }
	catch (std::exception & e) { static_cast<void>(e); }
	try { static_cast<void>(dynamic_cast<B &>(p)), std::cout << 'B' << std::endl;  }
	catch (std::exception & e) { static_cast<void>(e); }
	try { static_cast<void>(dynamic_cast<C &>(p)), std::cout << 'C' << std::endl;  }
	catch (std::exception & e) { static_cast<void>(e); }
}
