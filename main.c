/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : A simple command line wav player                               *
 *                                                                          *
 * By      : Jon Wilson (10yard)                                            *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
	if (argc > 1) {
		PlaySound(argv[1], NULL, SND_FILENAME | SND_SYNC);
    }
    return 0;
}

