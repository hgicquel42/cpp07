/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:29:59 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/01 19:41:41 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int	main(void)
{
	int	a = 42;
	int	b = 21;

	std::cout << "a = " << a << "\n";
	std::cout << "b = " << b << "\n";

	swap(a, b);

	std::cout << "a = " << a << "\n";
	std::cout << "b = " << b << "\n";

	std::cout << "min(a,b) = " << min(a, b) << "\n";
	std::cout << "max(a,b) = " << max(a, b) << "\n";

	return (0);
}