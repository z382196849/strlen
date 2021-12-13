#include<stdio.h>

int MyStrlen(const char* str)
{
    int count = 0;
    while(*str)
    {
 	str++;
	count++;
    }
    return count;
}

int main()
{
    int len = 0;
    len = MyStrlen("power");
    printf("len = %d", len);
    getchar();
    return;
}