/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 23:40:48 by pcervill          #+#    #+#             */
/*   Updated: 2025/12/01 23:50:20 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap john("John Doe");
	ScavTrap chuck("Chuck Norris");
	ScavTrap foreign;
	foreign = chuck;


	john.attack("Chuck Norris");
	john.guardGate();
	john.beRepaired(1);
	chuck.guardGate();
	chuck.attack("John Doe");
	/* for (size_t i = 0; i < 51; i++)
		john.beRepaired(1); */
	john.takeDamage(101);
	john.beRepaired(30);
	john.attack("Chuck Norris");
	foreign.beRepaired(30);
	foreign.attack("John Doe");
	return 0;
}