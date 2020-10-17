#include "List.h";
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

		List* milist;
		List* milist2;
		List* milist3;
		List* milist4;
		List* milist5;
		List* milist6;
		List* milist7;
		List* milist8;



		MyForm1(void)
		{
			InitializeComponent();

			milist = new List();
			milist->count = 0;
			milist->start = nullptr;
			milist->end = nullptr;

			milist2 = new List();
			milist2->count2 = 0;
			milist2->start2 = nullptr;
			milist2->end2 = nullptr;

			milist3 = new List();
			milist3->count3 = 0;
			milist3->start3 = nullptr;
			milist3->end3 = nullptr;

			milist4 = new List();
			milist4->count4 = 0;
			milist4->start4 = nullptr;
			milist4->end4 = nullptr;

			milist5 = new List();
			milist5->count5 = 0;
			milist5->start5 = nullptr;
			milist5->end5 = nullptr;

			milist6 = new List();
			milist6->count6 = 0;
			milist6->start6 = nullptr;
			milist6->end6 = nullptr;

			milist7 = new List();
			milist7->count7 = 0;
			milist7->start7 = nullptr;
			milist7->end7 = nullptr;

			milist8 = new List();
			milist8->count8 = 0;
			milist8->start8 = nullptr;
			milist8->end8 = nullptr;

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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->BeginInit();
			this->SuspendLayout();
			// 
			// txtPath
			// 
			this->txtPath->Location = System::Drawing::Point(201, 28);
			this->txtPath->Name = L"txtPath";
			this->txtPath->Size = System::Drawing::Size(637, 20);
			this->txtPath->TabIndex = 23;
			// 
			// importarDatos
			// 
			this->importarDatos->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->importarDatos->Location = System::Drawing::Point(13, 12);
			this->importarDatos->Name = L"importarDatos";
			this->importarDatos->Size = System::Drawing::Size(182, 46);
			this->importarDatos->TabIndex = 22;
			this->importarDatos->Text = L"Importar Datos";
			this->importarDatos->UseVisualStyleBackColor = true;
			this->importarDatos->Click += gcnew System::EventHandler(this, &MyForm1::importarDatos_Click_1);
			// 
			// dgvMatriz
			// 
			this->dgvMatriz->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatriz->Location = System::Drawing::Point(246, 81);
			this->dgvMatriz->Name = L"dgvMatriz";
			this->dgvMatriz->Size = System::Drawing::Size(340, 340);
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
			this->MoverENpila->Location = System::Drawing::Point(85, 81);
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
			this->MoverENcola->Location = System::Drawing::Point(685, 81);
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
			this->ColumnAmover->Location = System::Drawing::Point(632, 215);
			this->ColumnAmover->Name = L"ColumnAmover";
			this->ColumnAmover->Size = System::Drawing::Size(184, 26);
			this->ColumnAmover->TabIndex = 26;
			// 
			// MoverColas
			// 
			this->MoverColas->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MoverColas->Location = System::Drawing::Point(648, 247);
			this->MoverColas->Name = L"MoverColas";
			this->MoverColas->Size = System::Drawing::Size(152, 32);
			this->MoverColas->TabIndex = 27;
			this->MoverColas->Text = L"Mover";
			this->MoverColas->UseVisualStyleBackColor = true;
			this->MoverColas->Click += gcnew System::EventHandler(this, &MyForm1::MoverColas_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(601, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(228, 16);
			this->label3->TabIndex = 28;
			this->label3->Text = L"En este modo solo puedes interactuar con una ";
			// 
			// GuardarJuego
			// 
			this->GuardarJuego->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GuardarJuego->Location = System::Drawing::Point(763, 398);
			this->GuardarJuego->Name = L"GuardarJuego";
			this->GuardarJuego->Size = System::Drawing::Size(75, 23);
			this->GuardarJuego->TabIndex = 29;
			this->GuardarJuego->Text = L"Guardar";
			this->GuardarJuego->UseVisualStyleBackColor = true;
			this->GuardarJuego->Click += gcnew System::EventHandler(this, &MyForm1::GuardarJuego_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(601, 126);
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
			this->label5->Location = System::Drawing::Point(601, 142);
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
			this->label6->Location = System::Drawing::Point(6, 142);
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
			this->label7->Location = System::Drawing::Point(6, 126);
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
			this->label8->Location = System::Drawing::Point(6, 110);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(232, 16);
			this->label8->TabIndex = 32;
			this->label8->Text = L"En este modo  puedes interactuar con todas las ";
			// 
			// PilaO
			// 
			this->PilaO->Location = System::Drawing::Point(13, 221);
			this->PilaO->Name = L"PilaO";
			this->PilaO->Size = System::Drawing::Size(100, 20);
			this->PilaO->TabIndex = 35;
			// 
			// PilaD
			// 
			this->PilaD->Location = System::Drawing::Point(129, 221);
			this->PilaD->Name = L"PilaD";
			this->PilaD->Size = System::Drawing::Size(100, 20);
			this->PilaD->TabIndex = 36;
			// 
			// MoverPilas
			// 
			this->MoverPilas->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MoverPilas->Location = System::Drawing::Point(42, 247);
			this->MoverPilas->Name = L"MoverPilas";
			this->MoverPilas->Size = System::Drawing::Size(152, 32);
			this->MoverPilas->TabIndex = 37;
			this->MoverPilas->Text = L"Mover";
			this->MoverPilas->UseVisualStyleBackColor = true;
			this->MoverPilas->Click += gcnew System::EventHandler(this, &MyForm1::MoverPilas_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(30, 202);
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
			this->label10->Location = System::Drawing::Point(149, 202);
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
			this->label11->Location = System::Drawing::Point(673, 196);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(92, 16);
			this->label11->TabIndex = 40;
			this->label11->Text = L"Columna a mover";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(846, 430);
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
			ofdImportar->Filter = "Archivos separados por coma (txt) | *.txt";
			ofdImportar->FileName = "";
			if (ofdImportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				ReestablecerMatriz();
				array<String^>^ archivo_game_Complete = File::ReadAllLines(ofdImportar->FileName);
				if (archivo_game_Complete->Length > 0)
				{
					array<String^>^ archivo_game_Line = archivo_game_Complete[0]->Split(',');
					array<String^>^ archivo_game_Column = archivo_game_Complete[0]->Split('X');
					if (archivo_game_Line->Length > 0)
					{
						int cant_columnas = archivo_game_Column->Length;
						for (int i = 0; i < cant_columnas; i++)
						{
							DataGridViewColumn^ New_Column = gcnew DataGridViewColumn();
							New_Column->Width = 30;
							DataGridViewCell^ Cell_Templete = gcnew DataGridViewTextBoxCell();
							New_Column->CellTemplate = Cell_Templete;
							dgvMatriz->Columns->Add(New_Column);
						}
						for (int i = 0; i < (archivo_game_Line->Length / archivo_game_Column->Length) - 1; i++)
						{
							dgvMatriz->Rows->Add();
						}
						bool x_Salto = false;
						for (int i = 1; i < archivo_game_Column->Length;)
						{
							int j;
							for (j = 0; j < archivo_game_Line->Length; j++)
							{
								if (x_Salto == true)
								{
									i++;
								}
								if (i == 1)
								{
									int temp_Val;
									if (archivo_game_Line[j] == "B")
									{
										temp_Val = 1;
										milist->InsertAtStart(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "Z")
									{
										temp_Val = 2;
										milist->InsertAtStart(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "W")
									{
										temp_Val = 3;
										milist->InsertAtStart(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "R")
									{
										temp_Val = 4;
										milist->InsertAtStart(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "Y")
									{
										temp_Val = 5;
										milist->InsertAtStart(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "G")
									{
										temp_Val = 6;
										milist->InsertAtStart(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "P")
									{
										temp_Val = 7;
										milist->InsertAtStart(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "N")
									{
										temp_Val = 8;
										milist->InsertAtStart(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "X")
									{
										x_Salto = true;
									}

								}
								if (i == 2)
								{
									int temp_Val;
									if (archivo_game_Line[j] == "B")
									{
										temp_Val = 1;
										milist2->InsertAtStart2(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "Z")
									{
										temp_Val = 2;
										milist2->InsertAtStart2(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "W")
									{
										temp_Val = 3;
										milist2->InsertAtStart2(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "R")
									{
										temp_Val = 4;
										milist2->InsertAtStart2(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "Y")
									{
										temp_Val = 5;
										milist2->InsertAtStart2(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "G")
									{
										temp_Val = 6;
										milist2->InsertAtStart2(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "P")
									{
										temp_Val = 7;
										milist2->InsertAtStart2(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "N")
									{
										temp_Val = 8;
										milist2->InsertAtStart2(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "X")
									{
										x_Salto = true;
									}

								}
								if (i == 3)
								{
									int temp_Val;
									if (archivo_game_Line[j] == "B")
									{
										temp_Val = 1;
										milist3->InsertAtStart3(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "Z")
									{
										temp_Val = 2;
										milist3->InsertAtStart3(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "W")
									{
										temp_Val = 3;
										milist3->InsertAtStart3(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "R")
									{
										temp_Val = 4;
										milist3->InsertAtStart3(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "Y")
									{
										temp_Val = 5;
										milist3->InsertAtStart3(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "G")
									{
										temp_Val = 6;
										milist3->InsertAtStart3(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "P")
									{
										temp_Val = 7;
										milist3->InsertAtStart3(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "N")
									{
										temp_Val = 8;
										milist3->InsertAtStart3(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "X")
									{
										x_Salto = true;
									}
								}
								if (i == 4)
								{
									int temp_Val;
									if (archivo_game_Line[j] == "B")
									{
										temp_Val = 1;
										milist4->InsertAtStart4(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "Z")
									{
										temp_Val = 2;
										milist4->InsertAtStart4(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "W")
									{
										temp_Val = 3;
										milist4->InsertAtStart4(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "R")
									{
										temp_Val = 4;
										milist4->InsertAtStart4(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "Y")
									{
										temp_Val = 5;
										milist4->InsertAtStart4(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "G")
									{
										temp_Val = 6;
										milist4->InsertAtStart4(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "P")
									{
										temp_Val = 7;
										milist4->InsertAtStart4(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "N")
									{
										temp_Val = 8;
										milist4->InsertAtStart4(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "X")
									{
										x_Salto = true;
									}
								}
								if (i == 5)
								{
									int temp_Val;
									if (archivo_game_Line[j] == "B")
									{
										temp_Val = 1;
										milist5->InsertAtStart5(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "Z")
									{
										temp_Val = 2;
										milist5->InsertAtStart5(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "W")
									{
										temp_Val = 3;
										milist5->InsertAtStart5(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "R")
									{
										temp_Val = 4;
										milist5->InsertAtStart5(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "Y")
									{
										temp_Val = 5;
										milist5->InsertAtStart5(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "G")
									{
										temp_Val = 6;
										milist5->InsertAtStart5(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "P")
									{
										temp_Val = 7;
										milist5->InsertAtStart5(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "N")
									{
										temp_Val = 8;
										milist5->InsertAtStart5(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "X")
									{
										x_Salto = true;
									}

								}
								if (i == 6)
								{
									int temp_Val;
									if (archivo_game_Line[j] == "B")
									{
										temp_Val = 1;
										milist6->InsertAtStart6(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "Z")
									{
										temp_Val = 2;
										milist6->InsertAtStart6(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "W")
									{
										temp_Val = 3;
										milist6->InsertAtStart6(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "R")
									{
										temp_Val = 4;
										milist6->InsertAtStart6(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "Y")
									{
										temp_Val = 5;
										milist6->InsertAtStart6(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "G")
									{
										temp_Val = 6;
										milist6->InsertAtStart6(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "P")
									{
										temp_Val = 7;
										milist6->InsertAtStart6(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "N")
									{
										temp_Val = 8;
										milist6->InsertAtStart6(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "X")
									{
										x_Salto = true;
									}
								}
								if (i == 7)
								{
									int temp_Val;
									if (archivo_game_Line[j] == "B")
									{
										temp_Val = 1;
										milist7->InsertAtStart7(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "Z")
									{
										temp_Val = 2;
										milist7->InsertAtStart7(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "W")
									{
										temp_Val = 3;
										milist7->InsertAtStart7(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "R")
									{
										temp_Val = 4;
										milist7->InsertAtStart7(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "Y")
									{
										temp_Val = 5;
										milist7->InsertAtStart7(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "G")
									{
										temp_Val = 6;
										milist7->InsertAtStart7(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "P")
									{
										temp_Val = 7;
										milist7->InsertAtStart7(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "N")
									{
										temp_Val = 8;
										milist7->InsertAtStart7(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "X")
									{
										x_Salto = true;
									}
								}
								if (i == 8)
								{
									int temp_Val;
									if (archivo_game_Line[j] == "B")
									{
										temp_Val = 1;
										milist8->InsertAtStart8(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "Z")
									{
										temp_Val = 2;
										milist8->InsertAtStart8(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "W")
									{
										temp_Val = 3;
										milist8->InsertAtStart8(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "R")
									{
										temp_Val = 4;
										milist8->InsertAtStart8(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "Y")
									{
										temp_Val = 5;
										milist8->InsertAtStart8(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "G")
									{
										temp_Val = 6;
										milist8->InsertAtStart8(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "P")
									{
										temp_Val = 7;
										milist8->InsertAtStart8(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "N")
									{
										temp_Val = 8;
										milist8->InsertAtStart8(temp_Val);
										x_Salto = false;
									}
									else if (archivo_game_Line[j] == "X")
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
						}
					}
				}
			}
			else {
				// Si no se selecciona correctamente un elemento entonces falla
				MessageBox::Show("No se seleccionó ningún archivo"
					, "Archivo no seleccionado"
					, MessageBoxButtons::OK
					, MessageBoxIcon::Exclamation);
			}
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

					//Node* temp = milist->ExtractAtStart();
					//milist->InsertAtEnd();

				}
				else if (Origen == 2){



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




private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}

};
}
