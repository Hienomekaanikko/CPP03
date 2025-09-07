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
	ScavTrap st3("George");

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

	std::cout << "\033[1;32m\nTero tries guardGate mode while broken:\n\n\033[0m";
	st2.guardGate();
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nCreating ScavTrap Jussi to try guardGate mode:\n\n\033[0m";

	ScavTrap jupe("Jussi");
	std::cout << "\033[1;32m\nJussi guardGate mode test: (it's just a print, nothing else)\n\n\033[0m";
	jupe.guardGate();
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nCopy constructor test ('copy' gets the values of 'Tero'):\n\n\033[0m";
	ScavTrap copy(st2);

	std::cout << "\033[1;32m\nCopy attacking test (attacking party should be ScavTrap 'Tero' with no points to attack with):\n\n\033[0m";
	copy.attack("Test");

	std::cout << "\033[1;32m\nCopy assignment operator test ('Tero' gets the values of 'George'):\n\n\033[0m";
	st2 = st3;
	st2.attack("Test");
	std::cout << "-------------------------\n";
}
