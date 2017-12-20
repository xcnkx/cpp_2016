// Date.cpp
#include <iostream>
#include "Date.h"

Date::Date() {}

void Date::set (int m, int d, int y) {
 month = m; day = d; year = y;
}

void Date::print () {
  std::cout << month << " / " << day 
                 << " / " << year << std::endl;
}
