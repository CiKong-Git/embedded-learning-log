#include <stdio.h>
struct LED_Registers
{
	int pin;
	int state;
};
int main()
{
	int a = 10;
	int* p = &a;
	struct LED_Registers LED1;
	LED1.pin = 5;
	LED1.state = 0;
	struct LED_Registers* p_LED= &LED1;
	printf("变量a的值是： %d\n", a);
	printf("指针p拿到的门牌号是： %p\n", (void*)p);
	printf("指针p解引用拿到的值是： %d\n", *p);
	printf("LED1的引脚是：%d\n",LED1.pin);
	printf("通过指针获取的引脚： %d\n", p_LED->pin);
	return 0;


}
