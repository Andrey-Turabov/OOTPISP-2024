# Лабораторная работа №2 #

## Наследование и виртуальрые функции ##

## Вариант 12 ##
 

## Цель работы ##
Получить практические навыки создания иерархии классов и использования статических компонентов класса.


### Конструктор базового класса ###
```c++
Engine::Engine(const std::string& _modelName, const float _power, const float _weight) :
	modelName(_modelName), power(_power), weight(_weight)
{
	this->Add();
}
```

### Статические компоненты класса ###

```c++
    static Engine* begin;
	static Engine* last;
```

#### Реализация метода для просмотра списка ####

```c++
void Engine::ShowEngines() {
	Engine* ptr = begin;

	while (ptr != nullptr)
	{
		ptr->Print();
		ptr = ptr->next;
		std::cout << std::endl;
	}
}
```

#### Реализация метода для добавления объекта в список ####

```c++
void Engine::Add()
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


#### Результат работы программы ####

[result](images/result.png)
