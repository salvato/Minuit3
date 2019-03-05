// dllmain.cpp: definisce le routine di inizializzazione per la DLL.
//

#include "stdafx.h"
#include <afxwin.h>
#include <afxdllx.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

CWnd* pWindow=NULL;
unsigned MSG_NEWTEXT;

static AFX_EXTENSION_MODULE Minuit3DLL = { NULL, NULL };

extern "C" int APIENTRY
DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	// Rimuovere questa riga se si utilizza lpReserved
	UNREFERENCED_PARAMETER(lpReserved);

	if (dwReason == DLL_PROCESS_ATTACH) {
		TRACE0("Inizializzazione di Minuit3.DLL\n");
		
		// Inizializzazione unica DLL di estensione
		if (!AfxInitExtensionModule(Minuit3DLL, hInstance))
			return 0;

		// Inserire la DLL nella catena di risorse
		// NOTA: se la DLL di estensione viene collegata in modo implicito
		//  da una DLL regolare MFC (quale un controllo ActiveX)
		//  anziché da un'applicazione MFC, occorre
		//  rimuovere questa riga da DllMain e inserirla in una funzione
		//  separata esportata dalla DLL di estensione. La DLL regolare
		//  che utilizza la DLL di estensione deve quindi chiamare in modo esplicito
		//  tale funzione per inizializzare la DLL di estensione.  In caso contrario,
		//  l'oggetto CDynLinkLibrary non verrà connesso
		//  alla catena di risorse della DLL regolare, generando gravi
		//  problemi.

		new CDynLinkLibrary(Minuit3DLL);

	} else if (dwReason == DLL_PROCESS_DETACH) {
		TRACE0("Chiusura di Minuit3.DLL\n");

		// Chiudere la libreria prima della chiamata ai distruttori
		AfxTermExtensionModule(Minuit3DLL);
	}
	return 1;   // ok
}
