/*
** Copyright 2002, Travis Geiselbrecht. All rights reserved.
** Distributed under the terms of the NewOS License.
*/
#ifndef _NEWOS_M68K_STAGE2_PRIV_H
#define _NEWOS_M68K_STAGE2_PRIV_H

#include <boot/stage2.h>

/* NeXT monitor wrappers */
int init_nextmon(char *monitor);
int probe_memory(kernel_args *ka);

void putc(int c);
void puts(const char *str);
int getchar(void);
int dprintf(const char *fmt, ...);

/* asm stubs */
void set_tc(unsigned int tc);
unsigned int get_tc(void);
void set_urp(unsigned int tc);
unsigned int get_urp(void);
void set_srp(unsigned int tc);
unsigned int get_srp(void);

unsigned long allocate_page(kernel_args *ka);

#endif
