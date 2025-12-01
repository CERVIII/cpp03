/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 23:19:09 by pcervill          #+#    #+#             */
/*   Updated: 2025/12/02 00:24:32 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->name = "Default ScavTrap";
	this->health = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	this->health = 100;
	this->energy_points = 50;
	this->attack_damage= 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &st)
{
	*this = st;
	std::cout << "ScavTrap copy constructor called" << std::endl;
	return;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &st)
{
	this->name = st.name;
	this->health = st.health;
	this->energy_points = st.energy_points;
	this->attack_damage = st.attack_damage;
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
		if (this->energy_points < 1)
	{
		std::cout << "ScavTrap " << this->name << " is exhausted!" << std::endl;
		return;
	}
	if (this->health < 1)
	{
		std::cout << "ScavTrap " << this->name << " is dead!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " destroyed "  << target << " after dealing " << this->attack_damage << " of damage!" << std::endl;
	energy_points -= 1;
	return;
}

void ScavTrap::guardGate(void)
{
	if (this->energy_points < 1)
	{
		std::cout << "ScavTrap " << this->name << " is exhausted!" << std::endl;
		return;
	}
	if (this->health < 1)
	{
		std::cout << "ScavTrap " << this->name << " is dead!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " has adopted Guard keeper mode!" << std::endl;
	energy_points -= 1;
	return;
}