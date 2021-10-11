#pragma once
#include <string> 
#include <random>
#include <iostream>
#include <vector>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::GroupBox^ groupBox1;






	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(14, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 136);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(192, 25);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 136);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(369, 25);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 136);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(14, 190);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(149, 136);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Location = System::Drawing::Point(192, 190);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(149, 136);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(114)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Location = System::Drawing::Point(369, 190);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(149, 136);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(14, 353);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(149, 136);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(114)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(192, 353);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(149, 136);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)));
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe Print", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Location = System::Drawing::Point(369, 353);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(149, 136);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->Location = System::Drawing::Point(31, 533);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(149, 41);
			this->button10->TabIndex = 9;
			this->button10->Text = L"start";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Location = System::Drawing::Point(22, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(537, 506);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"»гра в ѕ€тнадцать";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(571, 586);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button10);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		
#pragma endregion
	
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dist(1, 9);		//random
		int raz = 3, N;
		int** pole = new int* [raz];
		for (int i = 0; i < raz; i++)
		{
			pole[i] = new int[raz];
		}
		do
		{
			N = 0;
			for (int i = 0; i < raz; i++)
			{
				for (int j = 0; j < raz; j++)
				{
					pole[i][j] = 0;
				}
			}
			for (int i = 0; i < raz; i++)		//заполнение массива
			{
				for (int j = 0; j < raz;)
				{
					int temp = dist(gen);
					bool flag = true;
					for (int n = 0; n < raz && flag; n++)
					{
						for (int m = 0; m < raz && flag; m++)
						{
							if (temp == pole[n][m])
							{
								flag = false;
							}
						}
					}
					if (flag)
					{
						pole[i][j] = temp;
						j++;
					}
				}
			}
			int ni = 0; //первод в одномерный
			int* v = new int[raz * raz];
			for (int i = 0; i < raz; i++)
			{
				for (int j = 0; j < raz; j++)
				{
					if (pole[i][j] == 9)
						N += (i + 1)*8;
					v[ni] = pole[i][j];
					ni++;
				}
			}
				//вычисление суммы дл€ проверки на решаемость
			for (int i = 0; i < raz * raz; i++)
			{
				if (v[i] != 9)
				{
					ni = 0;
					for (int j = i; j < raz * raz; j++)
					{
						if (v[i] > v[j] && v[j] != 9)
							ni++;
					}
					N += ni;
				}
			}
			delete[] v;
		} while (N % 2 != 0);//проверка на решаемость

		// обработка кнопок
		if (1)
		{

			String^ str2;
			std::string str1;
			int i = 0, j = 0;
			if (pole[i][j] != 9)
			{
				button1->Visible = true;
				str1 = std::to_string(pole[i][j]);
				str2 = gcnew String(str1.c_str());
				button1->Text = str2;	
			}
			else
			{
				button1->Text = " ";
				button1->Visible = false;
			}
			
			j++;
			if (pole[i][j] != 9)
			{
				button2->Visible = true;
				str1 = std::to_string(pole[i][j]);
				str2 = gcnew String(str1.c_str());
				button2->Text = str2;
			}
			else
			{
				button2->Text = " ";
				button2->Visible = false;
			}
			j++;
			if (pole[i][j] != 9)
			{
				button3->Visible = true;
				str1 = std::to_string(pole[i][j]);
				str2 = gcnew String(str1.c_str());
				button3->Text = str2;
			}
			else
			{
				button3->Text = " ";
				button3->Visible = false;
			}
			j = 0; i++;
			if (pole[i][j] != 9)
			{
				button4->Visible = true;
				str1 = std::to_string(pole[i][j]);
				str2 = gcnew String(str1.c_str());
				button4->Text = str2;
			}
			else
			{
				button4->Text = " ";
				button4->Visible = false;
			}
			j++;
			if (pole[i][j] != 9)
			{
				button5->Visible = true;
				str1 = std::to_string(pole[i][j]);
				str2 = gcnew String(str1.c_str());
				button5->Text = str2;
			}
			else
			{
				button5->Text = " ";
				button5->Visible = false;
			}
			j++;
			if (pole[i][j] != 9)
			{
				button6->Visible = true;
				str1 = std::to_string(pole[i][j]);
				str2 = gcnew String(str1.c_str());
				button6->Text = str2;
			}
			else
			{
				button6->Text = " ";
				button6->Visible = false;
			}
			j = 0; i++;
			if (pole[i][j] != 9)
			{
				button7->Visible = true;
				str1 = std::to_string(pole[i][j]);
				str2 = gcnew String(str1.c_str());
				button7->Text = str2;
			}
			else
			{
				button7->Text = " ";
				button7->Visible = false;
			}
			j++;
			if (pole[i][j] != 9)
			{
				button8->Visible = true;
				str1 = std::to_string(pole[i][j]);
				str2 = gcnew String(str1.c_str());
				button8->Text = str2;
			}
			else
			{
				button8->Text = " ";
				button8->Visible = false;
			}
			j++;
			if (pole[i][j] != 9)
			{
				button9->Visible = true;
				str1 = std::to_string(pole[i][j]);
				str2 = gcnew String(str1.c_str());
				button9->Text = str2;
			}
			else
			{
				button9->Text = " ";
				button9->Visible = false;
			}
		}
		for (int i = 0; i < raz; i++)
			{
				delete[] pole[i];
			}
		delete[] pole;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ digit;
		if (button2->Text == " ")
		{
			digit = button1->Text;
			button1->Text = button2->Text;
			button2->Text = digit;
			button1->Visible = false;
			button2->Visible = true;
			
		}
		else if (button4->Text == " ")
		{
			digit = button1->Text;
			button1->Text = button4->Text;
			button4->Text = digit;
			button1->Visible = false;
			button4->Visible = true;
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ digit;
		if (button1->Text == " ")
		{
			digit = button2->Text;
			button2->Text = button1->Text;
			button1->Text = digit;
			button2->Visible = false;
			button1->Visible = true;
		}
		else if (button3->Text == " ")
		{
			digit = button2->Text;
			button2->Text = button3->Text;
			button3->Text = digit;
			button2->Visible = false;
			button3->Visible = true;
		}
		else if (button5->Text == " ")
		{
			digit = button2->Text;
			button2->Text = button5->Text;
			button5->Text = digit;
			button2->Visible = false;
			button5->Visible = true;
		}
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ digit;
		if (button2->Text == " ")
		{
			digit = button3->Text;
			button3->Text = button2->Text;
			button2->Text = digit;
			button3->Visible = false;
			button2->Visible = true;
		}
		else if (button6->Text == " ")
		{
			digit = button3->Text;
			button3->Text = button6->Text;
			button6->Text = digit;
			button3->Visible = false;
			button6->Visible = true;
		}

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ digit;
		if (button1->Text == " ")
		{
		digit = button4->Text;
		button4->Text = button1->Text;
		button1->Text = digit;
		button4->Visible = false;
		button1->Visible = true;
		}
		else if (button5->Text == " ")
		{
			digit = button4->Text;
			button4->Text = button5->Text;
			button5->Text = digit;
			button4->Visible = false;
			button5->Visible = true;
		}
		else if (button7->Text == " ")
		{
			digit = button4->Text;
			button4->Text = button7->Text;
			button7->Text = digit;
			button4->Visible = false;
			button7->Visible = true;
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ digit;
		if (button2->Text == " ")
		{
			digit = button5->Text;
			button5->Text = button2->Text;
			button2->Text = digit;
			button5->Visible = false;
			button2->Visible = true;
		}
		else if (button4->Text == " ")
		{
			digit = button5->Text;
			button5->Text = button4->Text;
			button4->Text = digit;
			button5->Visible = false;
			button4->Visible = true;
		}
		else if (button6->Text == " ")
		{
			digit = button5->Text;
			button5->Text = button6->Text;
			button6->Text = digit;
			button5->Visible = false;
			button6->Visible = true;
		}
		else if (button8->Text == " ")
		{
			digit = button5->Text;
			button5->Text = button8->Text;
			button8->Text = digit;
			button5->Visible = false;
			button8->Visible = true;
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ digit;
		if (button3->Text == " ")
		{
			digit = button6->Text;
			button6->Text = button3->Text;
			button3->Text = digit;
			button6->Visible = false;
			button3->Visible = true;
		}
		else if (button5->Text == " ")
		{
			digit = button6->Text;
			button6->Text = button5->Text;
			button5->Text = digit;
			button6->Visible = false;
			button5->Visible = true;
		}
		else if (button9->Text == " ")
		{
			digit = button6->Text;
			button6->Text = button9->Text;
			button9->Text = digit;
			button6->Visible = false;
			button9->Visible = true;
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ digit;
		if (button4->Text == " ")
		{
			digit = button7->Text;
			button7->Text = button4->Text;
			button4->Text = digit;
			button7->Visible = false;
			button4->Visible = true;
		}
		else if (button8->Text == " ")
		{
			digit = button7->Text;
			button7->Text = button8->Text;
			button8->Text = digit;
			button7->Visible = false;
			button8->Visible = true;
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ digit;
		if (button7->Text == " ")
		{
			digit = button8->Text;
			button8->Text = button7->Text;
			button7->Text = digit;
			button8->Visible = false;
			button7->Visible = true;
		}
		else if (button5->Text == " ")
		{
			digit = button8->Text;
			button8->Text = button5->Text;
			button5->Text = digit;
			button8->Visible = false;
			button5->Visible = true;
		}
		else if (button9->Text == " ")
		{
			digit = button8->Text;
			button8->Text = button9->Text;
			button9->Text = digit;
			button8->Visible = false;
			button9->Visible = true;
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ digit;
		if (button6->Text == " ")
		{
			digit = button9->Text;
			button9->Text = button6->Text;
			button6->Text = digit;
			button9->Visible = false;
			button6->Visible = true;
		}
		else if (button8->Text == " ")
		{
			digit = button9->Text;
			button9->Text = button8->Text;
			button8->Text = digit;
			button9->Visible = false;
			button8->Visible = true;
		}
	}
	};
}
