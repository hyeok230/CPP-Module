## C++ Module - 08

---
의존 타입
```c++
template<typename T>
T::iterator easyfind(T &container, int to_find)
{
	T::iterator iter = std::find(container.begin(), container.end(), to_find);
	if (iter == container.end())
		throw NotFoundException();
	return iter;
}
```
위와 같이 코딩할 경우 에러가 발생한다.

```c++
template<typename T>
typename T::iterator easyfind(T &container, int to_find)
{
	T::iterator iter = std::find(container.begin(), container.end(), to_find);
	if (iter == container.end())
		throw NotFoundException();
	return iter;
}
```
중첩 의존 타입 이름을 식별하는 용도에서는 반드시 typename을 사용해야 한다.
만약 위의 STL iterator 예제에서 typename 키워드 없이 T::const_iterator pos; 만으로 선언을 했다면, 컴파일러는 const_iterator가 T 클래스 내부의 멤버변수일거라고 생각해버릴 수도 있다. 컴파일러는 이런 경우 기본적으로 타입이 아니라고 가정한다.
따라서 c++ 컴파일러에게 어떤 키워드는 typedef로 재정의 된 type이라는 것을 알려주기 위해 typename 키워드를 사용해야한다.
위 코드는 iterator가 T의 의존타입이기 때문에 iterator가 type이라는걸 알려주기 위해 typename 키워드를 사용해야한다.

