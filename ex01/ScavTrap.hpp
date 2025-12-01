/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 23:18:56 by pcervill          #+#    #+#             */
/*   Updated: 2025/12/01 23:24:16 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string _name);
		ScavTrap(const ScavTrap &st);
		ScavTrap& operator=(const ScavTrap &st);
		void	attack(std::string const &target);
		void	guardGate();
};

#endif