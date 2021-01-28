/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 02:38:09 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/28 18:56:32 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <identify.hpp>

int main(void)
{
	Timespec c_time;

	clock_gettime(CLOCK_REALTIME, &c_time);
	std::srand(c_time.tv_nsec);
	Base * a = new A, * b = new B, * c = new C;

	identify_from_pointer(a);
	identify_from_pointer(b);
	identify_from_pointer(c);

	identify_from_reference(*a);
	identify_from_reference(*b);
	identify_from_reference(*c);
	delete a;
	delete b;
	delete c;

	Base *base;
	for (int i = 0; i < 10; i++)
	{
		base = generate();
		std::cout << "POINTER "; identify_from_pointer(base);
		std::cout << "REFERENCE "; identify_from_reference(*base);
		delete base;
	}
	return (0);
}
