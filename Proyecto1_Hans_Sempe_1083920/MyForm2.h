#include "List.h"
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
	/// Resumen de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form

	{

		static int Second = 0;
		static int Minute = 0;
		String^ Sec;
	private: System::Windows::Forms::Button^ GelJuego2;
	private: System::Windows::Forms::Button^ Mc;

	private: System::Windows::Forms::Label^ label1;
		   String^ Min;

	public:


		List* milist;
		List* milist2;
		List* milist3;
		List* milist4;
		List* milist5;
		List* milist6;
		List* milist7;

	public:

	public:

	public:

	public:
		List* milist8;

		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label112;
	protected:

	private: System::Windows::Forms::Label^ label102;
	protected:

	private: System::Windows::Forms::Label^ label92;
	private: System::Windows::Forms::Button^ Mp;



	private: System::Windows::Forms::TextBox^ PilaD2;

	private: System::Windows::Forms::TextBox^ PilaO2;

















	private: System::Windows::Forms::TextBox^ ColumnAmover2;

	private: System::Windows::Forms::CheckBox^ MoverENcola2;
	private: System::Windows::Forms::CheckBox^ MoverENpila2;


	private: System::Windows::Forms::TextBox^ txtPath2;

	private: System::Windows::Forms::Button^ importarDatos2;











	private: System::Windows::Forms::DataGridView^ dgvMatriz2;

	private: System::Windows::Forms::OpenFileDialog^ ofdImportar2;
	private: System::Windows::Forms::SaveFileDialog^ sfdExportar2;
	private: System::Windows::Forms::Label^ tiempo2;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->Mp = (gcnew System::Windows::Forms::Button());
			this->PilaD2 = (gcnew System::Windows::Forms::TextBox());
			this->PilaO2 = (gcnew System::Windows::Forms::TextBox());
			this->ColumnAmover2 = (gcnew System::Windows::Forms::TextBox());
			this->MoverENcola2 = (gcnew System::Windows::Forms::CheckBox());
			this->MoverENpila2 = (gcnew System::Windows::Forms::CheckBox());
			this->txtPath2 = (gcnew System::Windows::Forms::TextBox());
			this->importarDatos2 = (gcnew System::Windows::Forms::Button());
			this->dgvMatriz2 = (gcnew System::Windows::Forms::DataGridView());
			this->ofdImportar2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sfdExportar2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tiempo2 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->GelJuego2 = (gcnew System::Windows::Forms::Button());
			this->Mc = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz2))->BeginInit();
			this->SuspendLayout();
			// 
			// label112
			// 
			this->label112->AutoSize = true;
			this->label112->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label112->ForeColor = System::Drawing::Color::White;
			this->label112->Location = System::Drawing::Point(676, 118);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(92, 16);
			this->label112->TabIndex = 65;
			this->label112->Text = L"Columna a mover";
			// 
			// label102
			// 
			this->label102->AutoSize = true;
			this->label102->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label102->ForeColor = System::Drawing::Color::White;
			this->label102->Location = System::Drawing::Point(149, 118);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(61, 16);
			this->label102->TabIndex = 64;
			this->label102->Text = L"Pila destino";
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label92->ForeColor = System::Drawing::Color::White;
			this->label92->Location = System::Drawing::Point(30, 118);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(58, 16);
			this->label92->TabIndex = 63;
			this->label92->Text = L"Pila origen";
			// 
			// Mp
			// 
			this->Mp->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mp->Location = System::Drawing::Point(42, 163);
			this->Mp->Name = L"Mp";
			this->Mp->Size = System::Drawing::Size(152, 32);
			this->Mp->TabIndex = 62;
			this->Mp->Text = L"Mover";
			this->Mp->UseVisualStyleBackColor = true;
			this->Mp->Click += gcnew System::EventHandler(this, &MyForm2::Mp_Click);
			// 
			// PilaD2
			// 
			this->PilaD2->Location = System::Drawing::Point(129, 137);
			this->PilaD2->Name = L"PilaD2";
			this->PilaD2->Size = System::Drawing::Size(100, 20);
			this->PilaD2->TabIndex = 61;
			// 
			// PilaO2
			// 
			this->PilaO2->Location = System::Drawing::Point(13, 137);
			this->PilaO2->Name = L"PilaO2";
			this->PilaO2->Size = System::Drawing::Size(100, 20);
			this->PilaO2->TabIndex = 60;
			// 
			// ColumnAmover2
			// 
			this->ColumnAmover2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ColumnAmover2->Location = System::Drawing::Point(635, 137);
			this->ColumnAmover2->Name = L"ColumnAmover2";
			this->ColumnAmover2->Size = System::Drawing::Size(184, 26);
			this->ColumnAmover2->TabIndex = 51;
			// 
			// MoverENcola2
			// 
			this->MoverENcola2->AutoSize = true;
			this->MoverENcola2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MoverENcola2->ForeColor = System::Drawing::Color::White;
			this->MoverENcola2->Location = System::Drawing::Point(685, 81);
			this->MoverENcola2->Name = L"MoverENcola2";
			this->MoverENcola2->Size = System::Drawing::Size(71, 26);
			this->MoverENcola2->TabIndex = 50;
			this->MoverENcola2->Text = L"Cola";
			this->MoverENcola2->UseVisualStyleBackColor = true;
			// 
			// MoverENpila2
			// 
			this->MoverENpila2->AutoSize = true;
			this->MoverENpila2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MoverENpila2->ForeColor = System::Drawing::Color::White;
			this->MoverENpila2->Location = System::Drawing::Point(85, 81);
			this->MoverENpila2->Name = L"MoverENpila2";
			this->MoverENpila2->Size = System::Drawing::Size(63, 26);
			this->MoverENpila2->TabIndex = 49;
			this->MoverENpila2->Text = L"Pila";
			this->MoverENpila2->UseVisualStyleBackColor = true;
			// 
			// txtPath2
			// 
			this->txtPath2->Location = System::Drawing::Point(200, 28);
			this->txtPath2->Name = L"txtPath2";
			this->txtPath2->Size = System::Drawing::Size(638, 20);
			this->txtPath2->TabIndex = 48;
			// 
			// importarDatos2
			// 
			this->importarDatos2->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->importarDatos2->Location = System::Drawing::Point(12, 12);
			this->importarDatos2->Name = L"importarDatos2";
			this->importarDatos2->Size = System::Drawing::Size(182, 46);
			this->importarDatos2->TabIndex = 47;
			this->importarDatos2->Text = L"Importar Datos";
			this->importarDatos2->UseVisualStyleBackColor = true;
			this->importarDatos2->Click += gcnew System::EventHandler(this, &MyForm2::importarDatos2_Click);
			// 
			// dgvMatriz2
			// 
			this->dgvMatriz2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatriz2->Location = System::Drawing::Point(255, 81);
			this->dgvMatriz2->Name = L"dgvMatriz2";
			this->dgvMatriz2->Size = System::Drawing::Size(340, 340);
			this->dgvMatriz2->TabIndex = 41;
			// 
			// ofdImportar2
			// 
			this->ofdImportar2->FileName = L"openFileDialog1";
			// 
			// tiempo2
			// 
			this->tiempo2->AutoSize = true;
			this->tiempo2->BackColor = System::Drawing::Color::Transparent;
			this->tiempo2->Font = (gcnew System::Drawing::Font(L"Courier New", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tiempo2->ForeColor = System::Drawing::Color::White;
			this->tiempo2->Location = System::Drawing::Point(9, 397);
			this->tiempo2->Name = L"tiempo2";
			this->tiempo2->Size = System::Drawing::Size(49, 23);
			this->tiempo2->TabIndex = 66;
			this->tiempo2->Text = L"0:0";
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm2::timer2_Tick);
			// 
			// GelJuego2
			// 
			this->GelJuego2->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GelJuego2->Location = System::Drawing::Point(763, 398);
			this->GelJuego2->Name = L"GelJuego2";
			this->GelJuego2->Size = System::Drawing::Size(75, 23);
			this->GelJuego2->TabIndex = 67;
			this->GelJuego2->Text = L"Guardar";
			this->GelJuego2->UseVisualStyleBackColor = true;
			this->GelJuego2->Click += gcnew System::EventHandler(this, &MyForm2::GelJuego2_Click);
			// 
			// Mc
			// 
			this->Mc->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mc->Location = System::Drawing::Point(651, 171);
			this->Mc->Name = L"Mc";
			this->Mc->Size = System::Drawing::Size(152, 30);
			this->Mc->TabIndex = 68;
			this->Mc->Text = L"Mover";
			this->Mc->UseVisualStyleBackColor = true;
			this->Mc->Click += gcnew System::EventHandler(this, &MyForm2::Mc_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 371);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 26);
			this->label1->TabIndex = 69;
			this->label1->Text = L"En este modo de juego el panel se repite\r\ncada 5 minutos";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(848, 432);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Mc);
			this->Controls->Add(this->GelJuego2);
			this->Controls->Add(this->tiempo2);
			this->Controls->Add(this->label112);
			this->Controls->Add(this->label102);
			this->Controls->Add(this->label92);
			this->Controls->Add(this->Mp);
			this->Controls->Add(this->PilaD2);
			this->Controls->Add(this->PilaO2);
			this->Controls->Add(this->ColumnAmover2);
			this->Controls->Add(this->MoverENcola2);
			this->Controls->Add(this->MoverENpila2);
			this->Controls->Add(this->txtPath2);
			this->Controls->Add(this->importarDatos2);
			this->Controls->Add(this->dgvMatriz2);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		private: void ReestablecerMatriz() {
			dgvMatriz2->Rows->Clear();
			dgvMatriz2->Columns->Clear();
			dgvMatriz2->ColumnHeadersVisible = false;
			dgvMatriz2->RowHeadersVisible = false;
		};


		private: System::Void importarDatos2_Click(System::Object^ sender, System::EventArgs^ e) {

			ofdImportar2->Filter = "Archivos separados por coma (txt) | *.txt";
			ofdImportar2->FileName = "";
			if (ofdImportar2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				ReestablecerMatriz();
				array<String^>^ archivo_game_Complete = File::ReadAllLines(ofdImportar2->FileName);
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
							dgvMatriz2->Columns->Add(New_Column);
						}
						for (int i = 0; i < (archivo_game_Line->Length / archivo_game_Column->Length) - 1; i++)
						{
							dgvMatriz2->Rows->Add();
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

		private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
			Second++;
			if (Second == 60)
			{
				Second = 0;
				Minute++;
			}
			Sec = Convert::ToString(Second);
			Min = Convert::ToString(Minute);

			tiempo2->Text = Min + ":" + Sec;

		}

		private: System::Void Mc_Click(System::Object^ sender, System::EventArgs^ e) {
			if (MoverENpila2->Checked == true)
			{
				MessageBox::Show("Debe seleccionar la opcion COLA si quiere usar este movimineto"
					, "Error"
					, MessageBoxButtons::OK
					, MessageBoxIcon::Exclamation);
			}
			else if (MoverENcola2->Checked == false)
			{
				MessageBox::Show("No se selecciono niguna opción"
					, "Error"
					, MessageBoxButtons::OK
					, MessageBoxIcon::Exclamation);
			}
			else if (MoverENcola2->Checked == true) {

				int Origen = Convert::ToInt32(ColumnAmover2->Text);

				if (Origen == 1) {

					//Node* temp = milist->ExtractAtStart();
					//milist->InsertAtEnd();

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

		private: System::Void Mp_Click(System::Object^ sender, System::EventArgs^ e) {

			if (MoverENcola2->Checked == true)
			{
				MessageBox::Show("Debe seleccionar unicamente la opcion PILA si quiere usar este movimineto"
					, "Error"
					, MessageBoxButtons::OK
					, MessageBoxIcon::Exclamation);
			}
			else if (MoverENpila2->Checked == false)
			{
				MessageBox::Show("No se selecciono niguna opción"
					, "Error"
					, MessageBoxButtons::OK
					, MessageBoxIcon::Exclamation);
			}
			else if (MoverENpila2->Checked == true) {


			}

		}

		private: System::Void GelJuego2_Click(System::Object^ sender, System::EventArgs^ e) {
			if ((dgvMatriz2->Columns->Count > 0) && (dgvMatriz2->Rows->Count > 0)) {
				sfdExportar2->Filter = "Archivos separados por coma (txt) | *.txt";
				if (sfdExportar2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

					//Guardo el contenido del DataGridView en una sola cadena
					String^ linea = "";
					for (int i = 0; i < dgvMatriz2->Rows->Count; i++) {
						for (int j = 0; j < dgvMatriz2->Columns->Count; j++) {
							if (j == dgvMatriz2->Columns->Count - 1)

								linea += "" + dgvMatriz2->Rows[i]->Cells[j]->Value + ",X,";
							else
								if (nullptr == dgvMatriz2->Rows[i]->Cells[j]->Value)
								{
									linea += "" + "";
								}
								else {
									linea += "" + dgvMatriz2->Rows[i]->Cells[j]->Value + ",";
								}
						}
					}

					//Utilizo el objeto System::IO::File para guardar el texto
					//Importante haber llamado al namespace System::IO antes de usar File
					File::WriteAllText(sfdExportar2->FileName, linea);
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




};
}
