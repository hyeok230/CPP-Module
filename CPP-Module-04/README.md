## C++ Module - 04

### ex00
---
*가상 소멸자*
```c++
int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	...
	
	delete meta;
	delete j;
	delete i;
}

virtual ~Animal();
```
Animal 클래스와 그 클래스를 상속 받은 Dog와 Cat 클래스가 있을 때, Dog와 Cat을 Animal 포인터에 업캐스팅한 후 delete를 할 경우 Animal 클래스의 소멸자만 불러져 Dog, Cat에 메모리 할당된 멤버 변수가 있을 경우 릭이날 위험이 있다. 따라서 가상 소멸자를 통해 virtual ~Animal()을 작성하면 자식클래스 소멸자 -> 부모 클래스 소멸자 순으로 소멸자가 불려진다.

*가상 함수*
Animal 클래스와 그 클래스를 상속 받은 Dog와 Cat 클래스가 있을 때, Dog와 Cat에서 Animal 클래스 안에 있는 멤버 함수를 오버로딩 하려고 할 때 부모 클래스에서 virtual을 붙여 주어야 생성된 객체에 맞는 멤버 함수가 불러진다. virtual이 없을 경우 기본적으로 부모 클래스의 멤버 함수가 불러진다. 