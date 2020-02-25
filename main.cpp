#include <iostream>
#include <string.h>
using namespace std;

char* find_which_are_removed(const char*s, const char* l)
{
	cout << "s: " << s << "\nl: " << l << endl;
    	char* ret;
    	const char* p = s;
    	const char* q = l;
	int n = 0;
	char str[128] = {'\0'};
	
    	while (*p != '\0')
    	{
		if (*p == *q)
		{
			p++;
			q++;
			n++;
		}
		else
		{
			n++;
			char tmp[16] = {'\0'};
			printf("%c,%d\n", *p, n);
			sprintf(tmp, "%s%c,%d\n", tmp, *p, n);
			strcat(str, tmp);
			p++;
		}
	} 
	
 	ret = str;
    	return ret;
}

int main()
{
	//find_which_are_removed("hello world !", "hello world ");
	//find_which_are_removed("hello world !", "hell world ");
	//find_which_are_removed("hello world !", "hello world !");
	find_which_are_removed("hello world !", "helo word !");
	return 0;
}
