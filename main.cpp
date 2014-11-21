#if defined(UNICODE) && !defined(_UNICODE)
#define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
#define UNICODE
#endif

#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdint.h>
#include <tchar.h>
#include <windows.h>

extern "C" {
#include "stack.h"
#include "tinyptc.h"
#include "_ceu_app.h"
#include "_ceu_app.c"
}

int WINAPI WinMain (HINSTANCE hThisInstance,
                    HINSTANCE hPrevInstance,
                    LPSTR lpszArgument,
                    int nCmdShow)
{
  char CEU_DATA[sizeof(CEU_Main)];
  tceu_app app;
  app.data = (tceu_org*) &CEU_DATA;
  app.init = &ceu_app_init;
  return ceu_go_all(&app);
}


