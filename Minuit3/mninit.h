#ifndef __MNINIT_H
#define __MNINIT_H


extern "C" {
  __declspec(dllexport) 
  void __stdcall MNINIT(int i1, int i2, int i3, unsigned uMessage, CWnd* pMsg);
}
#endif
