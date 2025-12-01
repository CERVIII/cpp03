/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 21:27:19 by pcervill          #+#    #+#             */
/*   Updated: 2025/12/01 23:29:57 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string	name;
		int			health;
		int			energy_points;
		int			attack_damage;
	public:
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap &ct);
		ClapTrap(void);
		~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &ct);
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif
