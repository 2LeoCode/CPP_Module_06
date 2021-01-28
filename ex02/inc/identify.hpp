/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 02:46:24 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/28 18:48:56 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

# include <ctime>
# include <iostream>
# include <cstdlib>
# include "../class/Base.class/Base.class.hpp"

typedef struct timespec Timespec;
typedef Base * (*base_ft)(void);

Base * generate(void);
void identify_from_pointer(Base * p);
void identify_from_reference(Base & p);


#endif
