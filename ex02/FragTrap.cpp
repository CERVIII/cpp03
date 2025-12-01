/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 23:52:27 by pcervill          #+#    #+#             */
/*   Updated: 2025/12/02 00:07:49 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->name = "Default FragTrap";
	this->health = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	this->health = 100;
	this->energy_points = 100;
	this->attack_damage= 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &ft)
{
	*this = ft;
	std::cout << "FragTrap copy constructor called" << std::endl;
	return;
}

FragTrap &FragTrap::operator=(const FragTrap &ft)
{
	this->name = ft.name;
	this->health = ft.health;
	this->energy_points = ft.energy_points;
	this->attack_damage = ft.attack_damage;
	return *this;
}

void FragTrap::attack(const std::string &target)
{
		if (this->energy_points < 1)
	{
		std::cout << "FragTrap " << this->name << " is exhausted!" << std::endl;
		return;
	}
	if (this->health < 1)
	{
		std::cout << "FragTrap " << this->name << " is dead!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->name << " destroyed "  << target << " after dealing " << this->attack_damage << " of damage!" << std::endl;
	energy_points -= 1;
	return;
}

void FragTrap::highFivesGuys(void)
{
	if (this->energy_points < 1)
	{
		std::cout << "FragTrap " << this->name << " is exhausted!" << std::endl;
		return;
	}
	if (this->health < 1)
	{
		std::cout << "FragTrap " << this->name << " is dead!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->name << " wants to high five!" << std::endl;
	energy_points -= 1;
	return;
}