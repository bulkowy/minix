#ifndef _GROUP_H
#define _GROUP_H

#include <lib.h>
/*
	Zwraca liczbę losów procesu o zadanym PID lub EINVAL w przypadku braku procesu o zadanym PID
*/
int chgroup(pid_t pid)
{
	message m;
	m.m1_i1 = pid;
	return _syscall(MM, CHGROUP, &m);
}
/*
	Ustawia liczbę losów procesu o zadanym PID. Funkcja zwraca:
	
	1,2 w przypadku powodzenia
	EINVAL w przypadku nie znalezienia procesu lub wartosci spoza dozwolnego zakresu
*/
int getgroup(pid_t pid)
{
	message m;
	m.m1_i1 = pid;
	return _syscall(MM, GETGROUP, &m);
}
#endif
