#pragma once

#include "common.h"

/**
 * Type system module implements all the type logic - defining a type object,
 * builtin types, user defined types etc...
 */

/* 
 * TypeId identifies a single type in the ToyLisp program. e.g., a TypeId of 
 * 2 can mean the Int type, 3 can mean Boolean etc... 
 */
typedef int TypeId;

/**
 * List of builtin types in this ToyLisp implementation.
 */
enum class BuiltinType
{
    TYPE,
    INSTANCE,
    FUNCTION,
    METHOD,
    MODULE,
    INVALID,
};
