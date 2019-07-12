/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   USB_Names.cpp
 * Author: Jannled
 * 
 * Created on 12. Juli 2019, 10:07
 */

#include <iostream>
#include <fstream>
#include <iostream>

#include "USB_Names.h"

USB_Names::USB_Names(std::string filePath)
{
	parseIDS(filePath);
}

USB_Names::USB_Names(const USB_Names& orig)
{
	
}

USB_Names::~USB_Names()
{
	
}

void USB_Names::parseIDS(std::string filePath)
{
	std::cout << "Loading DB: " << filePath << std::endl;
}

std::string USB_Names::lookup(char vendor[4], char name[4])
{
	return "Not implemented yet!";
}

std::string USB_Names::lookup(char vendor[4])
{
	return "Not implemented yet!";
}
