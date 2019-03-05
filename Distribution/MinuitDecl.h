#pragma once

extern "C" {
  __declspec(dllimport) 
  void __stdcall 
  MNSETI(const char* line, int len);

  __declspec(dllimport) 
  void __stdcall 
  MNPARS(const char* line, int len, int* iErr);

  __declspec(dllimport) 
  void __stdcall 
  MNPARM(int* nPar, const char* name, int len, double* err, double* start, double* min, double* max, int* iErr);

  __declspec(dllimport) 
  void __stdcall 
  MNPOUT(int nPar, char* name, int len, double* val, double* err, double* min, double* max, int* ivarbl);

  __declspec(dllimport) 
  void __stdcall 
  MNINIT(int i1, int i2, int i3, unsigned Msg, CWnd* pMsg);

  __declspec(dllimport) 
  void __stdcall 
  MNEXCM(void (__stdcall* fcn)(int* npar, double* g, double* f, double* x, int* ifla, void ( __stdcall* util)(void)), \
         const char*, int, double*, int*, int*, int*);

  __declspec(dllimport) 
  void __stdcall 
  MNCOMD(void (__stdcall* fcn)(int* npar, double* g, double* f, double* x, int* ifla, void ( __stdcall* util)(void)), \
         const char*, int, int*, void ( __stdcall* util)(void));

  __declspec(dllimport) 
  void __stdcall 
  MNSTAT(double* fmin, double* edm, double* erdef, int* npari, int* nparx, int* istat);

}

// To Load the correct Libraries
#ifdef _DEBUG
  #pragma comment (lib, "Minuit3d.lib")
#else
  #pragma comment (lib, "Minuit3.lib")
#endif
