/*
 * Input.cpp
 *
 *  Created on: Feb 7, 2018
 *      Author: jidnyesh
 */
#include "Input.h"

	void Input::getInput(float x,float y)
	{
		a=x;
		b=y;
		displayInput(a,b);
	}


	void Input::displayInput(float x,float y)
	{
		
		cout<<"The numbers are: "<<a<<endl<<b<<endl;
	}

