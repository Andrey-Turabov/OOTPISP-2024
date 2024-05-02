#pragma once

#include "Person.h"

class Worker : public Person
{
public:
    Worker() = default;
    explicit Worker(const uint8_t experienceNum);
    Worker(const Worker &other) = delete;

    ~Worker() override = default;

    void Print() const override;

    inline void SetExperienceNumber(const uint8_t experienceNum) { experienceNumber = experienceNum; };

    Worker &operator=(const Worker &right) = default;
    bool operator==(const Worker &right) const;

private:
    uint8_t experienceNumber = 0;
};
