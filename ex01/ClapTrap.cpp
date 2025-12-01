/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 21:27:10 by pcervill          #+#    #+#             */
/*   Updated: 2025/12/01 23:07:32 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default claptrap constructor called" << std::endl;
	this->name = "Default";
	this->health = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	return;
}

ClapTrap::ClapTrap(std::string _name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->name = _name;
	this->health = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct)
{
	this->name = ct.name;
	this->health = ct.health;
	this->energy_points = ct.energy_points;
	this->attack_damage = ct.attack_damage;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &ct)
{
	*this = ct;
	std::cout << "ClapTrap copy constructor called" << std::endl;
	return;
}

void ClapTrap::attack(const std::string &target)
{
	if (energy_points < 1)
	{
		std::cout << "ClapTrap " << name << " is exhausted!" <<std::endl;
		return;
	}
	if (health < 1)
	{
		std::cout << "ClapTrap " << name << " is dead!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << name << " attack " << target << ", causing " << attack_damage << " points of damage" << std::endl;
	energy_points -= 1;
	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (health < 1)
	{
		std::cout << "ClapTrap " << name << " is dead!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << name << " takes " << amount << " damage!" << std::endl;
	health -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy_points < 1)
	{
		std::cout << "ClapTrap " << name << " is exhausted" << std::endl;
		return;
	}
	if (health < 1)
	{
		std::cout << "ClapTrap " << name << " is dead!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << name << " repared himself " << amount << " HP!" << std::endl;
	energy_points -=1;
	health += amount;
}