//Tyler Morgan
//CPP online course Qtr3 assignment 2
//August 4, 2013
//Element.cpp
#include "Element.h"

namespace Element
{
  template<class T>
  Element<T>::Element(std::string description)
  :my_description(description)
  {

  }

  template<class T>
  void Element<T>::addAttribute(Attribute::Attribute const& attribute)
  {
    Element::my_attributes.push_back(attribute);
  }

  template<class T>
  T Element<T>::createElement()
  {
    if ( my_description == "Point" )
    {

    }

    if( my_description == "VectorGraphic")
    {

    }

    if( my_description == "Scene" )
    {

    }

    if( my_description == "Layer" )
    {

    }
  }
}


