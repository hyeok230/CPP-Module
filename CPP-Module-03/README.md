## C++ Module - 02

### ex01
---

<table>
	<tr>
		<th>상속 접근 지정자</th>
		<th>기반 클래스</th>
		<th>파생 클래스의 상속 상태</th>
	</tr>
	<tr>
		<th rowspan="3">public</th>
		<th>public</th>
		<th>public</th>
	</tr>
	<tr>
		<th>private</th>
		<th>접근 불가</th>
	</tr>
	<tr>
		<th>protected</th>
		<th>protected</th>
	</tr>
	<tr>
		<th rowspan="3">private</th>
		<th>public</th>
		<th>private</th>
	</tr>
	<tr>
		<th>private</th>
		<th>접근 불가</th>
	</tr>
	<tr>
		<th>protected</th>
		<th>private</th>
	</tr>
	<tr>
		<th rowspan="3">protected</th>
		<th>public</th>
		<th>protected</th>
	</tr>
	<tr>
		<th>private</th>
		<th>접근불가</th>
	</tr>
	<tr>
		<th>protected</th>
		<th>protected</th>
	</tr>
</table>

### ex03
---

다이아몬드 상속

A, B, C, D 클래스가 있을 때, B, C는 A 클래스를 상속 받고 D 클래스가 B, C 클래스를 상속 받았을 경우 B, C 클래스가 같은 부모클래스를 상속 받고 있어 D 입장에서는 간접적으로 A를 두번 상속받은 상태가 된다. 이러한 상속 관계를 다이아몬드를 닮았다고 하여 *다이아몬드 상속* 이라고 부른다. 
이를 해결하기 위해 가상 상속을 사용한다.

가상 상속은 상속하고자 하는 클래스 앞에 virtual 키워드를 넣으면 된다.

```c++
class B : virtual public A 
{
};

class C : public virtual A
{
};
```
기본 클래스가 가상 상속으로 지정되면 클래스 B와 클래스 C가 동시에 상속받는 클래스 A는 하나만 존재하게 된다.

가상 상속 시 vbptr(virtual base table pointer)라는, 기본 클래스의 인스턴스를 가리키는 포인터를 생성하고 메모리 구조에 제일 아래로 위치시킨다.

이러한 vbptr을 클래스 B와 클래스 C가 참조하게 함으로써 클래스 A의 인스턴스가 한 번만 생성되고 이렇게 생성된 인스턴스를 상속받는 방식으로 진행한다.

단 가상 상속의 경우 다이아몬드 상속 상태에서의 데이터 크기보다 더 커질 수 있으며, 성능 저하를 야기할 수 있다.

참조 : https://velog.io/@appti/CPP-Module-03-ex03