## C++ Module - 00

### ex00
___
객체를 heap과 stack 영역에 각각 생성해보고 소멸자를 통해 데이터가 해제되는 과정을 확인해본다.

스택
1. 런타임 시점에서 크기가 결정된다.
2. LIFO 구조이다. (가장 마지막에 저장된 데이터가 먼저 인출된다. 따라서 메모리 접근이 힙보다 빠르다)
3. 스택의 경우 선언했던 함수 영역으 벗어난 경우 자동으로 소멸된다.
4. . 연산자를 통해 인스턴스에 접근할 수 있다.

힙
1. 컴파일 시점에서 크기가 결정된다.
2. 동적 메모리 할당을 통해 저장되는 영역이다.
3. -> 연산자를 통해 인스턴스에 접근할 수 있다.
4. 힙과는 다르게 사요이 종료된 시점에 할당을 해제하지 않으면 메모리 릭이 발생한다.

### ex02
___

#### 포인터와 레퍼런스의 차이
1. NULL 초기화
포인터는 null을 초기화 할 수 있지만, 레퍼런스는 null을 초기화 할 수 없다. 레퍼런스는 반드시 선언과 동시에 초기화를 해야한다. 이러한 특성으로 포인터는 가리킬 대상을 변경할 수 있지만, 레퍼런스는 불가능하다.

2. 메모리 공간의 소모
포인터는 값을 저장하기 위해 별도의 메모리 공간을 소모한다. 반면, 레퍼런스는 같은 메모리 공간을 참조하므로 메모리 공간을 소모하지 않는다. (함수의 매개변수로 참조자를 받을 때는 주소를 전달하기 위해 메모리가 사용된다. 할당되는 매개변수가 매번 바뀌기 때문)

3. call by pointer / call by reference
전자의 경우 값 복사가 발생된다. 후자의 경우 값 복사가 발생하지 않는다.

### ex03
___

const 정리

#### 변수
const 키워드가 변수에 사용될 시 초기화 이후 해당 변수의 값을 변경할 수 없다.
```c++
const int var = 5; // OK!
const int var;
var = 5; // Error!
```
#### 함수
함수 인자
```c++
class TestClass
{
    private:
      std::string _name;
    public:
     void setName(const std::string name)
     {
         // name = "default"; // Error!
         _name = name;
     }
}
```
const가 함수의 인자로 들어왔을 경우 해당 인자는 함수 내에서 변경할 수 없다.

함수 뒤
```c++
class TestClass
{
    private:
      std::string _name;
    public:
      std::string getName(void) const
      {
          // _name = "default"; // Error!
          return (_name);
      }
}
```
const가 함수 뒤에 명시되었을 경우 해당 함수에서 클래스 변수를 변경할 수 없다.

함수 리턴값
```c++
class TestClass
{
    private:
      std::string _name;
    public:
      const std::string getName(void)
      {
          // _name = "default"; // Error!
          return (_name);
      }
}
```
const가 함수 리턴값에 명시되었을 경우 해당 함수를 통해 반환받은 값을 변경할 수 없다.

참고자료:
https://velog.io/@appti/CPP-Module-01-ex03