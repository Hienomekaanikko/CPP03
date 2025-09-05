/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 16:35:01 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/05 15:25:54 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "-------------------------\n\n";
	ClapTrap ct1("Jaska");
	ScavTrap st2("Tero");

	std::cout << "\033[1;32m\nJaska attacks Tero test (0 damage):\n\n\033[0m";
	ct1.attack("Tero");
	st2.takeDamage(0);
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nTero repair test:\n\n\033[0m";
	st2.beRepaired(10);
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nTero attacks Jaska test:\n\n\033[0m";
	st2.attack("Jaska");
	ct1.takeDamage(20);
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nJaska repair test:\n\n\033[0m";
	ct1.beRepaired(10);
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nBreaking Tero test:\n\n\033[0m";
	st2.takeDamage(110);
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nTero trying to attack while broken:\n\n\033[0m";
	st2.attack("Jaska");
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nTero repair test:\n\n\033[0m";
	st2.beRepaired(100);
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nTero trying to attack after being fixed:\n\n\033[0m";
	st2.attack("Jaska");
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nTero guardGate mode test: (it's just a print, nothing else)\n\n\033[0m";
	st2.guardGate();
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nCopy constructor test ('copy' gets the values of 'Tero'):\n\n\033[0m";
	ScavTrap copy(st2);

	std::cout << "\033[1;32m\nCopy attacking test:\n\n\033[0m";
	copy.attack("Test");

	std::cout << "\033[1;32m\nCopy assignment operator test ('copy' gets the values of 'Tero'):\n\n\033[0m";
	copy = st2;
	copy.attack("Test");
	std::cout << "-------------------------\n";
}
