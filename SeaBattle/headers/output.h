#pragma once
#ifndef _OUTPUT_H_
#define _OUTPUT_H_
#define _FILESYSTEM_USE_
#include "..\DevAttribute\devattribute.h"
#include <iostream>

void mainMenu();
void newGameSubMenu();
void writeTitle(short width, short height, std::string title);

extern short width, height;
#endif // !_MENU_H_
