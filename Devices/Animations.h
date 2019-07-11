/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Animations.h
 * Author: jannl
 *
 * Created on 11. Juli 2019, 10:45
 */

#ifndef ANIMATIONS_H
#define ANIMATIONS_H

#include <string>
#include "../lib/JLib/Array.h"

struct Animation {
	std::string name;
	std::string description;
	Array<std::string> parameters;
};

#endif /* ANIMATIONS_H */

