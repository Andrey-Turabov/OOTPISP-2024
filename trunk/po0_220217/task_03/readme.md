# Лабораторная работа №3

## Правила перегрузки операций и принципы обработки исключений в C++

## Вариант 3

## Цель работы

Изучение правил перегрузки операций и принципов обработки исключений в C++

### Обработка исключения в Person \*operator[](const int index)

```c++
 try
    {
        if (index < 0 || index >= _size)
            throw std::out_of_range("out of range");

        auto ptr = std::move(head);
        for (int i = 0; i < index; i++)
        {
            ptr = std::move(ptr->next);
        }
        return ptr->date;
    }
    catch (const std::out_of_range &err)
    {
        std::cout << err.what() << std::endl;
        Person person;
        return nullptr;
    }
```

### Перегрузка операторов класса Preschooler

```c++
bool Preschooler::operator==(const Preschooler &right) const
{
    return (this->behaviorType == right.behaviorType);
}
```

### Перегрузка операторов класса Schoolboy

```c++
bool Schoolboy::operator==(const Schoolboy &right) const
{
    return this->schoolLevel == right.schoolLevel;
}
```

### Перегрузка операторов класса StudentBrSTU

```c++
bool StudentBrSTU::operator==(const StudentBrSTU &right) const
{
    return (this->faculty == right.faculty);
}

```

### Перегрузка операторов класса Worker

```c++
bool Worker::operator==(const Worker &right) const
{
    return (this->experienceNumber == right.experienceNumber);
}
```
