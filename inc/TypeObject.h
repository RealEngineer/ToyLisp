#pragma once

/**
 * This module defines the TypeObject class.
 */

#include "common.h"
#include "TypeSystem.h"
#include "ToyLispObject.h"

/**
 * TypeObject represents a single type in the program. As the program modules
 * are interpreted, several TypeObject objects are created and registered with
 * the TypeSystem module.
 */
class TypeObject: public ToyLispObject
{
};

/*
 * Return the type(its object) with the type id or nullptr if no such type
 * exists.
 */
TypeObject *getTypeWithId(const TypeId typeId);
