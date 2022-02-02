/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:45:28 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/02 12:42:56 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void	iter(T* p, int l, void (*f)(const T& v))
{
	for (int i = 0; i < l; i++)
		f(p[i]);
}

template<typename T>
void	display(const T& v)
{
	std::cout << v << "\n";
}