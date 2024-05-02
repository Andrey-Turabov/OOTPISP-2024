#pragma once

#include <string_view>
#include <string>
#include "Person.h"

class Preschooler : public Person
{
public:
    enum class BehaviorType : int8_t
    {
        MISCHIEVOUS,
        LISTENING,
        FOLLOWING_INSTRUCTIONS,
        PLAYING_WITH_OTHERS,
        SOCIAL,
        CURIOUS,
        OTHER
    };

    Preschooler() = default;
    explicit Preschooler(std::string_view _message);
    Preschooler(const Preschooler &other) = delete;

    ~Preschooler() override = default;

    void Print() const override;

    inline void SetBehaviorType(const BehaviorType type) { behaviorType = type; };

    bool operator==(const Preschooler &right) const;

private:
    BehaviorType behaviorType = BehaviorType::OTHER;
};
