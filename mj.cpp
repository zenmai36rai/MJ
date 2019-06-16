#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
string tehai1;
string tumo ="[ch]";
int tehai_p1[13] = {4,5,6,13,14,15,22,23,24,27,27,33,33};
char* int2hai(int i)
{
	static char kind[] = "mps";
	static char tu_hai[] = "tonashpehkhtch";
	static char buf[5];
	if (i<27)
	{
		sprintf(buf,"[%d%c]",i%9,kind[i/9]);
	} else {
		int n = (i-27)*2;
		sprintf(buf,"[%c%c]",tu_hai[n],tu_hai[n+1]);
	}
	return buf;
};
string vec2hai(int* v)
{
	static string ret;
	for(int i=0;i<13; i++)
	{
		ret += int2hai(v[i]);
	}
	return ret;
}
int main(){
	tehai1 = vec2hai(tehai_p1);
	cout << tehai1;
	cout << "_";
	cout << tumo;
	cout << "\n";
	return 0;
};