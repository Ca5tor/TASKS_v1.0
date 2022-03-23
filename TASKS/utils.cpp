#include"Header.h"

// функция проверки что массив не пуст или не меньше 1
bool GetIntN(TextBox^ Tx, String^ s, size_t& x) {
	// проверка на пустое поле
	if (Tx->Text->Length == 0) {
		MessageBox::Show(s, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Tx->Focus();
		return false;
	}
	try { x = Convert::ToInt32(Tx->Text); }
	catch (Exception^ ex) {
		MessageBox::Show("Проверьте введенные данные");
		Tx->Clear();
		return false;
	}
	if (x < 1 || x > 1000) {
		MessageBox::Show(s, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Tx->Focus();
		return false;
	}
	return true;
}

// Функция проверяющая чтобы начальное значение не было пустым или не отриц.
bool GetInt(TextBox^ Tx, String^ s, int& x) {
	// проверка на пустое поле
	if (Tx->Text->Length == 0) {
		MessageBox::Show(s, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Tx->Focus();
		return false;
	}
	try { x = Convert::ToInt32(Tx->Text); }
	catch (Exception^ ex) {
		MessageBox::Show("Проверьте введенные данные");
		Tx->Clear();
		return false;
	}
	if (x < -1000 || x > 1000) {
		MessageBox::Show(s, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Tx->Focus();
		return false;
	}
	return true;
}

//Если в диапазоне а больше б выведет ошибку
bool ErrorVallA(TextBox^ Tx, String^ s, int& x, int& y) {
	if (x > y) {
		MessageBox::Show(s, "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Tx->Focus();
		return false;
	}
	return true;
}

void	CleanListBoxs(ListBox^ Lb1, ListBox^ Lb2) {
	Lb1->Items->Clear();
	Lb2->Items->Clear();
}


int	count_words(String^ s, Char c) {
	size_t	word_count;
	size_t	skipper;
	int		i;

	word_count = 0;
	skipper = 1;
	i = 0;
	while (i < s->Length) {
		if (s[i] != c && skipper) {
			skipper = 0;
			word_count++;
		}
		else if (s[i++] == c)
			skipper = 1;
	}
	return (word_count);
}

int FindMtx(ListBox^ Lb, array<String^>^ mas_f, int n) {
	size_t			flag = 0;
	size_t			num_str_mtx;
	size_t			c;
	size_t			i;
	array<String^>^ arr;
	String^			Buf = "";

	if (mas_f->Length == 0)
		return (0);

	for each (auto var in Lb->Items)
		Buf += (var->ToString() + "P");
	arr = Buf->Split('P');

	if (arr[0] == "" && n == 0) {
		MessageBox::Show("Матрица не была создана!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return (1);
	}
	if (arr[0] == "" && n == 1) {
		MessageBox::Show("Текст не был введен!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return (1);
	}

	num_str_mtx = arr->GetUpperBound(num_str_mtx);
	c = mas_f->GetUpperBound(c);
	i = 0;

	for (size_t j = 0; i < c; i++) {
		if (String::Compare(arr[j], Convert::ToString(mas_f[i])) == 0) {
			flag++;
			j++;
		}
		else if (flag == num_str_mtx) break;
		else {
			flag = 0;
			j = 0;
		}
	}
	if (flag == num_str_mtx && (Convert::ToString(mas_f[i]) == "Полученная матрица:" || Convert::ToString(mas_f[i]) == "Полученный текст:")) {
		MessageBox::Show("Данные уже записаны!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return (1);
	}
	return (0);
}