#include "Header.h"

/*
139. Дан двумерный массив А. Заменить нулями элементы массива,
стоящие в строках или столбцах, где имеются нули
*/

//Функция вывода матрицы в ListBox
void OutputMtxToListBox(int** mas, size_t m, size_t n, ListBox^ Lb) {
	String^ s;
	
	for (size_t i = 0; i < m; i++) {
		s = "";
		for (size_t j = 0; j < n; j++) {
			if (abs(mas[i][j]) >= 0 && abs(mas[i][j]) <= 9) s += " ";
			
			(mas[i][j] >= 0) ? s += " " + String::Format("{0}", mas[i][j]) + "\t" : s += String::Format("{0}", mas[i][j]) + "\t";	
		}
		Lb->Items->Add(s);
	}
}

int **FUN(int** mas, size_t m, size_t n) {
	bool	*I;
	bool	*J;

	I = new bool[m];
	J = new bool[n];

	for (int i = 0; i < m; i++) I[i] = false;
	for (int j = 0; j < n; j++) J[j] = false;

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (mas[i][j] == 0)
				I[i] = true, J[j] = true;

	for (int i = 0; i < m; i++)
		if (I[i])
			for (int j = 0; j < n; j++)
				mas[i][j] = 0;

	for (int j = 0; j < n; j++)
		if (J[j])
			for (int i = 0; i < m; i++)
				mas[i][j] = 0;
	return (mas);
}

//Событийная процедура генерации матрицы
System::Void TASKS::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e){
	size_t	num_kol;
	size_t	num_str;
	int		num_a;
	int		num_b;
	int		**matrix1;
	
	// Проверка корректности Вводимых исходных данных
	if (!GetIntN(textBox5, "Введите количество строк матрицы (от 1 до 100)", num_str))return;
	if (!GetIntN(textBox6, "Введите количество столбцов матрицы (от 1 до 100)", num_kol))return;
	if (!GetInt(textBox7, "Введите начальное значение (от -100 до 100)", num_a))return;
	if (!GetInt(textBox8, "Введите конечное значение (от -100 до 100)", num_b))return;
	if (!ErrorVallA(textBox7, "Число А не может быть больше В", num_a, num_b)) {
		CleanListBoxs(listBox3, listBox4);
		textBox5->Clear();
		textBox6->Clear();
		textBox7->Clear();
		textBox8->Clear();
		return;
	}

	matrix1 = new int* [num_str];
	for (size_t c = 0; c < num_str; c++)
		matrix1[c] = new int[num_kol];

	Random^ rnd = gcnew Random;
	for (size_t i = 0; i < num_str; i++)
		for (size_t j = 0; j < num_kol; j++)
			matrix1[i][j] = rnd->Next(num_a, num_b);

	CleanListBoxs(listBox3, listBox4);
	OutputMtxToListBox(matrix1, num_str, num_kol, listBox3);
	OutputMtxToListBox(FUN(matrix1, num_str, num_kol), num_str, num_kol, listBox4);
}

//Событийная процедура кнопки Ввод из файла
System::Void TASKS::MyForm::button7_Click(System::Object^ sender, System::EventArgs^ e){
	int				**mtx1;
	size_t			num_str;
	size_t			num_kol;
	String^			Buf = "";
	SaveFileDialog^	fd;
	StreamReader^	sr = nullptr;							// Объявление и иницализация указателя на поток
	String^			line;
	array<String^>^	mas_f;
	array<String^>^	arr;

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
		/*	Построчно считываем троку склеивая к Buf с разделителем P 
		и подсчитываем количество строк и столбцов для будущей матрицы	*/
		line = sr->ReadLine();
		num_kol = count_words(line, ' ');
		while (line){
			Buf += (line + "P");
			num_str++;
			line = sr->ReadLine();
		}
		sr->Close();										// Закрытие потока
	}
	else {
		MessageBox::Show("Данные не были получены!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	
	mtx1 = new int* [num_str];
	for (size_t c = 0; c < num_str; c++)
		mtx1[c] = new int[num_kol];
	
	mas_f = Buf->Split('P');
	
	try {													// заполняем значениями матрицу 
		for (size_t c = 0; c < num_str; c++){
			arr = mas_f[c]->Split(' ');
			for (size_t j = 0, i = 0; j < num_kol; i++)
				mtx1[c][j++] = Convert::ToInt32(arr[i]);
		}
		CleanListBoxs(listBox3, listBox4);
		OutputMtxToListBox(mtx1, num_str, num_kol, listBox3);
		OutputMtxToListBox(FUN(mtx1, num_str, num_kol), num_str, num_kol, listBox4);
	}
	catch (Exception^ ex) {									// Обработка ошибок если считанная матрица не корректна
		MessageBox::Show("Проверьте введенные данные");
		CleanListBoxs(listBox3, listBox4);
		return;
	}
}

//Событийная процедура сохранения всех данных с listBox3 и listBox4
System::Void TASKS::MyForm::button8_Click(System::Object^ sender, System::EventArgs^ e){

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
	if (FindMtx(listBox3, mas_f, 0) == 0) {
		buffer = "\nИсходные данные:\n";
		for each (auto var in listBox3->Items)
			buffer += var->ToString() + "\n";
		buffer += "Полученная матрица:\n";
		for each (auto var in listBox4->Items)
			buffer += var->ToString() + "\n";
		File::AppendAllText(file->FileName, buffer);
		
		File::AppendAllText(file->FileName, "\n");
	}
}

System::Void TASKS::MyForm::button9_Click(System::Object^ sender, System::EventArgs^ e){
	CleanListBoxs(listBox3, listBox4);
	textBox5->Clear();
	textBox6->Clear();
	textBox7->Clear();
	textBox8->Clear();
}
