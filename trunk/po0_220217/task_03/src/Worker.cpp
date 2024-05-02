#include "Worker.h"

Worker::Worker(const uint8_t experienceNum)
    : Person("Worker"), experienceNumber(experienceNum)
{
}

void Worker::Print() const
{
    Person::Print();
    std::cout << "Worker with years of experience: " << static_cast<int>(experienceNumber) << std::endl;
}

bool Worker::operator==(const Worker &right) const
{
    return (this->experienceNumber == right.experienceNumber);
}
