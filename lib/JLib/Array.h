/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Array.h
 * Author: Jannled
 *
 * Created on 10. Juli 2019, 07:45
 */

#ifndef JARRAY_HPP
#define JARRAY_HPP

#include <stdio.h>
#include <stdexcept>

template<class T>

class Array
{	
private:
	int length;
	T* array;
	
public:
	Array(size_t size)
	{
		this->length = size;
		array = new T[length];
	}
	
	Array(const Array& orig)
	{
		
	}
	
	virtual ~Array()
	{
		delete[] array;
	}
	
	int size()
	{
		return length;
	}
	
	T &operator[](const int pos)
	{
		if(pos > 0 && pos < length)
			return array[pos];
		else 
			throw std::out_of_range("Index is out of range!");
	}
};

#endif /* JARRAY_HPP */
