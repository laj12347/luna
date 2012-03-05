#include "Function.h"
#include <functional>

namespace lua
{
    std::size_t Function::GetHash() const
    {
        return std::hash<const Function *>()(this);
    }

    bool Function::IsEqual(const Value *other) const
    {
        return this == other;
    }

    Instruction * Function::NewInstruction()
    {
        instructions_.resize(instructions_.size() + 1);
        return &instructions_.back();
    }
} // namespace lua