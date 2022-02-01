/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:30:59 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/01 19:33:15 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
void	swap(T& a, T& b)
{
	T t = a;
	a = b;
	b = t;
}

template<typename T>
const T& min(const T& a, const T& b)
{
	return (a < b ? a : b);
}

template<typename T>
const T& max(const T& a, const T& b)
{
	return (a > b ? a : b);
}