#include "Header.h"

/*
176. Для последовательности A1 = 1
A(n+1) = An + 1/(1+An) составить
программу печати k-го члена в виде обыкновенной несократимой дроби.
Например, a2 = 3/2, a3 = 19/10.
*/

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

System::Void TASKS::MyForm::button11_Click(System::Object^ sender, System::EventArgs^ e){
	size_t k;
	int n = 1;
	int d = 1;
	int nominator;
	int denominator;
	int g;

	if (!GetIntN(textBox9, "Введите значение k (от 1 до 100)", k)) return;

	CleanListBoxs(listBox5, listBox6);
	listBox5->Items->Add("k Результат");
	if (k == 1) {
		listBox5->Items->Add(k.ToString() + " 1");
		listBox6->Items->Add("1");
	}
	else {
		listBox5->Items->Add("1 1");
		for (int i = 1; i < k; ++i) {
			nominator = (d + n) * n + d * d;
			denominator = d * (d + n);
			g = gcd(nominator, denominator);
			n = nominator / g;
			d = denominator / g;
			if (d < 0 && n > 0) {n = -n; d = -d;}
			if (d < 0 && n < 0) {  d = -d; }
			listBox5->Items->Add((i + 1).ToString() + " " + n.ToString() + "/" + d.ToString());
		}
		listBox6->Items->Add(n.ToString() + "/" + d.ToString());
	}
}

System::Void TASKS::MyForm::button13_Click(System::Object^ sender, System::EventArgs^ e)
{
	SaveFileDialog^	file;
	array<String^>^	mas_f;
	array<String^>^	arr;
	String^			Buf = "";
	String^			buffer;
	String^			str;
	size_t			k;
	int				flag_1;

	file = gcnew SaveFileDialog;
	if (file->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		mas_f = File::ReadAllLines(file->FileName);
	else {
		MessageBox::Show("Данные не сохранены!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	for each (auto var in listBox5->Items)
		Buf += (var->ToString() + "P");
	arr = Buf->Split('P');
	if (arr[0] == "") {
		MessageBox::Show("Результаты не получены!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	k = arr->GetUpperBound(k);
	str = "Введенный k для поиска значения последовательности: " + (k - 1);
	
	for (size_t i = 0; i < mas_f->Length; i++) {
		if (String::Compare(str, Convert::ToString(mas_f[i])) == 0) {
			flag_1 = 2;
			break;
		}
	}
	
	if (flag_1 != 2) {
		buffer = "\nВведенный k для поиска значения последовательности: " + textBox9->Text;
		buffer += "\nПолученное значение последовательности A(n+1) = An + 1/(1+An): ";
		for each (auto var in listBox6->Items)
			buffer += var->ToString() + "\n";
		File::AppendAllText(file->FileName, buffer);
	}
	else {
		MessageBox::Show("Данные уже записаны!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
}

System::Void TASKS::MyForm::button14_Click(System::Object^ sender, System::EventArgs^ e){
	CleanListBoxs(listBox5, listBox6);
	textBox9->Clear();
}