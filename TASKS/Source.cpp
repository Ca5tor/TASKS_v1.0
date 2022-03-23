#include "Header.h"
/*
75. Сортировка вставками. Дан массив чисел а1, а2, ..., аn. Требуется
переставить его элементы в порядке возрастания. Делается это следующим
образом. Пусть а1, а2, ..., аi – упорядоченная последовательность,
т.е. a1 ≤ a2 ≤ ... ≤ аi
. Берется следующее число ai+1 и вставляется в
последовательность так, чтобы новая последовательность была также
возрастающей. Процесс производится до тех пор, пока все элементы от i+1 до
n не будут перебраны.
*/

//функция формирования массива из n случайных целых чисел диапазона [a,b]
void	FillMasRandomNum(int *mas, size_t n, int a, int b) {
	Random^ rnd;

	rnd = gcnew Random;// создание объекта типа Random
	for (size_t i = 0; i < n; i++)//Цикл заполнения массива
		mas[i] = rnd->Next(a, b);//генерация случ. знач. от a до b
}

void	OutputMasToListBox(int *mas, int n, ListBox^ Lb) {
	for (size_t i = 0; i < n; i++)
		Lb->Items->Add(mas[i].ToString());
}

void	Sorted_mas(int *mas1, int *mas2, size_t n) {
	int	temp;// временная переменная для хранения значения элемента сортируемого массива
	int	j; // индекс предыдущего элемента

	for (size_t c = 0; c < n; c++)
		mas2[c] = mas1[c];
	for (size_t i = 1; i < n; i++) {
		temp = mas2[i]; // инициализируем временную переменную текущим значением элемента массива
		j = i - 1; // запоминаем индекс предыдущего элемента массива
		while (j >= 0 && mas2[j] > temp) { // пока индекс не равен 0 и предыдущий элемент массива больше текущего
			mas2[j + 1] = mas2[j]; // перестановка элементов массива
			mas2[j] = temp;
			j--;
		}
	}
}

//Кнопка генерации элементов
System::Void TASKS::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e){
	size_t	size_mas;
	int		*mas1;
	int		*mas2;
	int		num_a;
	int		num_b;

	// Проверка корректности Вводимых исходных данных
	if (!GetIntN(textBox1, "Введите количество значений массива (от 1 до 100)", size_mas))return;
	if (!GetInt(textBox2, "Введите начальное значение (от -100 до 100)", num_a))return;
	if (!GetInt(textBox3, "Введите конечное значение (от -100 до 100)", num_b))return;
	if (!ErrorVallA(textBox2, "Число А не может быть больше В", num_a, num_b)){
		CleanListBoxs(listBox1, listBox2);
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		return;
	}
	else {
		mas1 = new int[size_mas];
		mas2 = new int[size_mas];
		CleanListBoxs(listBox1, listBox2);
		FillMasRandomNum(mas1, size_mas, num_a, num_b);
		OutputMasToListBox(mas1, size_mas, listBox1);
		Sorted_mas(mas1, mas2, size_mas);
		OutputMasToListBox(mas2, size_mas, listBox2);


		
		
	}
}

//Кнопка для ввода значений с textBox(ручной ввод)
System::Void TASKS::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e){
	String^ str;
	size_t	size_mas;
	int		*mas1;
	int		*mas2;
	array<String^>^ arr;
	
	if (textBox4->Text->Length == 0) {
		MessageBox::Show("Строка пустая!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox4->Focus();
		return;
	}
	else {
		str = Convert::ToString(textBox4->Text);
		size_mas = count_words(str, ' ');
		mas1 = new int[size_mas];
		mas2 = new int[size_mas];
		try{
			arr = str->Split(' ');
			for (size_t j = 0, i = 0; j < size_mas; i++)
				mas1[j++] = Convert::ToInt32(arr[i]);
		}
		catch (Exception^ ex){
			MessageBox::Show("Проверьте введенные данные");
			CleanListBoxs(listBox1, listBox2);
			textBox4->Clear();
			return;
		}
		CleanListBoxs(listBox1, listBox2);
		Sorted_mas(mas1, mas2, size_mas);
		OutputMasToListBox(mas1, size_mas, listBox1);
		OutputMasToListBox(mas2, size_mas, listBox2);
	}
}

//Кнопка сохранения входных и полученных данных
System::Void TASKS::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e){
	int				flag;
	int				flag_1;
	String^			buffer;
	SaveFileDialog^	file;
	
	file = gcnew SaveFileDialog;
	flag = 0;
	flag_1 = 0;
	if (file->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if (File::Exists(file->FileName)) {
			flag = 1;
			array<String^>^ mas_f = File::ReadAllLines(file->FileName);
			String^ temp = "";

			for each (auto var in listBox1->Items)
				temp += var->ToString() + " ";
			if (temp == "")
				flag_1 = 4;
			else
				for (size_t i = 0; i < mas_f->Length; i++) {
					if (String::Compare(temp, Convert::ToString(mas_f[i])) == 0) {
						flag_1 = 2;
						break;
					}
				}
		}
	}
	else {
		MessageBox::Show("Данные не сохранены!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
		
	if(flag_1 != 2 && flag_1 != 4){
	buffer = "\nИсходные данные:\n";
	for each (auto var in listBox1->Items)
		buffer += var->ToString() + " ";
	buffer += "\nСортированный массив:\n";
	for each (auto var in listBox2->Items)
		buffer += var->ToString() + " ";
	File::AppendAllText(file->FileName, buffer);
	if (flag == 1)
		File::AppendAllText(file->FileName, "\n");
	}
	else {
		if (flag_1 == 4)
			MessageBox::Show("Массив не был создан!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
			MessageBox::Show("Данные уже записаны!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
}

//Кнопка очистки полей listBox
System::Void TASKS::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e){
	CleanListBoxs(listBox1, listBox2);
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
}