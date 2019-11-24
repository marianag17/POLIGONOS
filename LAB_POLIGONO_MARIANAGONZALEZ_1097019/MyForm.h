#pragma once
#include "Triangulo.h";
#include "Cuadrilatero.h";
#include "Pentagono.h";
#include "Hexagono.h";
#include "Heptagono.h";
#include "Octagono.h";
#include "Eneagono.h";
#include "Decagono.h";
namespace LABPOLIGONOMARIANAGONZALEZ1097019 {

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
	private: System::Windows::Forms::TextBox^  apotema;
	protected:
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  lado;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  btncalcular;
	private: System::Windows::Forms::TextBox^  lado3;
	private: System::Windows::Forms::TextBox^  lado2;
	private: System::Windows::Forms::TextBox^  lado1;
	private: System::Windows::Forms::TextBox^  altura;
	private: System::Windows::Forms::TextBox^  base;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  octagono;
	private: System::Windows::Forms::RadioButton^  decagono;
	private: System::Windows::Forms::RadioButton^  hexagono;
	private: System::Windows::Forms::RadioButton^  pentagono;
	private: System::Windows::Forms::RadioButton^  cuadrilatero;
	private: System::Windows::Forms::RadioButton^  eneagono;
	private: System::Windows::Forms::RadioButton^  heptagono;
	private: System::Windows::Forms::RadioButton^  triangulo;
	private: System::Windows::Forms::Label^  label1;

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
			this->apotema = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lado = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btncalcular = (gcnew System::Windows::Forms::Button());
			this->lado3 = (gcnew System::Windows::Forms::TextBox());
			this->lado2 = (gcnew System::Windows::Forms::TextBox());
			this->lado1 = (gcnew System::Windows::Forms::TextBox());
			this->altura = (gcnew System::Windows::Forms::TextBox());
			this->base = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->octagono = (gcnew System::Windows::Forms::RadioButton());
			this->decagono = (gcnew System::Windows::Forms::RadioButton());
			this->hexagono = (gcnew System::Windows::Forms::RadioButton());
			this->pentagono = (gcnew System::Windows::Forms::RadioButton());
			this->cuadrilatero = (gcnew System::Windows::Forms::RadioButton());
			this->eneagono = (gcnew System::Windows::Forms::RadioButton());
			this->heptagono = (gcnew System::Windows::Forms::RadioButton());
			this->triangulo = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// apotema
			// 
			this->apotema->Location = System::Drawing::Point(347, 267);
			this->apotema->Margin = System::Windows::Forms::Padding(4);
			this->apotema->Name = L"apotema";
			this->apotema->Size = System::Drawing::Size(132, 22);
			this->apotema->TabIndex = 33;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(283, 271);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 17);
			this->label8->TabIndex = 32;
			this->label8->Text = L"apotema";
			// 
			// lado
			// 
			this->lado->Location = System::Drawing::Point(347, 221);
			this->lado->Margin = System::Windows::Forms::Padding(4);
			this->lado->Name = L"lado";
			this->lado->Size = System::Drawing::Size(132, 22);
			this->lado->TabIndex = 31;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(283, 225);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 17);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Lado";
			// 
			// btncalcular
			// 
			this->btncalcular->Location = System::Drawing::Point(179, 419);
			this->btncalcular->Margin = System::Windows::Forms::Padding(4);
			this->btncalcular->Name = L"btncalcular";
			this->btncalcular->Size = System::Drawing::Size(193, 44);
			this->btncalcular->TabIndex = 29;
			this->btncalcular->Text = L"Calcular";
			this->btncalcular->UseVisualStyleBackColor = true;
			this->btncalcular->Click += gcnew System::EventHandler(this, &MyForm::btncalcular_Click);
			// 
			// lado3
			// 
			this->lado3->Location = System::Drawing::Point(240, 367);
			this->lado3->Margin = System::Windows::Forms::Padding(4);
			this->lado3->Name = L"lado3";
			this->lado3->Size = System::Drawing::Size(132, 22);
			this->lado3->TabIndex = 28;
			// 
			// lado2
			// 
			this->lado2->Location = System::Drawing::Point(347, 312);
			this->lado2->Margin = System::Windows::Forms::Padding(4);
			this->lado2->Name = L"lado2";
			this->lado2->Size = System::Drawing::Size(132, 22);
			this->lado2->TabIndex = 27;
			// 
			// lado1
			// 
			this->lado1->Location = System::Drawing::Point(96, 309);
			this->lado1->Margin = System::Windows::Forms::Padding(4);
			this->lado1->Name = L"lado1";
			this->lado1->Size = System::Drawing::Size(132, 22);
			this->lado1->TabIndex = 26;
			// 
			// altura
			// 
			this->altura->Location = System::Drawing::Point(96, 272);
			this->altura->Margin = System::Windows::Forms::Padding(4);
			this->altura->Name = L"altura";
			this->altura->Size = System::Drawing::Size(132, 22);
			this->altura->TabIndex = 25;
			// 
			// base
			// 
			this->base->Location = System::Drawing::Point(96, 226);
			this->base->Margin = System::Windows::Forms::Padding(4);
			this->base->Name = L"base";
			this->base->Size = System::Drawing::Size(132, 22);
			this->base->TabIndex = 24;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(176, 370);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 17);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Lado 3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(283, 315);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 17);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Lado 2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 312);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 17);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Lado 1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 275);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 17);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Altura";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 230);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 17);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Base";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->octagono);
			this->groupBox1->Controls->Add(this->decagono);
			this->groupBox1->Controls->Add(this->hexagono);
			this->groupBox1->Controls->Add(this->pentagono);
			this->groupBox1->Controls->Add(this->cuadrilatero);
			this->groupBox1->Controls->Add(this->eneagono);
			this->groupBox1->Controls->Add(this->heptagono);
			this->groupBox1->Controls->Add(this->triangulo);
			this->groupBox1->Location = System::Drawing::Point(16, 67);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(517, 128);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Escoja uno";
			// 
			// octagono
			// 
			this->octagono->AutoSize = true;
			this->octagono->Location = System::Drawing::Point(163, 74);
			this->octagono->Margin = System::Windows::Forms::Padding(4);
			this->octagono->Name = L"octagono";
			this->octagono->Size = System::Drawing::Size(91, 21);
			this->octagono->TabIndex = 7;
			this->octagono->TabStop = true;
			this->octagono->Text = L"Octagono";
			this->octagono->UseVisualStyleBackColor = true;
			// 
			// decagono
			// 
			this->decagono->AutoSize = true;
			this->decagono->Location = System::Drawing::Point(403, 74);
			this->decagono->Margin = System::Windows::Forms::Padding(4);
			this->decagono->Name = L"decagono";
			this->decagono->Size = System::Drawing::Size(94, 21);
			this->decagono->TabIndex = 6;
			this->decagono->TabStop = true;
			this->decagono->Text = L"Decagono";
			this->decagono->UseVisualStyleBackColor = true;
			// 
			// hexagono
			// 
			this->hexagono->AutoSize = true;
			this->hexagono->Location = System::Drawing::Point(403, 23);
			this->hexagono->Margin = System::Windows::Forms::Padding(4);
			this->hexagono->Name = L"hexagono";
			this->hexagono->Size = System::Drawing::Size(93, 21);
			this->hexagono->TabIndex = 5;
			this->hexagono->TabStop = true;
			this->hexagono->Text = L"Hexagono";
			this->hexagono->UseVisualStyleBackColor = true;
			// 
			// pentagono
			// 
			this->pentagono->AutoSize = true;
			this->pentagono->Location = System::Drawing::Point(283, 23);
			this->pentagono->Margin = System::Windows::Forms::Padding(4);
			this->pentagono->Name = L"pentagono";
			this->pentagono->Size = System::Drawing::Size(98, 21);
			this->pentagono->TabIndex = 4;
			this->pentagono->TabStop = true;
			this->pentagono->Text = L"Pentagono";
			this->pentagono->UseVisualStyleBackColor = true;
			// 
			// cuadrilatero
			// 
			this->cuadrilatero->AutoSize = true;
			this->cuadrilatero->Location = System::Drawing::Point(163, 23);
			this->cuadrilatero->Margin = System::Windows::Forms::Padding(4);
			this->cuadrilatero->Name = L"cuadrilatero";
			this->cuadrilatero->Size = System::Drawing::Size(106, 21);
			this->cuadrilatero->TabIndex = 3;
			this->cuadrilatero->TabStop = true;
			this->cuadrilatero->Text = L"Cuadrilatero";
			this->cuadrilatero->UseVisualStyleBackColor = true;
			// 
			// eneagono
			// 
			this->eneagono->AutoSize = true;
			this->eneagono->Location = System::Drawing::Point(283, 74);
			this->eneagono->Margin = System::Windows::Forms::Padding(4);
			this->eneagono->Name = L"eneagono";
			this->eneagono->Size = System::Drawing::Size(94, 21);
			this->eneagono->TabIndex = 2;
			this->eneagono->TabStop = true;
			this->eneagono->Text = L"Eneagono";
			this->eneagono->UseVisualStyleBackColor = true;
			// 
			// heptagono
			// 
			this->heptagono->AutoSize = true;
			this->heptagono->Location = System::Drawing::Point(45, 74);
			this->heptagono->Margin = System::Windows::Forms::Padding(4);
			this->heptagono->Name = L"heptagono";
			this->heptagono->Size = System::Drawing::Size(99, 21);
			this->heptagono->TabIndex = 1;
			this->heptagono->TabStop = true;
			this->heptagono->Text = L"Heptagono";
			this->heptagono->UseVisualStyleBackColor = true;
			// 
			// triangulo
			// 
			this->triangulo->AutoSize = true;
			this->triangulo->Location = System::Drawing::Point(45, 23);
			this->triangulo->Margin = System::Windows::Forms::Padding(4);
			this->triangulo->Name = L"triangulo";
			this->triangulo->Size = System::Drawing::Size(89, 21);
			this->triangulo->TabIndex = 0;
			this->triangulo->TabStop = true;
			this->triangulo->Text = L"Triangulo";
			this->triangulo->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(197, 23);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(196, 40);
			this->label1->TabIndex = 17;
			this->label1->Text = L"POLÍGONOS";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(569, 503);
			this->Controls->Add(this->apotema);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->lado);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btncalcular);
			this->Controls->Add(this->lado3);
			this->Controls->Add(this->lado2);
			this->Controls->Add(this->lado1);
			this->Controls->Add(this->altura);
			this->Controls->Add(this->base);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btncalcular_Click(System::Object^  sender, System::EventArgs^  e) {
		if (cuadrilatero->Checked == true)
		{
			Cuadrilatero newCuadrilatero(Convert::ToInt32(lado->Text));
			String^ perimetro = gcnew String(newCuadrilatero.perimetro().ToString());
			String^ area = gcnew String(newCuadrilatero.area().ToString());
			System::Windows::Forms::MessageBox::Show("El perimetro del cuadrilatero es: " + perimetro + " y el area es: " + area);
		}
		if (decagono->Checked == true)
		{
			Decagono newDecagono(Convert::ToInt32(lado->Text), Convert::ToInt32(apotema->Text));
			String^ perimetro = gcnew String(newDecagono.perimetro().ToString());
			String^ area = gcnew String(newDecagono.area().ToString());
			System::Windows::Forms::MessageBox::Show("El perimetro del decagono es: " + perimetro + " y el area es: " + area);
		}
		if (triangulo->Checked == true)
		{
			Triangulo newTriangulo(Convert::ToInt32(lado1->Text), Convert::ToInt32(lado2->Text),
			Convert::ToInt32(lado3->Text), Convert::ToInt32(base->Text), Convert::ToInt32(altura->Text));
			String^ perimetro = gcnew String(newTriangulo.perimetro().ToString());
			String^ area = gcnew String(newTriangulo.area().ToString());
			System::Windows::Forms::MessageBox::Show("El perimetro del triangulo es: " + perimetro + " y el area es: " + area);
		}
		if (pentagono->Checked == true)
		{
			Pentagono newPentagono(Convert::ToInt32(lado->Text), Convert::ToInt32(apotema->Text));
			String^ perimetro = gcnew String(newPentagono.perimetro().ToString());
			String^ area = gcnew String(newPentagono.area().ToString());
			System::Windows::Forms::MessageBox::Show("El perimetro del pentagono es: " + perimetro + " y el area es: " + area);
		}
		if (octagono->Checked == true)
		{
			Octagono newOctafono(Convert::ToInt32(lado->Text), Convert::ToInt32(apotema->Text));
			String^ perimetro = gcnew String(newOctafono.perimetro().ToString());
			String^ area = gcnew String(newOctafono.area().ToString());
			System::Windows::Forms::MessageBox::Show("El perimetro del octagono es: " + perimetro + " y el area es: " + area);
		}
		if (eneagono->Checked == true)
		{
			Eneagono newEneagono(Convert::ToInt32(lado->Text), Convert::ToInt32(apotema->Text));
			String^ perimetro = gcnew String(newEneagono.perimetro().ToString());
			String^ area = gcnew String(newEneagono.area().ToString());
			System::Windows::Forms::MessageBox::Show("El perimetro del eneagono es: " + perimetro + " y el area es: " + area);
		}
		if (heptagono->Checked == true)
		{
			Pentagono newPentagono(Convert::ToInt32(lado->Text), Convert::ToInt32(apotema->Text));
			String^ perimetro = gcnew String(newPentagono.perimetro().ToString());
			String^ area = gcnew String(newPentagono.area().ToString());
			System::Windows::Forms::MessageBox::Show("El perimetro del heptagono es: " + perimetro + " y el area es: " + area);
		}
		if (hexagono->Checked == true)
		{
			Hexagono newHexagono(Convert::ToInt32(lado->Text), Convert::ToInt32(apotema->Text));
			String^ perimetro = gcnew String(newHexagono.perimetro().ToString());
			String^ area = gcnew String(newHexagono.area().ToString());
			System::Windows::Forms::MessageBox::Show("El perimetro del hexagono es: " + perimetro + " y el area es: " + area);
		}
	}
	private: System::Void triangulo_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
					if (triangulo->Checked == true)
					{
						lado->Enabled = false;
						apotema->Enabled = false;
						base->Enabled = true;
						altura->Enabled = true;
						lado1->Enabled = true;
						lado2->Enabled = true;
						lado3->Enabled = true;
					}
					else {
						base->Enabled = false;
						altura->Enabled = false;
						lado1->Enabled = false;
						lado2->Enabled = false;
						lado3->Enabled = false;
						lado->Enabled = true;
						apotema->Enabled = true;
					}
				}
};
}
