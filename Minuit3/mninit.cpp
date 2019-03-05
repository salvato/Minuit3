#include "stdafx.h"
#include "mninit.h"

extern CWnd* pWindow;
extern unsigned MSG_NEWTEXT;

extern "C"
void __stdcall MNINIT2(int i1, int i2, int i3);

void __stdcall
MNINIT(int i1, int i2, int i3, unsigned uMessage, CWnd* pMsg) {
  pWindow = pMsg;
  MSG_NEWTEXT = uMessage;
  MNINIT2(i1, i2, i3);
}
