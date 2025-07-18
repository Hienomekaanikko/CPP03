/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:00:23 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/18 15:07:28 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap obj1("ClapTrap");
	ClapTrap obj3;
	obj3 = obj1;
	for (int i = 0; i < 12; i++)
	{
		obj3.attack("Joroma");
		obj3.takeDamage(1);
	}
}
