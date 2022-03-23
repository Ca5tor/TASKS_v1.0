#pragma once

#include "MyForm.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace TASKS; // name project

void	CleanListBoxs(ListBox^ Lb1, ListBox^ Lb2);

bool	GetIntN(TextBox^ Tx, String^ s, size_t& x);
bool	GetInt(TextBox^ Tx, String^ s, int& x);
bool	ErrorVallA(TextBox^ Tx, String^ s, int& x, int& y);

int		count_words(String^ s, Char c);
int		FindMtx(ListBox^ Lb, array<String^>^ mas_f, int n);

String^ ADDWS(String^ s, int num);