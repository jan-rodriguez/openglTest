/*
 * display.h
 *
 *  Created on: Feb 8, 2014
 *      Author: jan
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_

#include <string>

class Display {
public:
	Display(int width, int height, const std::string& title);
	virtual ~Display();
};

#endif /* DISPLAY_H_ */
