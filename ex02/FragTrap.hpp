/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 23:52:19 by pcervill          #+#    #+#             */
/*   Updated: 2025/12/02 00:04:35 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		~FragTrap(void);
		FragTrap(std::string _name);
		FragTrap(const FragTrap &ft);
		FragTrap& operator=(const FragTrap &ft);
		void	attack(std::string const &target);
		void	highFivesGuys(void);
};

#endif