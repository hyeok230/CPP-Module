## C++ Module - 00

### ex00
---
```c++
#include <algorithm>

template <class InputIt, class OutputIt, class UnaryOperation>
OutputIt transform(InputIt first1, InputIt last1, OutputIt d_first, UnaryOperation unary_op);
```
transform함수는 #include <algorithm> 헤더에 정의되어 있다.

first1, last1 은 input container의 범위를 나타낸다.

d_first는 각 요소의 결과 값인 output이 추가될 위치를 나타낸다.

unary_op는 단항 연산 함수로 input container의 각 요소들이 해당 함수를 거쳐 d_first의 위치에 추가된다.


### ex01
---
```c++
while (std::getline(std::cin, input))
{ 
	~~~
};

while (!std::cin.eof())
{
	~~~
}
```
std::cin >> input를 통해 input에 원하는 값을 넣고자 하면 ctrl-d를 사용할시 prompt가 끝없이 출력되는 오류가 발생하기 때문에 std::getline(std::cin, input) 를 통해 while문을 사용해야 오류를 방지할 수 있다.
!std::cin.eof() 와 같은 방식으로도 처리가 가능하다.

```c++
#include <iomanip>

std::setw(int n)

void main() 
{
	cout << setw(7) << "a" << endl;
}
```
출력하는 데이터의 칸을 지정한 수 만큼 확보한 뒤에 출력 시켜준다. 
a 앞에 6칸의 공백이 생기게 된다.


```c++
int index;

std::cin >> index;
if (std::cin.fail())
{
	std::cin.clear();
	std::cin.ignore(255, '\n');
}
```
int로 선언된 index에 cin으로 숫자가 아닌 값을 입력하려고 하면 std::cin.fail()이 참이 되어 if문이 실행된다. 이때 비정상입력으로 if문 안의 내용이 무한 반복될 수 있으므로 std::cin.clear()를 통해 cin 객체의 내부 플래그 상태를 초기화 시켜줘야한다. 그러나 이것만으로는 해결이 되지 않아 std::cin.ignore(255, '\n');를 통해 내부 입력버퍼를 비워주어야 다시 cin을 정상적으로 사용할 수 있다.

### ex02
---

```c++
#include <time>

void	Account::_displayTimestamp(void)
{
	time_t	timestamp;
	char	buff[16];

	time(&timestamp);
	strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", localtime(&timestamp));
	std::cout << "[" << buff << "]";
}
```
c++에서는 time() 함수를 통해 시간을 확인할 수 있다. 해당 함수의 인자로 들어가는 time_t 구조체는 시간을 다루는데 필요한 정보들이 저장되어 있다. time() 함수는 1970년 1월 1일 00:00:00 GMT 이후로 경과된 시간을 초단위로만 출력하기 때문에 strftime을 이용하면 time_t 구조체 내부의 정보를 원하는 양식대로 출력할 수 있다. localtime은 현재 시간을 time_t 구조체에 저장해준다.
