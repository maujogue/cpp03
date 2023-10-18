/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:22:42 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/17 16:23:29 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"
#include "../incs/ScavTrap.hpp"

int main (void){
	ScavTrap Knight("Knight");
	ScavTrap Prince("Prince");
	ClapTrap Beast;
	
	std::cout << std::endl;
	
	Beast.attack("Knight");
	Knight.takeDamage(Beast.getAttackDamage());
	
	Knight.attack("Beast");
	Beast.takeDamage(Knight.getAttackDamage());
	Beast.beRepaired(5);
	std::cout << std::endl;
	
	Prince.attack("Knight");
	Knight.takeDamage(Prince.getAttackDamage());
	Knight.beRepaired(10);
	
	for (int i = 0; i < 5; i++)
	{
		Prince.attack("Knight");
		Knight.takeDamage(Prince.getAttackDamage());
	}
	std::cout << std::endl;
	
	Knight.beRepaired(10);
	Knight.attack("Prince");
	
	std::cout << std::endl;

	Knight.guardGate();
	std::cout << std::endl;
	return (0);
}