/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:49:42 by fgeslin           #+#    #+#             */
/*   Updated: 2023/03/27 16:05:07 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else if (argc == 2)
		std::cout << argv[1];
	else
	{
		i = 0;
		while (++i < argc)
		{
			j = -1;
			while (argv[i][++j])
				std::cout << (char) toupper(argv[i][j]);
		}
	}
	return 0;
}
