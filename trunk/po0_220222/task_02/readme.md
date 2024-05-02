# Лабораторная работа №2 #

## Наследование и виртуальные функции ##

## Вариант 7 ##
 

## Цель работы ##
Получить практические навыки создания иерархии классов и использования статических компонентов класса


### Конструктор бозового класса ###
```
Challenge::Challenge(const std::string& _name, const bool _passed) : examinee_name(_name), passed(_passed)
{
	this->Add();
}
```

#### Ствтические компоненты класса ####

```
	static Challenge *begin;
	static Challenge *last;
```

#### Реализация метода для просмотра списка ####

```
void Challenge::ShowChallenges()
{
	Challenge* ptr= begin;
	while (ptr != nullptr)
	{
		ptr->Print();
		std::cout << std::endl;
		ptr = ptr->next;
	}
}
```
#### Реализация метода для добавления объекта в список ####

```
void Challenge::Add()
{
	if (begin == nullptr)
	{
		begin = this;
	}
	next = nullptr;
	if (last != nullptr)
	{
		last->SetNext(this);
	}
	last = this;
}
```

#### Если функции не будут виртуальными, то программа не скомпилируется ####

