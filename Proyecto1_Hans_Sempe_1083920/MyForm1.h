#include "List.h";
#include <string.h>
#pragma once

namespace Proyecto1HansSempe1083920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:

		Lista* milist;
		Lista* milist2;
		Lista* milist3;
		Lista* milist4;
		Lista* milist5;
		Lista* milist6;
		Lista* milist7;

	private: System::Windows::Forms::Button^ Llenar;

	private: System::Windows::Forms::TextBox^ num_fila;
	private: System::Windows::Forms::TextBox^ Num_Columnas;


	private: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ IstLista;
	public:

	public:
		Lista* milist8;



		MyForm1(void)
		{
			InitializeComponent();

			milist = new Lista();
			milist->count = 0;
			milist->start = nullptr;
			milist->end = nullptr;

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtPath;
	protected:
	private: System::Windows::Forms::Button^ importarDatos;





	private: System::Windows::Forms::DataGridView^ dgvMatriz;
	private: System::Windows::Forms::OpenFileDialog^ ofdImportar;
	private: System::Windows::Forms::CheckBox^ MoverENpila;

	private: System::Windows::Forms::CheckBox^ MoverENcola;
	private: System::Windows::Forms::TextBox^ ColumnAmover;

	private: System::Windows::Forms::Button^ MoverColas;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ GuardarJuego;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ PilaO;
	private: System::Windows::Forms::TextBox^ PilaD;


	private: System::Windows::Forms::Button^ MoverPilas;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::SaveFileDialog^ sfdExportar;


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

		int XX;
		int YY;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtPath = (gcnew System::Windows::Forms::TextBox());
			this->importarDatos = (gcnew System::Windows::Forms::Button());
			this->dgvMatriz = (gcnew System::Windows::Forms::DataGridView());
			this->ofdImportar = (gcnew System::Windows::Forms::OpenFileDialog());
			this->MoverENpila = (gcnew System::Windows::Forms::CheckBox());
			this->MoverENcola = (gcnew System::Windows::Forms::CheckBox());
			this->ColumnAmover = (gcnew System::Windows::Forms::TextBox());
			this->MoverColas = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->GuardarJuego = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->PilaO = (gcnew System::Windows::Forms::TextBox());
			this->PilaD = (gcnew System::Windows::Forms::TextBox());
			this->MoverPilas = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->sfdExportar = (gcnew System::Windows::Forms::SaveFileDialog());
			this->Llenar = (gcnew System::Windows::Forms::Button());
			this->num_fila = (gcnew System::Windows::Forms::TextBox());
			this->Num_Columnas = (gcnew System::Windows::Forms::TextBox());
			this->label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->IstLista = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->BeginInit();
			this->SuspendLayout();
			// 
			// txtPath
			// 
			this->txtPath->Location = System::Drawing::Point(701, 50);
			this->txtPath->Name = L"txtPath";
			this->txtPath->Size = System::Drawing::Size(133, 20);
			this->txtPath->TabIndex = 23;
			// 
			// importarDatos
			// 
			this->importarDatos->BackColor = System::Drawing::Color::White;
			this->importarDatos->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->importarDatos->Location = System::Drawing::Point(430, 28);
			this->importarDatos->Name = L"importarDatos";
			this->importarDatos->Size = System::Drawing::Size(182, 58);
			this->importarDatos->TabIndex = 22;
			this->importarDatos->Text = L"Importar Datos";
			this->importarDatos->UseVisualStyleBackColor = false;
			this->importarDatos->Click += gcnew System::EventHandler(this, &MyForm1::importarDatos_Click_1);
			// 
			// dgvMatriz
			// 
			this->dgvMatriz->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatriz->Location = System::Drawing::Point(246, 122);
			this->dgvMatriz->Name = L"dgvMatriz";
			this->dgvMatriz->Size = System::Drawing::Size(343, 296);
			this->dgvMatriz->TabIndex = 16;
			// 
			// ofdImportar
			// 
			this->ofdImportar->FileName = L"openFileDialog1";
			// 
			// MoverENpila
			// 
			this->MoverENpila->AutoSize = true;
			this->MoverENpila->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MoverENpila->ForeColor = System::Drawing::Color::White;
			this->MoverENpila->Location = System::Drawing::Point(88, 122);
			this->MoverENpila->Name = L"MoverENpila";
			this->MoverENpila->Size = System::Drawing::Size(63, 26);
			this->MoverENpila->TabIndex = 24;
			this->MoverENpila->Text = L"Pila";
			this->MoverENpila->UseVisualStyleBackColor = true;
			// 
			// MoverENcola
			// 
			this->MoverENcola->AutoSize = true;
			this->MoverENcola->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MoverENcola->ForeColor = System::Drawing::Color::White;
			this->MoverENcola->Location = System::Drawing::Point(687, 122);
			this->MoverENcola->Name = L"MoverENcola";
			this->MoverENcola->Size = System::Drawing::Size(71, 26);
			this->MoverENcola->TabIndex = 25;
			this->MoverENcola->Text = L"Cola";
			this->MoverENcola->UseVisualStyleBackColor = true;
			// 
			// ColumnAmover
			// 
			this->ColumnAmover->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ColumnAmover->Location = System::Drawing::Point(630, 231);
			this->ColumnAmover->Name = L"ColumnAmover";
			this->ColumnAmover->Size = System::Drawing::Size(184, 26);
			this->ColumnAmover->TabIndex = 26;
			// 
			// MoverColas
			// 
			this->MoverColas->BackColor = System::Drawing::Color::White;
			this->MoverColas->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MoverColas->Location = System::Drawing::Point(646, 263);
			this->MoverColas->Name = L"MoverColas";
			this->MoverColas->Size = System::Drawing::Size(152, 32);
			this->MoverColas->TabIndex = 27;
			this->MoverColas->Text = L"Mover";
			this->MoverColas->UseVisualStyleBackColor = false;
			this->MoverColas->Click += gcnew System::EventHandler(this, &MyForm1::MoverColas_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(603, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(228, 16);
			this->label3->TabIndex = 28;
			this->label3->Text = L"En este modo solo puedes interactuar con una ";
			// 
			// GuardarJuego
			// 
			this->GuardarJuego->BackColor = System::Drawing::Color::White;
			this->GuardarJuego->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GuardarJuego->Location = System::Drawing::Point(763, 398);
			this->GuardarJuego->Name = L"GuardarJuego";
			this->GuardarJuego->Size = System::Drawing::Size(75, 23);
			this->GuardarJuego->TabIndex = 29;
			this->GuardarJuego->Text = L"Guardar";
			this->GuardarJuego->UseVisualStyleBackColor = false;
			this->GuardarJuego->Click += gcnew System::EventHandler(this, &MyForm1::GuardarJuego_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(603, 167);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(246, 16);
			this->label4->TabIndex = 30;
			this->label4->Text = L"columna a la vez, puedes mover la pieza de hasta ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(603, 183);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 16);
			this->label5->TabIndex = 31;
			this->label5->Text = L"abajo y colocarla hasta arriba";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(9, 183);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(171, 16);
			this->label6->TabIndex = 34;
			this->label6->Text = L"que esten hasta arriba y nada mas";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(9, 167);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(213, 16);
			this->label7->TabIndex = 33;
			this->label7->Text = L"columna a la vez, pero solo con los bloques";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(9, 151);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(232, 16);
			this->label8->TabIndex = 32;
			this->label8->Text = L"En este modo  puedes interactuar con todas las ";
			// 
			// PilaO
			// 
			this->PilaO->Location = System::Drawing::Point(15, 237);
			this->PilaO->Name = L"PilaO";
			this->PilaO->Size = System::Drawing::Size(100, 20);
			this->PilaO->TabIndex = 35;
			// 
			// PilaD
			// 
			this->PilaD->Location = System::Drawing::Point(131, 237);
			this->PilaD->Name = L"PilaD";
			this->PilaD->Size = System::Drawing::Size(100, 20);
			this->PilaD->TabIndex = 36;
			// 
			// MoverPilas
			// 
			this->MoverPilas->BackColor = System::Drawing::Color::White;
			this->MoverPilas->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MoverPilas->Location = System::Drawing::Point(44, 263);
			this->MoverPilas->Name = L"MoverPilas";
			this->MoverPilas->Size = System::Drawing::Size(152, 32);
			this->MoverPilas->TabIndex = 37;
			this->MoverPilas->Text = L"Mover";
			this->MoverPilas->UseVisualStyleBackColor = false;
			this->MoverPilas->Click += gcnew System::EventHandler(this, &MyForm1::MoverPilas_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(32, 218);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 16);
			this->label9->TabIndex = 38;
			this->label9->Text = L"Pila origen";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(151, 218);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 16);
			this->label10->TabIndex = 39;
			this->label10->Text = L"Pila destino";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(671, 212);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(92, 16);
			this->label11->TabIndex = 40;
			this->label11->Text = L"Columna a mover";
			// 
			// Llenar
			// 
			this->Llenar->BackColor = System::Drawing::Color::White;
			this->Llenar->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Llenar->Location = System::Drawing::Point(171, 12);
			this->Llenar->Name = L"Llenar";
			this->Llenar->Size = System::Drawing::Size(93, 95);
			this->Llenar->TabIndex = 42;
			this->Llenar->Text = L"Crear  tabla";
			this->Llenar->UseVisualStyleBackColor = false;
			this->Llenar->Click += gcnew System::EventHandler(this, &MyForm1::Llenar_Click);
			// 
			// num_fila
			// 
			this->num_fila->Location = System::Drawing::Point(270, 28);
			this->num_fila->Name = L"num_fila";
			this->num_fila->Size = System::Drawing::Size(154, 20);
			this->num_fila->TabIndex = 43;
			// 
			// Num_Columnas
			// 
			this->Num_Columnas->Location = System::Drawing::Point(270, 85);
			this->Num_Columnas->Name = L"Num_Columnas";
			this->Num_Columnas->Size = System::Drawing::Size(154, 20);
			this->Num_Columnas->TabIndex = 44;
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->BackColor = System::Drawing::Color::White;
			this->label->Location = System::Drawing::Point(304, 9);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(80, 13);
			this->label->TabIndex = 45;
			this->label->Text = L"Numero de filas";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(301, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 13);
			this->label1->TabIndex = 46;
			this->label1->Text = L"Numero de columnas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 39);
			this->label2->TabIndex = 47;
			this->label2->Text = L"Antes de jugar, debe crear\r\nel espacio suficiente \r\npara jugar\r\n";
			// 
			// IstLista
			// 
			this->IstLista->FormattingEnabled = true;
			this->IstLista->Location = System::Drawing::Point(12, 404);
			this->IstLista->Name = L"IstLista";
			this->IstLista->Size = System::Drawing::Size(44, 17);
			this->IstLista->TabIndex = 48;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(846, 430);
			this->Controls->Add(this->IstLista);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label);
			this->Controls->Add(this->Num_Columnas);
			this->Controls->Add(this->num_fila);
			this->Controls->Add(this->Llenar);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->MoverPilas);
			this->Controls->Add(this->PilaD);
			this->Controls->Add(this->PilaO);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->GuardarJuego);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->MoverColas);
			this->Controls->Add(this->ColumnAmover);
			this->Controls->Add(this->MoverENcola);
			this->Controls->Add(this->MoverENpila);
			this->Controls->Add(this->txtPath);
			this->Controls->Add(this->importarDatos);
			this->Controls->Add(this->dgvMatriz);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
private: void ReestablecerMatriz() {
	dgvMatriz->Rows->Clear();
	dgvMatriz->Columns->Clear();
	dgvMatriz->ColumnHeadersVisible = false;
	dgvMatriz->RowHeadersVisible = false;
};

	private: System::Void importarDatos_Click_1(System::Object^ sender, System::EventArgs^ e) {

		//	int Prueba_F = Convert::ToInt32(num_fila->Text);
			//int Prueba_C = Convert::ToInt32(Num_Columnas->Text);
		Hashtable^ colores = gcnew Hashtable;
		colores->Add("M", "#f803fc");
		colores->Add("R", "#ff0000");




		ofdImportar->Filter = "Archivos separados por coma (txt) | *.txt";
		ofdImportar->FileName = "";
		if (ofdImportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			//ReestablecerMatriz();

			array<String^>^ Game = File::ReadAllLines(ofdImportar->FileName);
			if (Game->Length > 0)
			{

				array<String^>^ Lineas = Game[0]->Split(',');
				array<String^>^ Columnas = Game[0]->Split('X');

				char test[9];
				strcpy(test, "hola");

				XX = Columnas->Length;
				YY = (Lineas->Length / Columnas->Length) - 1;
				int npilas = XX;

				if (Lineas->Length > 0)
				{
					Lista* pilas[1000];
					int j = XX - 1;
					pilas[j] = new Lista();
					for (int i = 0; i < Lineas->Length - 1; i++)
					{
						if (Lineas[i] != "X")
						{

							pilas[j]->InsertAtStart(Convert::ToChar(Lineas[i]), test);
						}
						else
						{
							j--;
							pilas[j] = new Lista();
						}
					}
					int maxFilas = 0;
					for (j = 0; j < XX - 1; j++)
					{
						if (pilas[j]->count > maxFilas)
							maxFilas = pilas[j]->count;
					}
					Node* nodo;
					Char cadena[1000];
					int k = 0;
					for (j = 0; j < XX - 1; j++)
					{
						for (int i = 0; i < maxFilas; i++)
						{
							nodo = pilas[j]->ExtractIndex(i);
							if (nodo != nullptr)
							{
								cadena[k] = nodo->value;
								k++;
							}
						}

					}
					txtPath->Text = gcnew String(cadena);



					int cant_columnas = XX;
					for (int i = 0; i < cant_columnas; i++)
					{
						DataGridViewColumn^ New_Column = gcnew DataGridViewColumn();
						New_Column->Width = 30;
						DataGridViewCell^ Cell_Templete = gcnew DataGridViewTextBoxCell();
						New_Column->CellTemplate = Cell_Templete;
						dgvMatriz->Columns->Add(New_Column);
					}
					for (int i = 0; i < maxFilas; i++)
					{
						dgvMatriz->Rows->Add();
					}
					bool x_Salto = false;


					/*	for (int i = 1; i < Columnas->Length;)
						{
							int j;
							for (j = 0; j < Lineas->Length; j++)
							{
								if (x_Salto == true)
								{
									i++;
								}
								if (i == 1)
								{
									int temp_Val;
									if (Lineas[j] == "B")
									{
										temp_Val = 1;
										milist->InsertAtStart(temp_Val);
										x_Salto = false;
									}
									else if (Lineas[j] == "Z")
									{
										temp_Val = 2;
										milist->InsertAtStart(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "W")
									{
										temp_Val = 3;
										milist->InsertAtStart(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "R")
									{
										temp_Val = 4;
										milist->InsertAtStart(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "Y")
									{
										temp_Val = 5;
										milist->InsertAtStart(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "G")
									{
										temp_Val = 6;
										milist->InsertAtStart(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "P")
									{
										temp_Val = 7;
										milist->InsertAtStart(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "N")
									{
										temp_Val = 8;
										milist->InsertAtStart(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "X")
									{
										x_Salto = true;
									}

								}
								if (i == 2)
								{
									int temp_Val;
									if (Lineas[j] == "B")
									{
										temp_Val = 1;
										milist2->InsertAtStart2(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "Z")
									{
										temp_Val = 2;
										milist2->InsertAtStart2(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "W")
									{
										temp_Val = 3;
										milist2->InsertAtStart2(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "R")
									{
										temp_Val = 4;
										milist2->InsertAtStart2(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "Y")
									{
										temp_Val = 5;
										milist2->InsertAtStart2(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "G")
									{
										temp_Val = 6;
										milist2->InsertAtStart2(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "P")
									{
										temp_Val = 7;
										milist2->InsertAtStart2(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "N")
									{
										temp_Val = 8;
										milist2->InsertAtStart2(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "X")
									{
										x_Salto = true;
									}

								}
								if (i == 3)
								{
									int temp_Val;
									if (Lineas[j] == "B")
									{
										temp_Val = 1;
										milist3->InsertAtStart3(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "Z")
									{
										temp_Val = 2;
										milist3->InsertAtStart3(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "W")
									{
										temp_Val = 3;
										milist3->InsertAtStart3(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "R")
									{
										temp_Val = 4;
										milist3->InsertAtStart3(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "Y")
									{
										temp_Val = 5;
										milist3->InsertAtStart3(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "G")
									{
										temp_Val = 6;
										milist3->InsertAtStart3(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "P")
									{
										temp_Val = 7;
										milist3->InsertAtStart3(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "N")
									{
										temp_Val = 8;
										milist3->InsertAtStart3(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "X")
									{
										x_Salto = true;
									}
								}
								if (i == 4)
								{
									int temp_Val;
									if (Lineas[j] == "B")
									{
										temp_Val = 1;
										milist4->InsertAtStart4(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "Z")
									{
										temp_Val = 2;
										milist4->InsertAtStart4(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "W")
									{
										temp_Val = 3;
										milist4->InsertAtStart4(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "R")
									{
										temp_Val = 4;
										milist4->InsertAtStart4(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "Y")
									{
										temp_Val = 5;
										milist4->InsertAtStart4(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "G")
									{
										temp_Val = 6;
										milist4->InsertAtStart4(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "P")
									{
										temp_Val = 7;
										milist4->InsertAtStart4(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "N")
									{
										temp_Val = 8;
										milist4->InsertAtStart4(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "X")
									{
										x_Salto = true;
									}
								}
								if (i == 5)
								{
									int temp_Val;
									if (Lineas[j] == "B")
									{
										temp_Val = 1;
										milist5->InsertAtStart5(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "Z")
									{
										temp_Val = 2;
										milist5->InsertAtStart5(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "W")
									{
										temp_Val = 3;
										milist5->InsertAtStart5(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "R")
									{
										temp_Val = 4;
										milist5->InsertAtStart5(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "Y")
									{
										temp_Val = 5;
										milist5->InsertAtStart5(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "G")
									{
										temp_Val = 6;
										milist5->InsertAtStart5(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "P")
									{
										temp_Val = 7;
										milist5->InsertAtStart5(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "N")
									{
										temp_Val = 8;
										milist5->InsertAtStart5(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "X")
									{
										x_Salto = true;
									}

								}
								if (i == 6)
								{
									int temp_Val;
									if (Lineas[j] == "B")
									{
										temp_Val = 1;
										milist6->InsertAtStart6(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "Z")
									{
										temp_Val = 2;
										milist6->InsertAtStart6(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "W")
									{
										temp_Val = 3;
										milist6->InsertAtStart6(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "R")
									{
										temp_Val = 4;
										milist6->InsertAtStart6(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "Y")
									{
										temp_Val = 5;
										milist6->InsertAtStart6(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "G")
									{
										temp_Val = 6;
										milist6->InsertAtStart6(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "P")
									{
										temp_Val = 7;
										milist6->InsertAtStart6(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "N")
									{
										temp_Val = 8;
										milist6->InsertAtStart6(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "X")
									{
										x_Salto = true;
									}
								}
								if (i == 7)
								{
									int temp_Val;
									if (Lineas[j] == "B")
									{
										temp_Val = 1;
										milist7->InsertAtStart7(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "Z")
									{
										temp_Val = 2;
										milist7->InsertAtStart7(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "W")
									{
										temp_Val = 3;
										milist7->InsertAtStart7(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "R")
									{
										temp_Val = 4;
										milist7->InsertAtStart7(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "Y")
									{
										temp_Val = 5;
										milist7->InsertAtStart7(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "G")
									{
										temp_Val = 6;
										milist7->InsertAtStart7(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "P")
									{
										temp_Val = 7;
										milist7->InsertAtStart7(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "N")
									{
										temp_Val = 8;
										milist7->InsertAtStart7(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "X")
									{
										x_Salto = true;
									}
								}
								if (i == 8)
								{
									int temp_Val;
									if (Lineas[j] == "B")
									{
										temp_Val = 1;
										milist8->InsertAtStart8(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "Z")
									{
										temp_Val = 2;
										milist8->InsertAtStart8(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "W")
									{
										temp_Val = 3;
										milist8->InsertAtStart8(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "R")
									{
										temp_Val = 4;
										milist8->InsertAtStart8(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "Y")
									{
										temp_Val = 5;
										milist8->InsertAtStart8(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "G")
									{
										temp_Val = 6;
										milist8->InsertAtStart8(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "P")
									{
										temp_Val = 7;
										milist8->InsertAtStart8(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "N")
									{
										temp_Val = 8;
										milist8->InsertAtStart8(temp_Val);

										x_Salto = false;
									}
									else if (Lineas[j] == "X")
									{
										x_Salto = true;
									}
								}
								if (i >= 9)
								{
									MessageBox::Show("No es valido el archivo seleccionado", "Archivo invalido", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
									ReestablecerMatriz();
									break;
								}
							}
						}*/
				}
			}
		}
		else {
			MessageBox::Show("No se seleccionó ningún archivo"
				, "Archivo no seleccionado"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Exclamation);
		}

		colorear();

	}

	private: System::Void MoverColas_Click(System::Object^ sender, System::EventArgs^ e) {


		if (MoverENpila->Checked == true)
		{
			MessageBox::Show("Debe seleccionar la opcion COLA si quiere usar este movimineto"
				, "Error"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Exclamation);
		}
		else if (MoverENcola->Checked == false)
		{
			MessageBox::Show("No se selecciono niguna opción"
				, "Error"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Exclamation);
		}
		else if (MoverENcola->Checked == true) {

			int Origen = Convert::ToInt32(ColumnAmover->Text);

			if (Origen == 1) {

				Node* ExtractAtEnd();

			}
			else if (Origen == 2) {



			}
			else if (Origen == 3) {



			}
			else if (Origen == 4) {



			}
			else if (Origen == 5) {



			}
			else if (Origen == 6) {



			}
			else if (Origen == 7) {



			}
			else if (Origen == 8) {



			}

		}

	}

	private: System::Void MoverPilas_Click(System::Object^ sender, System::EventArgs^ e) {

		if (MoverENcola->Checked == true)
		{
			MessageBox::Show("Debe seleccionar unicamente la opcion PILA si quiere usar este movimineto"
				, "Error"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Exclamation);
		}
		else if (MoverENpila->Checked == false)
		{
			MessageBox::Show("No se selecciono niguna opción"
				, "Error"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Exclamation);
		}
		else if (MoverENpila->Checked == true) {


		}

	}

	private: System::Void GuardarJuego_Click(System::Object^ sender, System::EventArgs^ e) {

		if ((dgvMatriz->Columns->Count > 0) && (dgvMatriz->Rows->Count > 0)) {
			sfdExportar->Filter = "Archivos separados por coma (txt) | *.txt";
			if (sfdExportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

				//Guardo el contenido del DataGridView en una sola cadena
				String^ linea = "";
				for (int i = 0; i < dgvMatriz->Rows->Count; i++) {
					for (int j = 0; j < dgvMatriz->Columns->Count; j++) {
						if (j == dgvMatriz->Columns->Count - 1)

							linea += "" + dgvMatriz->Rows[i]->Cells[j]->Value + ",X,";
						else
							if (nullptr == dgvMatriz->Rows[i]->Cells[j]->Value)
							{
								linea += "" + "";
							}
							else {
								linea += "" + dgvMatriz->Rows[i]->Cells[j]->Value + ",";
							}
					}
				}

				//Utilizo el objeto System::IO::File para guardar el texto
				//Importante haber llamado al namespace System::IO antes de usar File
				File::WriteAllText(sfdExportar->FileName, linea);
				MessageBox::Show("Archivo guardado exitosamente"
					, "Operación exitosa"
					, MessageBoxButtons::OK
					, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("No se exportó el archivo"
					, "Archivo no seleccionado"
					, MessageBoxButtons::OK
					, MessageBoxIcon::Exclamation);
			}
		}

	}

		   void LlenarListBox() {
			   Node* temp = milist->start;
			   IstLista->Items->Clear();
			   while (temp != nullptr) {
				   IstLista->Items->Add(temp->value);
				   temp = temp->next;
			   }
		   }

	private: System::Void Llenar_Click(System::Object^ sender, System::EventArgs^ e) {
		LlenarMatriz();
	}


		   void LlenarMatriz() {

			   int F = Convert::ToInt32(num_fila->Text);
			   int C = Convert::ToInt32(Num_Columnas->Text);

			   for (int i = 0; i < C; i++) {

				   DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
				   nuevacolumna->Width = 20;

				   DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
				   nuevacolumna->CellTemplate = cellTemplate;

				   dgvMatriz->Columns->Add(nuevacolumna);
			   }

			   for (int i = 1; i < F; i++) {
				   dgvMatriz->Rows->Add();
			   }

			   for (int y = 0; y < C; y++) {
				   for (int d = 0; d < F; d++) {
					   dgvMatriz->Rows[y]->Cells[d]->Style->BackColor = Color::Magenta;
				   }
			   }

			   dgvMatriz->ColumnHeadersVisible = false;
			   dgvMatriz->RowHeadersVisible = false;

		   }

		   void colorear() {

			   int Filas = Convert::ToInt32(num_fila->Text);
			   int Columnas = Convert::ToInt32(Num_Columnas->Text);

			   if (milist->count != 0) {
				   Node* temp = milist->start;
				   temp = milist->start;
				   int r = Filas - 1;
				   while (temp != nullptr) {
					   if (temp->value == 1) {
						   dgvMatriz->Rows[r]->Cells[0]->Style->BackColor = Color::Black;
					   }
					   else if (temp->value == 2) {
						   dgvMatriz->Rows[r]->Cells[0]->Style->BackColor = Color::Blue;
					   }
					   else if (temp->value == 3) {
						   dgvMatriz->Rows[r]->Cells[0]->Style->BackColor = Color::White;
					   }
					   else if (temp->value == 4) {
						   dgvMatriz->Rows[r]->Cells[0]->Style->BackColor = Color::Red;
					   }
					   else if (temp->value == 5) {
						   dgvMatriz->Rows[r]->Cells[0]->Style->BackColor = Color::Yellow;
					   }
					   else if (temp->value == 6) {
						   dgvMatriz->Rows[r]->Cells[0]->Style->BackColor = Color::Green;
					   }
					   else if (temp->value == 7) {
						   dgvMatriz->Rows[r]->Cells[0]->Style->BackColor = Color::Purple;
					   }
					   else if (temp->value == 8) {
						   dgvMatriz->Rows[r]->Cells[0]->Style->BackColor = Color::Navy;
					   }
					   r++;
					   temp = temp->next;
				   }
			   }
			   /*
						   if (milist2->count2 != 0) {
							   Node2* temp2 = milist2->start2;
							   temp2 = milist2->start2;
							   int r = Filas - 1;
							   while (temp2 != nullptr) {
								   if (temp2->value2 == 1) {
									   dgvMatriz->Rows[r]->Cells[1]->Style->BackColor = Color::Black;
								   }
								   else if (temp2->value2 == 2) {
									   dgvMatriz->Rows[r]->Cells[1]->Style->BackColor = Color::Blue;
								   }
								   else if (temp2->value2 == 3) {
									   dgvMatriz->Rows[r]->Cells[1]->Style->BackColor = Color::White;
								   }
								   else if (temp2->value2 == 4) {
									   dgvMatriz->Rows[r]->Cells[1]->Style->BackColor = Color::Red;
								   }
								   else if (temp2->value2 == 5) {
									   dgvMatriz->Rows[r]->Cells[1]->Style->BackColor = Color::Yellow;
								   }
								   else if (temp2->value2 == 6) {
									   dgvMatriz->Rows[r]->Cells[1]->Style->BackColor = Color::Green;
								   }
								   else if (temp2->value2 == 7) {
									   dgvMatriz->Rows[r]->Cells[1]->Style->BackColor = Color::Purple;
								   }
								   else if (temp2->value2 == 8) {
									   dgvMatriz->Rows[r]->Cells[1]->Style->BackColor = Color::Navy;
								   }
								   r++;
								   temp2 = temp2->next2;
							   }
						   }

						   if (milist3->count3 != 0) {
							   Node3* temp3 = milist3->start3;
							   temp3 = milist3->start3;
							   int r = Filas - 1;
							   while (temp3 != nullptr) {
								   if (temp3->value3 == 1) {
									   dgvMatriz->Rows[r]->Cells[2]->Style->BackColor = Color::Black;
								   }
								   else if (temp3->value3 == 2) {
									   dgvMatriz->Rows[r]->Cells[2]->Style->BackColor = Color::Blue;
								   }
								   else if (temp3->value3 == 3) {
									   dgvMatriz->Rows[r]->Cells[2]->Style->BackColor = Color::White;
								   }
								   else if (temp3->value3 == 4) {
									   dgvMatriz->Rows[r]->Cells[2]->Style->BackColor = Color::Red;
								   }
								   else if (temp3->value3 == 5) {
									   dgvMatriz->Rows[r]->Cells[2]->Style->BackColor = Color::Yellow;
								   }
								   else if (temp3->value3 == 6) {
									   dgvMatriz->Rows[r]->Cells[2]->Style->BackColor = Color::Green;
								   }
								   else if (temp3->value3 == 7) {
									   dgvMatriz->Rows[r]->Cells[2]->Style->BackColor = Color::Purple;
								   }
								   else if (temp3->value3 == 8) {
									   dgvMatriz->Rows[r]->Cells[2]->Style->BackColor = Color::Navy;
								   }
								   r++;
								   temp3 = temp3->next3;
							   }
						   }

						   if (milist4->count4 != 0) {
							   Node4* temp4 = milist4->start4;
							   temp4 = milist4->start4;
							   int r = Filas - 1;
							   while (temp4 != nullptr) {
								   if (temp4->value4 == 1) {
									   dgvMatriz->Rows[r]->Cells[3]->Style->BackColor = Color::Black;
								   }
								   else if (temp4->value4 == 2) {
									   dgvMatriz->Rows[r]->Cells[3]->Style->BackColor = Color::Blue;
								   }
								   else if (temp4->value4 == 3) {
									   dgvMatriz->Rows[r]->Cells[3]->Style->BackColor = Color::White;
								   }
								   else if (temp4->value4 == 4) {
									   dgvMatriz->Rows[r]->Cells[3]->Style->BackColor = Color::Red;
								   }
								   else if (temp4->value4 == 5) {
									   dgvMatriz->Rows[r]->Cells[3]->Style->BackColor = Color::Yellow;
								   }
								   else if (temp4->value4 == 6) {
									   dgvMatriz->Rows[r]->Cells[3]->Style->BackColor = Color::Green;
								   }
								   else if (temp4->value4 == 7) {
									   dgvMatriz->Rows[r]->Cells[3]->Style->BackColor = Color::Purple;
								   }
								   else if (temp4->value4 == 8) {
									   dgvMatriz->Rows[r]->Cells[3]->Style->BackColor = Color::Navy;
								   }
								   r++;
								   temp4 = temp4->next4;
							   }
						   }

						   if (milist5->count5 != 0) {
							   Node5* temp5 = milist5->start5;
							   temp5 = milist5->start5;
							   int r = Filas - 1;
							   while (temp5 != nullptr) {
								   if (temp5->value5 == 1) {
									   dgvMatriz->Rows[r]->Cells[4]->Style->BackColor = Color::Black;
								   }
								   else if (temp5->value5 == 2) {
									   dgvMatriz->Rows[r]->Cells[4]->Style->BackColor = Color::Blue;
								   }
								   else if (temp5->value5 == 3) {
									   dgvMatriz->Rows[r]->Cells[4]->Style->BackColor = Color::White;
								   }
								   else if (temp5->value5 == 4) {
									   dgvMatriz->Rows[r]->Cells[4]->Style->BackColor = Color::Red;
								   }
								   else if (temp5->value5 == 5) {
									   dgvMatriz->Rows[r]->Cells[4]->Style->BackColor = Color::Yellow;
								   }
								   else if (temp5->value5 == 6) {
									   dgvMatriz->Rows[r]->Cells[4]->Style->BackColor = Color::Green;
								   }
								   else if (temp5->value5 == 7) {
									   dgvMatriz->Rows[r]->Cells[4]->Style->BackColor = Color::Purple;
								   }
								   else if (temp5->value5 == 8) {
									   dgvMatriz->Rows[r]->Cells[4]->Style->BackColor = Color::Navy;
								   }
								   r++;
								   temp5 = temp5->next5;
							   }
						   }

						   if (milist6->count6 != 0) {
							   Node6* temp6 = milist6->start6;
							   temp6 = milist6->start6;
							   int r = Filas - 1;
							   while (temp6 != nullptr) {
								   if (temp6->value6 == 1) {
									   dgvMatriz->Rows[r]->Cells[5]->Style->BackColor = Color::Black;
								   }
								   else if (temp6->value6 == 2) {
									   dgvMatriz->Rows[r]->Cells[5]->Style->BackColor = Color::Blue;
								   }
								   else if (temp6->value6 == 3) {
									   dgvMatriz->Rows[r]->Cells[5]->Style->BackColor = Color::White;
								   }
								   else if (temp6->value6 == 4) {
									   dgvMatriz->Rows[r]->Cells[5]->Style->BackColor = Color::Red;
								   }
								   else if (temp6->value6 == 5) {
									   dgvMatriz->Rows[r]->Cells[5]->Style->BackColor = Color::Yellow;
								   }
								   else if (temp6->value6 == 6) {
									   dgvMatriz->Rows[r]->Cells[5]->Style->BackColor = Color::Green;
								   }
								   else if (temp6->value6 == 7) {
									   dgvMatriz->Rows[r]->Cells[5]->Style->BackColor = Color::Purple;
								   }
								   else if (temp6->value6 == 8) {
									   dgvMatriz->Rows[r]->Cells[5]->Style->BackColor = Color::Navy;
								   }
								   r++;
								   temp6 = temp6->next6;
							   }
						   }

						   if (milist7->count7 != 0) {
							   Node7* temp7 = milist7->start7;
							   temp7 = milist7->start7;
							   int r = Filas - 1;
							   while (temp7 != nullptr) {
								   if (temp7->value7 == 1) {
									   dgvMatriz->Rows[r]->Cells[6]->Style->BackColor = Color::Black;
								   }
								   else if (temp7->value7 == 2) {
									   dgvMatriz->Rows[r]->Cells[6]->Style->BackColor = Color::Blue;
								   }
								   else if (temp7->value7 == 3) {
									   dgvMatriz->Rows[r]->Cells[5]->Style->BackColor = Color::White;
								   }
								   else if (temp7->value7 == 4) {
									   dgvMatriz->Rows[r]->Cells[6]->Style->BackColor = Color::Red;
								   }
								   else if (temp7->value7 == 5) {
									   dgvMatriz->Rows[r]->Cells[6]->Style->BackColor = Color::Yellow;
								   }
								   else if (temp7->value7 == 6) {
									   dgvMatriz->Rows[r]->Cells[6]->Style->BackColor = Color::Green;
								   }
								   else if (temp7->value7 == 7) {
									   dgvMatriz->Rows[r]->Cells[6]->Style->BackColor = Color::Purple;
								   }
								   else if (temp7->value7 == 8) {
									   dgvMatriz->Rows[r]->Cells[6]->Style->BackColor = Color::Navy;
								   }
								   r++;
								   temp7 = temp7->next7;
							   }
						   }

						   if (milist8->count8 != 0) {
							   Node8* temp8 = milist8->start8;
							   temp8 = milist8->start8;
							   int r = Filas - 1;
							   while (temp8 != nullptr) {
								   if (temp8->value8 == 1) {
									   dgvMatriz->Rows[r]->Cells[7]->Style->BackColor = Color::Black;
								   }
								   else if (temp8->value8 == 2) {
									   dgvMatriz->Rows[r]->Cells[7]->Style->BackColor = Color::Blue;
								   }
								   else if (temp8->value8 == 3) {
									   dgvMatriz->Rows[r]->Cells[7]->Style->BackColor = Color::White;
								   }
								   else if (temp8->value8 == 4) {
									   dgvMatriz->Rows[r]->Cells[7]->Style->BackColor = Color::Red;
								   }
								   else if (temp8->value8 == 5) {
									   dgvMatriz->Rows[r]->Cells[7]->Style->BackColor = Color::Yellow;
								   }
								   else if (temp8->value8 == 6) {
									   dgvMatriz->Rows[r]->Cells[7]->Style->BackColor = Color::Green;
								   }
								   else if (temp8->value8 == 7) {
									   dgvMatriz->Rows[r]->Cells[7]->Style->BackColor = Color::Purple;
								   }
								   else if (temp8->value8 == 8) {
									   dgvMatriz->Rows[r]->Cells[7]->Style->BackColor = Color::Navy;
								   }
								   r++;
								   temp8 = temp8->next8;
							   }
						   } *///fin
		   }






	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
