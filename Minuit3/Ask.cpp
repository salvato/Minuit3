#include "stdafx.h"
#include "Ask.h"
#include <fstream>

void __stdcall
ASK(char* prompt, int l1, char* command, int l2) {
  _strnset(command, ' ', l2-1);
  char szFilter[] = "Save to Filename. (*.cmd)|*.cmd|All Files (*.*)|*.*||";
  char szDefExt[] = "cmd";
  std::ifstream DataFile;
  CString FileIn;

  CFileDialog FileDialog(false, szDefExt, FileIn,
                         OFN_HIDEREADONLY|OFN_OVERWRITEPROMPT, szFilter);
  FileDialog.m_ofn.lpstrTitle = prompt;
  if(FileDialog.DoModal() == IDOK) {
    strcpy(command, FileDialog.GetPathName().Left(l2-1));
    command[FileDialog.GetPathName().GetLength()] = ' ';
    command[l2-1]= ' ';
  }
}

