/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:58:56 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/02 14:16:11 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
class Array
{
	private:
		unsigned int	length;
		T*				array;
	public:
		Array(void);
		virtual ~Array(void);
		Array(unsigned int n);
		Array(const Array<T>& from);
		Array&		operator=(const Array<T>& from);
		T&			operator[](unsigned int i) const;
		unsigned int	size(void) const;

		class IndexOutOfBoundsException: public std::exception
		{
			public:
				IndexOutOfBoundsException(void) throw();
				virtual const char*	what() const throw();
		};
};

#include "Array.tpp"