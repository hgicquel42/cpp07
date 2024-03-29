/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:17:35 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/02 14:24:11 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Array.hpp"

template <typename T>
Array<T>::Array(void):
	length(0),
	array(new T[0])
{}

template <typename T>
Array<T>::Array(unsigned int n):
	length(n),
	array(new T[n])
{}

template <typename T>
Array<T>::Array(const Array<T>& from):
	length(from.length),
	array(new T[from.length])
{
	for (unsigned int i = 0; i < this->length; i++)
		this->array[i] = from.array[i];
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] this->array;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& from)
{
	if (*this == from)
		return (*this);
	delete[] this->array;
	this->length = from->length;
	this->array = new T[this->length];
	for (int i = 0; i < this->length; i++)
		this->array[i] = from.array[i];
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](unsigned int i) const
{
	if (i >= this->length)
		throw IndexOutOfBoundsException();
	return (this->array[i]);
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->length);
}

template <typename T>
Array<T>::IndexOutOfBoundsException::IndexOutOfBoundsException(void) throw():
	std::exception()
{}

template <typename T>
const char*	Array<T>::IndexOutOfBoundsException::what(void) const throw()
{
	return ("Index is out of bounds");
}