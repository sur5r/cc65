/*
  GEOS memory and string functions

  ported to small C on 27.10.1999
  by Maciej 'YTM/Elysium' Witkowiak
  04.04.2003 - updates
*/

#ifndef	_GMEMORY_H
#define _GMEMORY_H

#ifndef _GSTRUCT_H
#include <geos/gstruct.h>
#endif

void __fastcall__ CopyString(char *dest, const char *source);
char __fastcall__ CmpString(const char *dest, const char *source);
void __fastcall__ CopyFString(char len, char *dest, const char *source);
char __fastcall__ CmpFString(char len, char *dest, const char *source); 

unsigned __fastcall__ CRC(const char *buffer, unsigned len);
void* __fastcall__ ClearRam(char *dest, unsigned len);
void* __fastcall__ FillRam(char *dest, char what, unsigned len);

void* __fastcall__ MoveData(char *dest, const char *source, unsigned len);

void __fastcall__ InitRam(char *myInitTab);

void __fastcall__ StashRAM(char REUBank, unsigned len, char *reuaddy, const char *cpuaddy);
void __fastcall__ FetchRAM(char REUBank, unsigned len, const char *reuaddy, char *cpuaddy);
void __fastcall__ SwapRAM(char REUBank, unsigned len, char *reuaddy, char *cpuaddy);
char __fastcall__ VerifyRAM(char REUBank, unsigned len, const char *reuaddy, const char *cpuaddy);

#endif
