#include "Header.h"
#include <string>

/*
263. Дан текст, содержащий N строк. Каждая строка заканчивается
точкой. Длина строки <= 60. Выровнять строки так, чтобы каждая строка
имела длину 60. Строка не должна начинаться и заканчиваться пробелами.
Выравнивание строк проводить равномерно вставляя дополнительные пробелы
в тех местах, где они уже имеются. Вставлять все требуемые пробелы в одном
месте не допускается
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

	//Преобразование System::String^ в std::string  
	using namespace Runtime::InteropServices;
	str = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	 
	addWS(str, num);
	str2 = gcnew String(str.c_str());
	return (str2);
}

// Функция удаления лишних пробелов
String^ DelSpace(String^ str) {
	str = str->Replace("\t", " ");				// Сначала заменяем в строке все спец символы			
	str = str->Replace("\r", " ");				
	str = str->Replace("\v", " ");
	str = str->Replace("\f", " ");
	str = str->Replace("\n", " ");
	
	str = str->Trim();							// Убираем начальные и концевые пробелы

	while (str->IndexOf("  ") >= 0)				// А теперь, пока в строке есть два пробела подряд, 
		str = str->Replace("  ", " ");			// заменяем их на один пробел
	str = str->Replace(" .", ".");
	return str;									// Возвращаем преобразованную строку
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

//Кнопка ввод из файла
System::Void TASKS::MyForm::button15_Click(System::Object^ sender, System::EventArgs^ e){
	SaveFileDialog^	fd;
	StreamReader^	sr = nullptr;							// Объявление и иницализация указателя на поток
	String^			line;

	CleanListBoxs(listBox7, listBox8);

	fd = gcnew SaveFileDialog;								// Создание объекта диалогового окна OpenFileDialog
/*	Настройка свойств диалогового окна	*/
	fd->Title = "Открытие выходного файла";
	fd->Filter = "Текстовые файлы (*.txt)|*.txt";
	fd->FilterIndex = 1;
	fd->OverwritePrompt = true;

	/*	Открываем диалоговое окно, выбираем файл и считываем данные	*/
	if (fd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try { sr = gcnew StreamReader(fd->FileName); }		// Создание потока
		catch (Exception^ ex) {								// Обработка ошибок создания потоков ввода
			MessageBox::Show(ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			if (sr) sr->Close();
			return;
		}
		/*	Построчно считываем строку	*/
		while (line = sr->ReadLine()) {
			if (line->Length >= 60) { listBox7->Items->Add(line); listBox8->Items->Add(line); continue;}
			else if (line->Length == 0) { listBox7->Items->Add(line); listBox8->Items->Add(line);  continue; }
			else { listBox7->Items->Add(line); FUN(line, listBox8);}	
		}
		sr->Close();										// Закрытие потока
	}
	else {
		MessageBox::Show("Данные не были получены!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
}

//Кнопка сохранить файл
System::Void TASKS::MyForm::button16_Click(System::Object^ sender, System::EventArgs^ e){
	array<String^>^	mas_f;
	String^			buffer;
	SaveFileDialog^	file;

	file = gcnew SaveFileDialog;
	if (file->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		mas_f = File::ReadAllLines(file->FileName);
	else {
		MessageBox::Show("Данные не сохранены!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (FindMtx(listBox7, mas_f, 1) == 0) {
		buffer = "\nИсходные данные:\n";
		for each (auto var in listBox7->Items)
			buffer += var->ToString() + "\n";
		buffer += "Полученный текст:\n";
		for each (auto var in listBox8->Items)
			buffer += var->ToString() + "\n";
		File::AppendAllText(file->FileName, buffer);

		File::AppendAllText(file->FileName, "\n");
	}
}

System::Void TASKS::MyForm::button17_Click(System::Object^ sender, System::EventArgs^ e){ CleanListBoxs(listBox7, listBox8); }