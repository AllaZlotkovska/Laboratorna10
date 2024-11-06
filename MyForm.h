#pragma once
#using <Microsoft.VisualBasic.dll>

using namespace System::Collections::Generic;
namespace Laboratorna10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(227, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(465, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Створити чергу цілих чисел. Обчислити суму парних елементів черги.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введіть розмір черги";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(172, 118);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(55, 175);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(187, 228);
			this->listBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(265, 218);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 32);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Додати елементи";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(265, 278);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(170, 33);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Видалити елементи";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(64, 440);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(157, 38);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Обчислити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(530, 154);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(451, 345);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(703, 528);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(133, 38);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Анімація";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1113, 633);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		System::Collections::Generic::Queue<int> myQueue1; // Оголошення черги

		int lastAddedValue;
		bool isQueueInitialized = false; // ініціалізацію черги

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (!isQueueInitialized)
		{
			isQueueInitialized = true;
		}

		// Отримуємо розмір черги з textBox1
		int size = Convert::ToInt32(textBox1->Text);

		if (myQueue1.Count < size)
		{
			String^ valueInput = Microsoft::VisualBasic::Interaction::InputBox("Введіть елемент черги:", "Додавання елементу", "0");

			if (valueInput == "")
			{
				return;
			}

			int inputValue = Convert::ToInt32(valueInput);
			myQueue1.Enqueue(inputValue);
			listBox1->Items->Add(inputValue.ToString());
			lastAddedValue = inputValue;
		}
		else
		{
			listBox1->Items->Add("Досягнуто ліміт чисел");
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isQueueInitialized)
	{
		if (myQueue1.Count > 0)
		{
			myQueue1.Dequeue();
			listBox1->Items->Clear();
			for each (int value in myQueue1)
			{
				listBox1->Items->Add(value.ToString());
			}
		}
		else
		{
			listBox1->Items->Add("Черга порожня");
		}
	}
	else
	{
		listBox1->Items->Add("Черга ще не була ініціалізована");
	}

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int sum = 0;
	for each (int value in myQueue1)
	{
		if(value%2==0)
		{
			sum += value;
		}
	}
	MessageBox::Show(sum.ToString());

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Image = Image::FromFile("lab10.gif.gif");
}
};
}
