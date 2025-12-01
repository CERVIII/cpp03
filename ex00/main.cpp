/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 22:41:31 by pcervill          #+#    #+#             */
/*   Updated: 2025/12/01 23:15:20 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap john("John Doe");
	ClapTrap chuck("Chuck Norris");
	ClapTrap foreign;
	foreign = chuck;

	john.attack("Chuck Norris");
	chuck.takeDamage(0);
	chuck.takeDamage(132);
	chuck.attack("Me");
	chuck.beRepaired(2);
	chuck.takeDamage(10);
	foreign.attack("John Doe");
	return (0);
}