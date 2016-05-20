#pragma once

#include "common.h"
#include "TypeSystem.h"

/**
 * This module defines the ToyLispObject base class.
 */

/**
 * ToyLispObject is the base class for all ToyLisp objects. All ToyLispObjects
 * are first class - instances, function objects, type objects, method objects 
 * all are first class.
 */
class ToyLispObject
{
public:

    // Return the type id of this object's type.
    virtual TypeId getTypeId() const = 0;

    // Return the attribute with the given name, if it exists. Otherwise,
    // return nullptr.
    virtual ToyLispObject* getAttrByName(const std::string& fieldName) = 0;
};
