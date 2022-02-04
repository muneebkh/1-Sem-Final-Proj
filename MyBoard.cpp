
#include "MyForm.h"
#include <fstream>

using namespace std; 
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

inline void Projfin::MyForm::score_board() {

	// --------------------------------------------- //

	//win//============ r1 

	if (TTT1->Text != " " && TTT1->Text == TTT2->Text && TTT1->Text == TTT3->Text) {
		TTT1->BackColor = System::Drawing::Color::White;
		/*TTT1->BackColor=System::Drawing::ContentAlignment::TopCenter;*/
		TTT2->BackColor = System::Drawing::Color::White;
		TTT3->BackColor = System::Drawing::Color::White;

		if (TTT1->Text == "X") {
			win = true;
			MessageBox::Show(" Player X has Won ", " proj fin ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			add = int::Parse(label3->Text);
			label3->Text = Convert::ToString(add + 1);
		}
		else if (TTT1->Text == "O") {
			win = true;
			MessageBox::Show(" Player O has Won ", " proj fin ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			add = int::Parse(label4->Text);
			label4->Text = Convert::ToString(add + 1);
		}
		Enable_f();
	}
	//col1
	if (TTT1->Text != " " && TTT1->Text == TTT4->Text && TTT1->Text == TTT7->Text) {
		TTT1->BackColor = System::Drawing::Color::White;
		/*TTT1->BackColor=System::Drawing::ContentAlignment::TopCenter;*/
		TTT4->BackColor = System::Drawing::Color::White;
		TTT7->BackColor = System::Drawing::Color::White;

		if (TTT1->Text == "X") {
			win = true;
			MessageBox::Show(" Player X has Won ", " proj fin ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			add = int::Parse(label3->Text);
			label3->Text = Convert::ToString(add + 1);
		}
		else if (TTT1->Text == "O") {
			win = true;
			MessageBox::Show(" Player O has Won ", " proj fin ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			add = int::Parse(label4->Text);
			label4->Text = Convert::ToString(add + 1);
		}
		Enable_f();
	}
	//row2
	if (TTT4->Text != " " && TTT4->Text == TTT5->Text && TTT4->Text == TTT6->Text) {
		TTT4->BackColor = System::Drawing::Color::White;
		/*TTT1->BackColor=System::Drawing::ContentAlignment::TopCenter;*/
		TTT5->BackColor = System::Drawing::Color::White;
		TTT6->BackColor = System::Drawing::Color::White;

		if (TTT4->Text == "X") {
			win = true;
			MessageBox::Show(" Player X has Won ", " proj fin ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			add = int::Parse(label3->Text);
			label3->Text = Convert::ToString(add + 1);
		}
		else if (TTT4->Text == "O") {
			win = true;
			MessageBox::Show(" Player O has Won ", " proj fin ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			add = int::Parse(label4->Text);
			label4->Text = Convert::ToString(add + 1);
		}
		Enable_f();
	}
	//col2
	if (TTT2->Text != " " && TTT2->Text == TTT5->Text && TTT2->Text == TTT8->Text) {
		TTT2->BackColor = System::Drawing::Color::White;
		/*TTT1->BackColor=System::Drawing::ContentAlignment::TopCenter;*/
		TTT5->BackColor = System::Drawing::Color::White;
		TTT8->BackColor = System::Drawing::Color::White;

		if (TTT2->Text == "X") {
			win = true;
			MessageBox::Show(" Player X has Won ", " proj fin ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			add = int::Parse(label3->Text);
			label3->Text = Convert::ToString(add + 1);
		}
		else if (TTT2->Text == "O") {
			win = true;
			MessageBox::Show(" Player O has Won ", " proj fin ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			add = int::Parse(label4->Text);
			label4->Text = Convert::ToString(add + 1);
		}
		Enable_f();
	}
	//row3
	if (TTT7->Text != " " && TTT7->Text == TTT8->Text && TTT7->Text == TTT9->Text) {
		TTT7->BackColor = System::Drawing::Color::White;
		/*TTT1->BackColor=System::Drawing::ContentAlignment::TopCenter;*/
		TTT8->BackColor = System::Drawing::Color::White;
		TTT9->BackColor = System::Drawing::Color::White;

		if (TTT7->Text == "X") {
			win = true;
			MessageBox::Show(" Player X has Won ", " proj fin ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			add = int::Parse(label3->Text);
			label3->Text = Convert::ToString(add + 1);
		}
		else if (TTT7->Text == "O") {
			win = true;
			MessageBox::Show(" Player O has Won ", " proj fin ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			add = int::Parse(label4->Text);
			label4->Text = Convert::ToString(add + 1);
		}
		Enable_f();
	}
	//col3
	if (TTT3->Text != " " && TTT3->Text == TTT6->Text && TTT3->Text == TTT9->Text) {
		TTT3->BackColor = System::Drawing::Color::White;
		/*TTT1->BackColor=System::Drawing::ContentAlignment::TopCenter;*/
		TTT6->BackColor = System::Drawing::Color::White;
		TTT9->BackColor = System::Drawing::Color::White;

		if (TTT3->Text == "X") {
			win = true;
			MessageBox::Show(" Player X has Won ", " proj fin ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			add = int::Parse(label3->Text);
			label3->Text = Convert::ToString(add + 1);
		}
		else if (TTT3->Text == "O") {
			win = true;
			MessageBox::Show(" Player O has Won ", " proj fin ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			add = int::Parse(label4->Text);
			label4->Text = Convert::ToString(add + 1);
		}
		Enable_f();
	}
	//diag1
	if (TTT1->Text != " " && TTT1->Text == TTT5->Text && TTT1->Text == TTT9->Text) {
		TTT1->BackColor = System::Drawing::Color::White;
		/*TTT1->BackColor=System::Drawing::ContentAlignment::TopCenter;*/
		TTT5->BackColor = System::Drawing::Color::White;
		TTT9->BackColor = System::Drawing::Color::White;

		if (TTT1->Text == "X") {
			win = true;
			MessageBox::Show(" Player X has Won ", " proj fin ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			add = int::Parse(label3->Text);
			label3->Text = Convert::ToString(add + 1);
		}
		else if (TTT1->Text == "O") {
			win = true;
			MessageBox::Show(" Player O has Won ", " proj fin ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			add = int::Parse(label4->Text);
			label4->Text = Convert::ToString(add + 1);
		}
		Enable_f();
	}
	//diag2
	if (TTT3->Text != " " && TTT3->Text == TTT5->Text && TTT3->Text == TTT7->Text) {
		TTT3->BackColor = System::Drawing::Color::White;
		/*TTT1->BackColor=System::Drawing::ContentAlignment::TopCenter;*/
		TTT5->BackColor = System::Drawing::Color::White;
		TTT7->BackColor = System::Drawing::Color::White;

		if (TTT3->Text == "X") {
			win = true;
			MessageBox::Show(" Player X has Won ", " proj fin ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			add = int::Parse(label3->Text);
			label3->Text = Convert::ToString(add + 1);
		}
		else if (TTT3->Text == "O") {
			win = true;
			MessageBox::Show(" Player O has Won ", " proj fin ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			add = int::Parse(label4->Text);
			label4->Text = Convert::ToString(add + 1);
		}
		Enable_f();

	}
	//draww//===
	if (TTT1->Text != " " && TTT2->Text != " " && TTT3->Text != " " && TTT4->Text != " " && TTT5->Text != " " && TTT6->Text != " "
		&& TTT7->Text != " " && TTT8->Text != " " && TTT9->Text != " ") {
		if (win == false) {
			MessageBox::Show(" Game Drawn ", " proj fin ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			add = int::Parse(label8->Text);
			label8->Text = Convert::ToString(add + 1);
		}
		Enable_f();
	}
	//total
	total = int::Parse(label8->Text) + int::Parse(label4->Text) + int::Parse(label3->Text);
	label9->Text = Convert::ToString(total);

}

void Projfin::MyForm::mySave()
{
	char arr[3][3];


	arr[0][0] = TTT1->Text[0];
	arr[0][1] = TTT2->Text[0];
	arr[0][2] = TTT3->Text[0];
	arr[1][0] = TTT4->Text[0];
	arr[1][1] = TTT5->Text[0];
	arr[1][2] = TTT6->Text[0];
	arr[2][0] = TTT7->Text[0];
	arr[2][1] = TTT8->Text[0];
	arr[2][2] = TTT9->Text[0];

	fstream f_curr;
	//save
	f_curr.open("myfile.txt" , ios::out);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] != ' ') {
				f_curr << i << " " << j << " "  << arr[i][j] <<endl;
			}
			
		}
	}

}

void Projfin::MyForm::myResume()
{
	 char arr[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			arr[i][j] = ' '; 
		}
	}

	fstream f_read("myfile.txt", ios::in);

	int ind_i; 
	int ind_j; 
	char val; 

	while (f_read >> ind_i >> ind_j >> val)
	{
			arr[ind_i][ind_j] = val; 
	}	
	

	if (arr[0][0] == 79)
	{
		TTT1->Text = "O";
	
	}
	if (arr[0][0] == 88)
	{
		TTT1->Text = "X";
	
	}
	if (arr[0][1] == 79)
	{
		TTT2->Text = "O";
	
	}
	if (arr[0][1] == 88)
	{
		TTT2->Text = "X";
	
	}
	if (arr[0][2] == 79)
	{
		TTT3->Text = "O";
	
	}
	if (arr[0][2] == 88)
	{
		TTT3->Text = "X";
	
	}
	if (arr[1][0] == 79)
	{
		TTT4->Text = "O";
	
	}
	if (arr[1][0] == 88)
	{
		TTT4->Text = "X";
	
	}
	if (arr[1][1] == 79)
	{
		TTT5->Text = "O";
	
	}
	if (arr[1][1] == 88)
	{
		TTT5->Text = "X";
	
	}
	if (arr[1][2] == 79)
	{
		TTT6->Text = "O";
	
	}
	if (arr[1][2] == 88)
	{
		TTT6->Text = "X";
	
	}
	if (arr[2][0] == 79)
	{
		TTT7->Text = "O";
	
	}
	if (arr[2][0] == 88)
	{
		TTT7->Text = "X";
	
	}
	if (arr[2][1] == 79)
	{
		TTT8->Text = "O";
	
	}
	if (arr[2][1] == 88)
	{
		TTT8->Text = "X";
	
	}
	if (arr[2][2] == 79)
	{
		TTT9->Text = "O";
	
	}
	if (arr[2][2] == 88)
	{
		TTT9->Text = "X";
	
	}


}
