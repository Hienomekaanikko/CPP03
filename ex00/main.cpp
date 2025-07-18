/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:00:23 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/18 15:30:42 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap obj1("ClapTrap");1;
	for (int i = 0; i < 12; i++)
	{
		obj1.attack("Joroma");
		if (i % 3 == 0)
			obj1.beRepaired(2);
		obj1.takeDamage(1);
	}
}
