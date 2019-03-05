========================================================================
  LIBRERIA MFC: cenni preliminari sul progetto Minuit3
========================================================================


La creazione guidata applicazione ha creato questa DLL Minuit3. 
Tale DLL illustra le nozioni fondamentali sull'utilizzo delle classi MFC 
(Microsoft Foundation Class) e costituisce un punto di partenza per la 
scrittura della DLL.

Questo file contiene un riepilogo del contenuto di ciascun file che fa parte
della DLL Minuit3.

Minuit3.vcxproj
    File di progetto principale per i progetti VC++ generati tramite una 
    creazione guidata applicazione.
    Contiene informazioni sulla versione di Visual C++ che ha generato il file e
    informazioni sulle piattaforme, le configurazioni e le caratteristiche del 
    progetto selezionate con la Creazione guidata applicazione.

Minuit3.vcxproj.filters
    File dei filtri per i progetti VC++ generati tramite una Creazione guidata 
    applicazione. 
    Contiene informazioni sull'associazione tra i file del progetto e i filtri. 
    Tale associazione viene utilizzata nell'IDE per la visualizzazione di
    raggruppamenti di file con estensioni simili in un nodo specifico, ad 
    esempio: i file con estensione cpp sono associati al filtro "File di 
    origine".

Minuit3.cpp
    File di origine DLL principale contenente il codice per la definizione di
    DllMain().

Minuit3.rc
    Elenco di tutte le risorse Microsoft Windows utilizzate dal
    programma. Include le icone, le bitmap e i cursori memorizzati
    nella sottodirectory RES. Questo file può essere modificato direttamente
    in Microsoft Visual C++.

res\Minuit3.rc2
    File contenente le risorse che non vengono modificate
    da Microsoft Visual C++. Inserire in questo file tutte le risorse non 
    modificabili dall'editor di risorse.

Minuit3.def
    Questo file contiene informazioni sulla DLL che deve essere
    fornita per l'esecuzione in Microsoft Windows. Definisce parametri
    quali il nome e la descrizione della DLL. Consente inoltre di esportare
    funzioni dalla DLL.

/////////////////////////////////////////////////////////////////////////////
Altri file standard:

StdAfx.h, StdAfx.cpp
    Tali file vengono utilizzati per compilare un file di intestazione
    precompilato denominato Minuit3.pch e un file dei tipi 
    precompilato denominato StdAfx.obj.

Resource.h
    File di intestazione standard che definisce i nuovi ID risorse.
    Tale file viene letto e aggiornato da Microsoft Visual C++.

/////////////////////////////////////////////////////////////////////////////
Altre note:

La creazione guidata applicazione utilizza il prefisso "TODO:" per indicare le
parti del codice sorgente da aggiungere o personalizzare.

/////////////////////////////////////////////////////////////////////////////
