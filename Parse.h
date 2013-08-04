#pragma once

#include <iosfwd>
#include <stdio.h>
#include <string>

namespace Parse
{
  void trim(std::string& sourceString, std::string const& trimmables = " \t\n");
  void eat(std::istream& sourceStrea, std::string const& edibles = " \t\n");
}
