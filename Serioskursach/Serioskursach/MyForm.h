#pragma once
#include "MyForm2.h"
#include "MyForm4.h"

namespace Serioskursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1_menu;
	protected:


	private: System::Windows::Forms::CheckBox^ vaiant1;
	private: System::Windows::Forms::Button^ close_button;



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1_menu = (gcnew System::Windows::Forms::Button());
			this->vaiant1 = (gcnew System::Windows::Forms::CheckBox());
			this->close_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1_menu
			// 
			this->button1_menu->Location = System::Drawing::Point(238, 312);
			this->button1_menu->Name = L"button1_menu";
			this->button1_menu->Size = System::Drawing::Size(139, 67);
			this->button1_menu->TabIndex = 0;
			this->button1_menu->Text = L"Начать";
			this->button1_menu->UseVisualStyleBackColor = true;
			this->button1_menu->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// vaiant1
			// 
			this->vaiant1->Location = System::Drawing::Point(238, 78);
			this->vaiant1->Name = L"vaiant1";
			this->vaiant1->Size = System::Drawing::Size(191, 45);
			this->vaiant1->TabIndex = 2;
			this->vaiant1->Text = L"Первая сложность";
			this->vaiant1->UseVisualStyleBackColor = true;
			// 
			// close_button
			// 
			this->close_button->BackColor = System::Drawing::Color::Red;
			this->close_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->close_button->Location = System::Drawing::Point(602, 1);
			this->close_button->Name = L"close_button";
			this->close_button->Size = System::Drawing::Size(31, 32);
			this->close_button->TabIndex = 3;
			this->close_button->Text = L"X";
			this->close_button->UseVisualStyleBackColor = false;
			this->close_button->Click += gcnew System::EventHandler(this, &MyForm::close_button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(635, 508);
			this->Controls->Add(this->close_button);
			this->Controls->Add(this->vaiant1);
			this->Controls->Add(this->button1_menu);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Меню";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->vaiant1->Checked) {
			this->Hide();
			MyForm2^ frm1 = gcnew MyForm2();
			frm1->ShowDialog();
			
			
		}
	}
	
	

private: System::Void close_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
