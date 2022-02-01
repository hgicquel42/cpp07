/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:47:18 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/01 19:57:03 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <iostream>

int	main(void)
{
	int numbers[] = {42, 21};
	iter(numbers, 2, display);

    std::string strings[] = {"Hello", "World!"};
	iter(strings, 2, display);

	return (0);
}