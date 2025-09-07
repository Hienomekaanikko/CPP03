/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 16:35:01 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/05 15:44:51 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "-------------------------\n\n";
	ClapTrap ct("Jaska");
	ScavTrap st("Tero");
	FragTrap ft("Raimo");

	std::cout << "\033[1;32m\nJaska attacks Tero and Raimo test (0 damage caused):\n\n\033[0m";
	ct.attack("Tero");
	st.attack("Raimo");
	st.takeDamage(0);
	ft.takeDamage(0);
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nRaimo repair test:\n\n\033[0m";
	ft.beRepaired(10);
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nRaimo attacks Jaska test:\n\n\033[0m";
	ft.attack("Jaska");
	ct.takeDamage(20);
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nJaska repair test (should have no energy hit points left for that):\n\n\033[0m";
	ct.beRepaired(10);
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nBreaking Raimo test:\n\n\033[0m";
	ft.takeDamage(110);
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nRaimo trying to attack while broken:\n\n\033[0m";
	ft.attack("Jaska");
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nTero repair test:\n\n\033[0m";
	st.beRepaired(100);
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nTero trying to attack after being fixed:\n\n\033[0m";
	st.attack("Jaska");
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nRaimo high five guys test with no hit points: (it's just a print, nothing else)\n\n\033[0m";
	ft.highFivesGuys();
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nRaimo trying to get fixed (no points left so not possible):\n\n\033[0m";
	ft.beRepaired(100);
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nCreating a fragtrap Pentti to try the high five (it's just a print, nothing else)\n\n\033[0m";
	FragTrap pena("Pentti");
	pena.highFivesGuys();
	std::cout << "-------------------------\n";

	std::cout << "\033[1;32m\nCopy constructor test ('copy' gets the values of 'Pentti'):\n\n\033[0m";
	FragTrap copy(pena);

	std::cout << "\033[1;32m\nPost copy constructor high five test:\n\n\033[0m";
	copy.highFivesGuys();

	std::cout << "\033[1;32m\nCopy assignment operator test ('Pentti' gets the values of 'Raimo'):\n\n\033[0m";
	copy = ft;

	std::cout << "\033[1;32m\nPost copy assignment high five test:\n\n\033[0m";
	copy.highFivesGuys();
	std::cout << "-------------------------\n";
}
