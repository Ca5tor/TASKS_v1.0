#include "Header.h"
#include <string>

/*
263. ��� �����, ���������� N �����. ������ ������ �������������
������. ����� ������ <= 60. ��������� ������ ���, ����� ������ ������
����� ����� 60. ������ �� ������ ���������� � ������������� ���������.
������������ ����� ��������� ���������� �������� �������������� �������
� ��� ������, ��� ��� ��� �������. ��������� ��� ��������� ������� � �����
����� �� �����������
*/

void addWS(std::string& s, int reqLen) {
	std::string::size_type ind = 0;

	while (s.size() < reqLen && (ind = s.find(' ', ind)) != std::string::npos) {
		s.insert(ind, " ");
		while (s[ind] == ' ')++ind;
	}
	if (s.size() < reqLen) addWS(s, reqLen);
}

String^ ADDWS(String^ s, int num) {
	String^		str2;
	std::string	str;

	//�������������� System::String^ � std::string  
	using namespace Runtime::InteropServices;
	str = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	 
	addWS(str, num);
	str2 = gcnew String(str.c_str());
	return (str2);
}

// ������� �������� ������ ��������
String^ DelSpace(String^ str) {
	str = str->Replace("\t", " ");				// ������� �������� � ������ ��� ���� �������			
	str = str->Replace("\r", " ");				
	str = str->Replace("\v", " ");
	str = str->Replace("\f", " ");
	str = str->Replace("\n", " ");
	
	str = str->Trim();							// ������� ��������� � �������� �������

	while (str->IndexOf("  ") >= 0)				// � ������, ���� � ������ ���� ��� ������� ������, 
		str = str->Replace("  ", " ");			// �������� �� �� ���� ������
	str = str->Replace(" .", ".");
	return str;									// ���������� ��������������� ������
}

void	FUN(String^ str, ListBox^ Lb) {
	String^	line;
	size_t	i;
	size_t	space;

	line = DelSpace(str);
	i = 0;
	space = 0;
	while (i < line->Length){
		if (line[i] == ' ') space++;
		i++;
	}
	if (space == 0) { Lb->Items->Add(line); return; }
	line = ADDWS(line, 60);
	Lb->Items->Add(line);
}

//������ ���� �� �����
System::Void TASKS::MyForm::button15_Click(System::Object^ sender, System::EventArgs^ e){
	SaveFileDialog^	fd;
	StreamReader^	sr = nullptr;							// ���������� � ������������ ��������� �� �����
	String^			line;

	CleanListBoxs(listBox7, listBox8);

	fd = gcnew SaveFileDialog;								// �������� ������� ����������� ���� OpenFileDialog
/*	��������� ������� ����������� ����	*/
	fd->Title = "�������� ��������� �����";
	fd->Filter = "��������� ����� (*.txt)|*.txt";
	fd->FilterIndex = 1;
	fd->OverwritePrompt = true;

	/*	��������� ���������� ����, �������� ���� � ��������� ������	*/
	if (fd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try { sr = gcnew StreamReader(fd->FileName); }		// �������� ������
		catch (Exception^ ex) {								// ��������� ������ �������� ������� �����
			MessageBox::Show(ex->Message, "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			if (sr) sr->Close();
			return;
		}
		/*	��������� ��������� ������	*/
		while (line = sr->ReadLine()) {
			if (line->Length >= 60) { listBox7->Items->Add(line); listBox8->Items->Add(line); continue;}
			else if (line->Length == 0) { listBox7->Items->Add(line); listBox8->Items->Add(line);  continue; }
			else { listBox7->Items->Add(line); FUN(line, listBox8);}	
		}
		sr->Close();										// �������� ������
	}
	else {
		MessageBox::Show("������ �� ���� ��������!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
}

//������ ��������� ����
System::Void TASKS::MyForm::button16_Click(System::Object^ sender, System::EventArgs^ e){
	array<String^>^	mas_f;
	String^			buffer;
	SaveFileDialog^	file;

	file = gcnew SaveFileDialog;
	if (file->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		mas_f = File::ReadAllLines(file->FileName);
	else {
		MessageBox::Show("������ �� ���������!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (FindMtx(listBox7, mas_f, 1) == 0) {
		buffer = "\n�������� ������:\n";
		for each (auto var in listBox7->Items)
			buffer += var->ToString() + "\n";
		buffer += "���������� �����:\n";
		for each (auto var in listBox8->Items)
			buffer += var->ToString() + "\n";
		File::AppendAllText(file->FileName, buffer);

		File::AppendAllText(file->FileName, "\n");
	}
}

System::Void TASKS::MyForm::button17_Click(System::Object^ sender, System::EventArgs^ e){ CleanListBoxs(listBox7, listBox8); }