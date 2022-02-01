/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:45:28 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/01 19:56:01 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void	iter(T* p, int l, void (*f)(T& v))
{
	for (int i = 0; i < l; i++)
		f(p[i]);
}

template<typename T>
void	display(T& v)
{
	std::cout << v << "\n";
}