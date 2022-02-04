#pragma once

namespace Projfin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	/// Summary for MyForm
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ TTT7;
	private: System::Windows::Forms::Button^ TTT8;
	private: System::Windows::Forms::Button^ TTT9;

	protected:

	protected:


	private: System::Windows::Forms::Button^ TTT1;
	private: System::Windows::Forms::Button^ TTT2;
	private: System::Windows::Forms::Button^ TTT3;
	private: System::Windows::Forms::Button^ TTT4;
	private: System::Windows::Forms::Button^ TTT5;
	private: System::Windows::Forms::Button^ TTT6;







	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ logo;


	private: System::Windows::Forms::Button^ btnNew;
	private: System::Windows::Forms::Button^ btnres;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnSave;

	private: System::Windows::Forms::Button^ button2;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->TTT7 = (gcnew System::Windows::Forms::Button());
			this->TTT8 = (gcnew System::Windows::Forms::Button());
			this->TTT9 = (gcnew System::Windows::Forms::Button());
			this->TTT1 = (gcnew System::Windows::Forms::Button());
			this->TTT2 = (gcnew System::Windows::Forms::Button());
			this->TTT3 = (gcnew System::Windows::Forms::Button());
			this->TTT4 = (gcnew System::Windows::Forms::Button());
			this->TTT5 = (gcnew System::Windows::Forms::Button());
			this->TTT6 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->logo = (gcnew System::Windows::Forms::Panel());
			this->btnNew = (gcnew System::Windows::Forms::Button());
			this->btnres = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// TTT7
			// 
			this->TTT7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->TTT7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TTT7.BackgroundImage")));
			this->TTT7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->TTT7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TTT7->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->TTT7->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->TTT7->Location = System::Drawing::Point(8, 219);
			this->TTT7->Name = L"TTT7";
			this->TTT7->Size = System::Drawing::Size(108, 113);
			this->TTT7->TabIndex = 0;
			this->TTT7->Text = L" ";
			this->TTT7->UseVisualStyleBackColor = false;
			this->TTT7->Click += gcnew System::EventHandler(this, &MyForm::TTT7_Click);
			// 
			// TTT8
			// 
			this->TTT8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->TTT8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TTT8.BackgroundImage")));
			this->TTT8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->TTT8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TTT8->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->TTT8->Location = System::Drawing::Point(111, 219);
			this->TTT8->Name = L"TTT8";
			this->TTT8->Size = System::Drawing::Size(115, 113);
			this->TTT8->TabIndex = 1;
			this->TTT8->Text = L" ";
			this->TTT8->UseVisualStyleBackColor = false;
			this->TTT8->Click += gcnew System::EventHandler(this, &MyForm::TTT8_Click);
			// 
			// TTT9
			// 
			this->TTT9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->TTT9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TTT9.BackgroundImage")));
			this->TTT9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->TTT9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TTT9->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->TTT9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->TTT9->Location = System::Drawing::Point(222, 219);
			this->TTT9->Name = L"TTT9";
			this->TTT9->Size = System::Drawing::Size(111, 113);
			this->TTT9->TabIndex = 2;
			this->TTT9->Text = L" ";
			this->TTT9->UseVisualStyleBackColor = false;
			this->TTT9->Click += gcnew System::EventHandler(this, &MyForm::TTT9_Click);
			// 
			// TTT1
			// 
			this->TTT1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->TTT1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TTT1.BackgroundImage")));
			this->TTT1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->TTT1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TTT1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->TTT1->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->TTT1->Location = System::Drawing::Point(8, 7);
			this->TTT1->Name = L"TTT1";
			this->TTT1->Size = System::Drawing::Size(108, 113);
			this->TTT1->TabIndex = 0;
			this->TTT1->Text = L" ";
			this->TTT1->UseVisualStyleBackColor = false;
			this->TTT1->Click += gcnew System::EventHandler(this, &MyForm::TTT1_Click);
			// 
			// TTT2
			// 
			this->TTT2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->TTT2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TTT2.BackgroundImage")));
			this->TTT2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->TTT2->Cursor = System::Windows::Forms::Cursors::Default;
			this->TTT2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TTT2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->TTT2->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->TTT2->Location = System::Drawing::Point(111, 7);
			this->TTT2->Name = L"TTT2";
			this->TTT2->Size = System::Drawing::Size(115, 113);
			this->TTT2->TabIndex = 1;
			this->TTT2->Text = L" ";
			this->TTT2->UseVisualStyleBackColor = false;
			this->TTT2->Click += gcnew System::EventHandler(this, &MyForm::TTT2_Click);
			// 
			// TTT3
			// 
			this->TTT3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->TTT3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TTT3.BackgroundImage")));
			this->TTT3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->TTT3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TTT3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->TTT3->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->TTT3->Location = System::Drawing::Point(222, 7);
			this->TTT3->Name = L"TTT3";
			this->TTT3->Size = System::Drawing::Size(111, 113);
			this->TTT3->TabIndex = 2;
			this->TTT3->Text = L" ";
			this->TTT3->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->TTT3->UseVisualStyleBackColor = false;
			this->TTT3->Click += gcnew System::EventHandler(this, &MyForm::TTT3_Click);
			// 
			// TTT4
			// 
			this->TTT4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->TTT4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TTT4.BackgroundImage")));
			this->TTT4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->TTT4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TTT4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->TTT4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->TTT4->Location = System::Drawing::Point(8, 117);
			this->TTT4->Name = L"TTT4";
			this->TTT4->Size = System::Drawing::Size(108, 113);
			this->TTT4->TabIndex = 0;
			this->TTT4->Text = L" ";
			this->TTT4->UseVisualStyleBackColor = false;
			this->TTT4->Click += gcnew System::EventHandler(this, &MyForm::TTT4_Click);
			// 
			// TTT5
			// 
			this->TTT5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->TTT5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TTT5.BackgroundImage")));
			this->TTT5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->TTT5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TTT5->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->TTT5->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->TTT5->Location = System::Drawing::Point(111, 117);
			this->TTT5->Name = L"TTT5";
			this->TTT5->Size = System::Drawing::Size(115, 113);
			this->TTT5->TabIndex = 1;
			this->TTT5->Text = L" ";
			this->TTT5->UseVisualStyleBackColor = false;
			this->TTT5->Click += gcnew System::EventHandler(this, &MyForm::TTT5_Click);
			// 
			// TTT6
			// 
			this->TTT6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->TTT6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TTT6.BackgroundImage")));
			this->TTT6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->TTT6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TTT6->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->TTT6->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->TTT6->Location = System::Drawing::Point(222, 117);
			this->TTT6->Name = L"TTT6";
			this->TTT6->Size = System::Drawing::Size(111, 113);
			this->TTT6->TabIndex = 2;
			this->TTT6->Text = L" ";
			this->TTT6->UseVisualStyleBackColor = false;
			this->TTT6->Click += gcnew System::EventHandler(this, &MyForm::TTT6_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->TTT6);
			this->panel1->Controls->Add(this->TTT3);
			this->panel1->Controls->Add(this->TTT9);
			this->panel1->Controls->Add(this->TTT5);
			this->panel1->Controls->Add(this->TTT2);
			this->panel1->Controls->Add(this->TTT4);
			this->panel1->Controls->Add(this->TTT8);
			this->panel1->Controls->Add(this->TTT1);
			this->panel1->Controls->Add(this->TTT7);
			this->panel1->ForeColor = System::Drawing::Color::Maroon;
			this->panel1->Location = System::Drawing::Point(12, 124);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(343, 341);
			this->panel1->TabIndex = 0;
			// 
			// logo
			// 
			this->logo->BackColor = System::Drawing::Color::Transparent;
			this->logo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo.BackgroundImage")));
			this->logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->logo->Location = System::Drawing::Point(12, 35);
			this->logo->Name = L"logo";
			this->logo->Size = System::Drawing::Size(343, 83);
			this->logo->TabIndex = 1;
			this->logo->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::logo_Paint);
			// 
			// btnNew
			// 
			this->btnNew->BackColor = System::Drawing::Color::White;
			this->btnNew->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNew.BackgroundImage")));
			this->btnNew->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnNew->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnNew->ForeColor = System::Drawing::Color::White;
			this->btnNew->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->btnNew->Location = System::Drawing::Point(678, 294);
			this->btnNew->Name = L"btnNew";
			this->btnNew->Size = System::Drawing::Size(128, 98);
			this->btnNew->TabIndex = 2;
			this->btnNew->Text = L"New Game";
			this->btnNew->UseVisualStyleBackColor = false;
			this->btnNew->Click += gcnew System::EventHandler(this, &MyForm::btnNew_Click);
			// 
			// btnres
			// 
			this->btnres->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnres.BackgroundImage")));
			this->btnres->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnres->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnres->ForeColor = System::Drawing::Color::White;
			this->btnres->Location = System::Drawing::Point(416, 294);
			this->btnres->Name = L"btnres";
			this->btnres->Size = System::Drawing::Size(121, 98);
			this->btnres->TabIndex = 2;
			this->btnres->Text = L"Restart Game";
			this->btnres->UseVisualStyleBackColor = true;
			this->btnres->Click += gcnew System::EventHandler(this, &MyForm::btnres_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DimGray;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(402, 131);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(455, 139);
			this->panel2->TabIndex = 3;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::White;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(390, 96);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 31);
			this->label9->TabIndex = 4;
			this->label9->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(390, 7);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(29, 31);
			this->label8->TabIndex = 4;
			this->label8->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(279, 96);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 31);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Total ";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(276, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 33);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Draws";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(173, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 33);
			this->label4->TabIndex = 1;
			this->label4->Text = L"0";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(173, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 33);
			this->label3->TabIndex = 1;
			this->label3->Text = L"0";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(14, 96);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 33);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Player O";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(17, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 33);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Player X";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label7);
			this->panel3->Location = System::Drawing::Point(442, 35);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(374, 83);
			this->panel3->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Ravie", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(48, 17);
			this->label7->Name = L"label7";
			this->label7->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label7->Size = System::Drawing::Size(278, 43);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Score Board\r\n";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// btnSave
			// 
			this->btnSave->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSave.BackgroundImage")));
			this->btnSave->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnSave->ForeColor = System::Drawing::Color::White;
			this->btnSave->Location = System::Drawing::Point(416, 411);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(121, 98);
			this->btnSave->TabIndex = 5;
			this->btnSave->Text = L"Save Game";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &MyForm::btnSave_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->button2->Location = System::Drawing::Point(678, 411);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 109);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Resume Last Game";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(886, 559);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->btnres);
			this->Controls->Add(this->btnNew);
			this->Controls->Add(this->logo);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::Color::White;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
		Boolean	chck;
		int add, total;
		bool win = false;
#pragma endregion
	
		void Enable_f() {
			TTT1->Enabled = false;
			TTT2->Enabled = false;
			TTT3->Enabled = false;
			TTT4->Enabled = false;
			TTT5->Enabled = false;
			TTT6->Enabled = false;
			TTT7->Enabled = false;
			TTT8->Enabled = false;
			TTT9->Enabled = false;

		}
		void score_board();
		void mySave(); 
		void myResume(); 

		
		//===========================//

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
	   //turns
private: System::Void TTT9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chck == false) {
		TTT9->Text = "X";
		chck = true;
	}
	else {
		TTT9->Text = "O";
		chck = false;
	}
	score_board();
	TTT9->Enabled = false;

}
private: System::Void TTT1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chck == false) {
		TTT1->Text = "X";
		chck = true;
	}
	else{
		TTT1->Text = "O";
		chck = false;
	}
	score_board();
	TTT1->Enabled = false;

}
private: System::Void TTT5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chck == false) {
		TTT5->Text = "X";
		chck = true;
	}
	else {
		TTT5->Text = "O";
		chck = false;
	}
	score_board();
	TTT5->Enabled = false;

}

private: System::Void TTT2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chck == false) {
		TTT2->Text = "X";
		chck = true;
	}
	else {
		TTT2->Text = "O";
		chck = false;
	}
	score_board();
	TTT2->Enabled = false;

}

 private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {

 }
private: System::Void TTT3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chck == false) {
		TTT3->Text = "X";
		chck = true;
	}
	else {
		TTT3->Text = "O";
		chck = false;
	}
	score_board();
	TTT3->Enabled = false;
}
private: System::Void TTT4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chck == false) {
		TTT4->Text = "X";
		chck = true;
	}
	else {
		TTT4->Text = "O";
		chck = false;
	}
	score_board();
	TTT4->Enabled = false;
}
private: System::Void TTT6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chck == false) {
		TTT6->Text = "X";
		chck = true;
	}
	else {
		TTT6->Text = "O";
		chck = false;
	}
	score_board();
	TTT6->Enabled = false;
}
private: System::Void TTT7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chck == false) {
		TTT7->Text = "X";
		chck = true;
	}
	else {
		TTT7->Text = "O";
		chck = false;
	}
	score_board();
	TTT7->Enabled = false;
}
private: System::Void TTT8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (chck == false) {
		TTT8->Text = "X";
		chck = true;
	}
	else {
		TTT8->Text = "O";
		chck = false;
	}
	score_board();
	TTT8->Enabled = false;
}
	   //reset
private: System::Void btnres_Click(System::Object^ sender, System::EventArgs^ e) {
	TTT1->Enabled = true;
	TTT2->Enabled = true;
	TTT3->Enabled = true;
	TTT4->Enabled = true;
	TTT5->Enabled = true;
	TTT6->Enabled = true;
	TTT7->Enabled = true;
	TTT8->Enabled = true;
	TTT9->Enabled = true;
	win = false;

	TTT1->Text = " ";
	TTT2->Text = " ";
	TTT3->Text = " ";
	TTT4->Text = " ";
	TTT5->Text = " ";
	TTT6->Text = " ";
	TTT7->Text = " ";
	TTT8->Text = " ";
	TTT9->Text = " ";
	
	btnNew->Enabled = true;

	TTT1->BackColor = System::Drawing::Color::White;
	TTT2->BackColor = System::Drawing::Color::White;
	TTT3->BackColor = System::Drawing::Color::White;
	TTT4->BackColor = System::Drawing::Color::White;
	TTT5->BackColor = System::Drawing::Color::White;
	TTT6->BackColor = System::Drawing::Color::White;
	TTT7->BackColor = System::Drawing::Color::White;
	TTT8->BackColor = System::Drawing::Color::White;
	TTT9->BackColor = System::Drawing::Color::White;

}
	   //newgame
private: System::Void btnNew_Click(System::Object^ sender, System::EventArgs^ e) {
	TTT1->Enabled = true;
	TTT2->Enabled = true;
	TTT3->Enabled = true;
	TTT4->Enabled = true;
	TTT5->Enabled = true;
	TTT6->Enabled = true;
	TTT7->Enabled = true;
	TTT8->Enabled = true;
	TTT9->Enabled = true;
	win = false;

	TTT1->Text = " ";
	TTT2->Text = " ";
	TTT3->Text = " ";
	TTT4->Text = " ";
	TTT5->Text = " ";
	TTT6->Text = " ";
	TTT7->Text = " ";
	TTT8->Text = " ";
	TTT9->Text = " ";

	label3->Text = "0";
	label4->Text = "0";
	label8->Text = "0";
	label9->Text = "0";


	TTT1->BackColor = System::Drawing::Color::White;
	TTT2->BackColor = System::Drawing::Color::White;
	TTT3->BackColor = System::Drawing::Color::White;
	TTT4->BackColor = System::Drawing::Color::White;
	TTT5->BackColor = System::Drawing::Color::White;
	TTT6->BackColor = System::Drawing::Color::White;
	TTT7->BackColor = System::Drawing::Color::White;
	TTT8->BackColor = System::Drawing::Color::White;
	TTT9->BackColor = System::Drawing::Color::White;

}
	
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void logo_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   //file handling
	   //game save
private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {

	mySave(); 

}
	   //game resume
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	myResume(); 
}
};
}