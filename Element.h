#pragma once

#include <vector>
#include "Attribute.h"

namespace Element
{
  template < typename T >
  class Element
  {
    Element(std::string description);
    ~Element();
    void addAttribute(Attribute::Attribute const& attribute);
    T createElement();

  private:
    std::string my_description;
    std::vector<Attribute::Attribute> my_attributes;
  };
}
