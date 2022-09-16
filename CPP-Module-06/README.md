## C++ Module - 06

---
#### static_cast
static_cast는 C 스타일 캐스터와 똑같은 의미와 형변환 능력을 가지고 있는, 가장 기본적인 캐스트 연산자이다. static_cast는 타입체크를 compile 타임에 정적으로 수행한다.


#### const_cast
const_cast는 표현식의 상수성(const)을 없애는 데 사용된다.

#### reinterpret_cast

reinterpret_cast는 어떠한 포인터 타입도 어떠한 포인터 타입으로든 변환이 가능하다.

#### dynamic_cast

dynamic_cast는 런타임에 (동적으로) 상속 계층 관계를 가로지르거나 다운캐스팅시 사용되는 캐스팅 연산자이다.
캐스팅의 실패는 NULL(포인터)이거나 예외(참조자)를 보고 판별할 수 있다.