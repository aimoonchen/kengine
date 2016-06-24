//
// Created by naliwe on 6/24/16.
//

#ifndef KENGINE_ICOMPONENT_HPP
# define KENGINE_ICOMPONENT_HPP

# include "KTypes.hpp"

class IComponent
{
public:
    virtual ComponentMask getMask() const = 0;

    virtual ~IComponent()
    { }
};

#endif //KENGINE_ICOMPONENT_HPP