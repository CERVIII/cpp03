/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 00:04:06 by pcervill          #+#    #+#             */
/*   Updated: 2025/12/02 00:09:37 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap ft("frog");

	ft.attack("pepe");
	ft.beRepaired(1);
	ft.highFivesGuys();
	/* for (int i = 0; i < 100; i++)
		ft.attack("pepe"); */
	ft.highFivesGuys();
	ft.beRepaired(30);
	ft.attack("pepe");
	return 0;
}