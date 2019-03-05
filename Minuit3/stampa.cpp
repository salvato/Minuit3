#include "stdafx.h"
#include "stampa.h"

extern CWnd* pWindow;
extern unsigned MSG_NEWTEXT;

void __stdcall
STAMPA(char* line, int len) {
  if(pWindow != NULL) {
    line[len-1] = 0;
    pWindow->SendMessage(MSG_NEWTEXT, (WPARAM)0, (LPARAM)line);
    pWindow->SendMessage(MSG_NEWTEXT, (WPARAM)0, (LPARAM)_T("\r\n"));
  }
}


