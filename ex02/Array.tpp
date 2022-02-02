/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:17:35 by hgicquel          #+#    #+#             */
/*   Updated: 2022/02/02 12:41:54 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
Array<T>::Array(void):
	length(0),
	array(NULL)
{}

template <typename T>
Array<T>::Array(unsigned int n):
	length(n),
	array(new T[n])
{}

template <class T>
Array<T>::Array(const Array<T>& from):
	length(from.length),
	array(new T[from.length])
{
	for (int i = 0; i < this->length; i++)
		this->array[i] = from.array[i];
}

template <class T>
Array<T>&	Array<T>::operator=(const Array<T>& from)
{
	delete this->array[];
	this->length = from->length;
	this->array = new T[this->length];
	for (int i = 0; i < this->length; i++)
		this->array[i] = from.array[i];
}

template <class T>
T&	Array<T>::operator[](int i) const
{
	if (i < 0 || i >= this->length)
		throw IndexOutOfBoundsException();
	return (this->array[i]);
}

template <class T>
Array<T>::IndexOutOfBoundsException::IndexOutOfBoundsException(void) throw():
	std::exception()
{}

template <class T>
const char*	Array<T>::IndexOutOfBoundsException::what(void) const throw()
{
	return ("Index is out of bounds");
}