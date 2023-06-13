#include "pointers.h"
#include <iostream>

/*
Тесты для проверки корректности работы функции strStrF
*/

struct testStrStr {
	int ret_value;
	const char *text;
	const char *pattern;
};

void testStrStrF() {
	testStrStr tests[] = {
	{0, "", ""}, //0
	{0, "a", ""}, //1
	{0, "a", "a"}, //2
	{-1, "a", "b"}, //3
	{0, "aa", ""}, //4
	{0, "aa", "a"}, //5
	{0, "ab", "a"}, //6
	{1, "ba", "a"}, //7
	{-1, "bb", "a"}, //8
	{0, "aaa", ""}, //9
	{0, "aaa", "a"}, //10
	{1, "abc", "b"}, //11
	{2, "abc", "c"}, //12
	{-1, "abc", "d"}, //13
	{-1, "a", "aa"}, //14
	{-1, "a", "ba"}, //15
	{-1, "a", "ab"}, //16
	{-1, "a", "bb"}, //17
	{-1, "a", "aaa"}, //18
	{-1, "aa", "aaa"}, //19
	{0, "aaa", "aaa"}, //20
	{0, "aaab", "aaa"}, //21
	{1, "baaa", "aaa"}, //22
	{1, "baaaa", "aaa"}, //23
	{1, "baaab", "aaa"}, //24
	{-1, "abd", "abc"}, //25
	{2, "ababc", "abc"}, //26
	{3, "abdabc", "abc"}, //27
	{-1, "", "a"}, //28
	{2, "asasaf", "asaf"}, //29
	{2, "ababac", "abac"} //30
	};

	for (int i{ 0 }; i < sizeof(tests) / sizeof(tests[0]); ++i) {
		int ret = strStrF(tests[i].text, tests[i].pattern);
		(tests[i].ret_value == ret) ? std::cout << "Test #" << i << "OK\n" : std::cout << "Test #" << i << "FAILED\n";
	}
	std::cout << std::endl;

}