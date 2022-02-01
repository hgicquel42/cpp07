/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:58:56 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/01 20:17:33 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
class Array
{
	private:
		int	length;
		T*	array;
	public:
		Array<T>(void);
		~Array<T>(void);
		Array<T>(unsigned int n);
		Array<T>(const Array<T>& from);
		Array<T>&	operator=(const Array<T>& from);
		T&			operator[](int i) const;
		int			size(void) const;
};

#include "Array.tpp"