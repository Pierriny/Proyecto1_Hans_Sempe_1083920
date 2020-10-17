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
	/// Resumen de MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::OpenFileDialog^ ofdImportar3;
	public:
	private: System::Windows::Forms::SaveFileDialog^ sfdExportar3;
	private: System::Windows::Forms::Timer^ timer3;

		static int Second = 0;
		static int Minute = 0;
		String^ Sec;
		String^ Min;

	public:

		List* milist;
		List* milist2;
		List* milist3;
		List* milist4;
		List* milist5;
		List* milist6;
		List* milist7;
	
		   List* milist8;


		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ AbrirJuego;
	private: System::Windows::Forms::TextBox^ text;
	protected:

	protected:

	private: System::Windows::Forms::CheckBox^ checkPILA;
	private: System::Windows::Forms::CheckBox^ checkCOLA;
	private: System::Windows::Forms::DataGridView^ Matriz;



	private: System::Windows::Forms::TextBox^ textPila1;
	private: System::Windows::Forms::TextBox^ textPila2;
	private: System::Windows::Forms::TextBox^ textaCola;
	private: System::Windows::Forms::Label^ ItsAboutTime;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ RecuerdaGuardar;
	private: System::Windows::Forms::Button^ MOVEenPILA;
	private: System::Windows::Forms::Button^ MOVEenCOLA;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::ComponentModel::IContainer^ components;




	protected:

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
			this->AbrirJuego = (gcnew System::Windows::Forms::Button());
			this->text = (gcnew System::Windows::Forms::TextBox());
			this->checkPILA = (gcnew System::Windows::Forms::CheckBox());
			this->checkCOLA = (gcnew System::Windows::Forms::CheckBox());
			this->Matriz = (gcnew System::Windows::Forms::DataGridView());
			this->textPila1 = (gcnew System::Windows::Forms::TextBox());
			this->textPila2 = (gcnew System::Windows::Forms::TextBox());
			this->textaCola = (gcnew System::Windows::Forms::TextBox());
			this->ItsAboutTime = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->RecuerdaGuardar = (gcnew System::Windows::Forms::Button());
			this->MOVEenPILA = (gcnew System::Windows::Forms::Button());
			this->MOVEenCOLA = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ofdImportar3 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sfdExportar3 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matriz))->BeginInit();
			this->SuspendLayout();
			// 
			// AbrirJuego
			// 
			this->AbrirJuego->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AbrirJuego->Location = System::Drawing::Point(12, 12);
			this->AbrirJuego->Name = L"AbrirJuego";
			this->AbrirJuego->Size = System::Drawing::Size(182, 46);
			this->AbrirJuego->TabIndex = 0;
			this->AbrirJuego->Text = L"Importar Datos";
			this->AbrirJuego->UseVisualStyleBackColor = true;
			this->AbrirJuego->Click += gcnew System::EventHandler(this, &MyForm4::AbrirJuego_Click);
			// 
			// text
			// 
			this->text->Location = System::Drawing::Point(200, 27);
			this->text->Name = L"text";
			this->text->Size = System::Drawing::Size(626, 20);
			this->text->TabIndex = 1;
			// 
			// checkPILA
			// 
			this->checkPILA->AutoSize = true;
			this->checkPILA->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkPILA->ForeColor = System::Drawing::Color::White;
			this->checkPILA->Location = System::Drawing::Point(83, 93);
			this->checkPILA->Name = L"checkPILA";
			this->checkPILA->Size = System::Drawing::Size(53, 22);
			this->checkPILA->TabIndex = 2;
			this->checkPILA->Text = L"Pila";
			this->checkPILA->UseVisualStyleBackColor = true;
			// 
			// checkCOLA
			// 
			this->checkCOLA->AutoSize = true;
			this->checkCOLA->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkCOLA->ForeColor = System::Drawing::Color::White;
			this->checkCOLA->Location = System::Drawing::Point(677, 93);
			this->checkCOLA->Name = L"checkCOLA";
			this->checkCOLA->Size = System::Drawing::Size(59, 22);
			this->checkCOLA->TabIndex = 3;
			this->checkCOLA->Text = L"Cola";
			this->checkCOLA->UseVisualStyleBackColor = true;
			// 
			// Matriz
			// 
			this->Matriz->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Matriz->Location = System::Drawing::Point(250, 62);
			this->Matriz->Name = L"Matriz";
			this->Matriz->Size = System::Drawing::Size(340, 340);
			this->Matriz->TabIndex = 4;
			// 
			// textPila1
			// 
			this->textPila1->Location = System::Drawing::Point(12, 148);
			this->textPila1->Name = L"textPila1";
			this->textPila1->Size = System::Drawing::Size(100, 20);
			this->textPila1->TabIndex = 5;
			// 
			// textPila2
			// 
			this->textPila2->Location = System::Drawing::Point(134, 148);
			this->textPila2->Name = L"textPila2";
			this->textPila2->Size = System::Drawing::Size(100, 20);
			this->textPila2->TabIndex = 6;
			// 
			// textaCola
			// 
			this->textaCola->Location = System::Drawing::Point(626, 148);
			this->textaCola->Name = L"textaCola";
			this->textaCola->Size = System::Drawing::Size(176, 20);
			this->textaCola->TabIndex = 7;
			// 
			// ItsAboutTime
			// 
			this->ItsAboutTime->AutoSize = true;
			this->ItsAboutTime->BackColor = System::Drawing::Color::Transparent;
			this->ItsAboutTime->Font = (gcnew System::Drawing::Font(L"Courier New", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ItsAboutTime->ForeColor = System::Drawing::Color::White;
			this->ItsAboutTime->Location = System::Drawing::Point(8, 379);
			this->ItsAboutTime->Name = L"ItsAboutTime";
			this->ItsAboutTime->Size = System::Drawing::Size(49, 23);
			this->ItsAboutTime->TabIndex = 71;
			this->ItsAboutTime->Text = L"0:0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(9, 344);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 26);
			this->label1->TabIndex = 72;
			this->label1->Text = L"En este modo de juego el panel se repite\r\ncada 5 minutos\r\n";
			// 
			// RecuerdaGuardar
			// 
			this->RecuerdaGuardar->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RecuerdaGuardar->Location = System::Drawing::Point(751, 379);
			this->RecuerdaGuardar->Name = L"RecuerdaGuardar";
			this->RecuerdaGuardar->Size = System::Drawing::Size(75, 23);
			this->RecuerdaGuardar->TabIndex = 73;
			this->RecuerdaGuardar->Text = L"Guardar";
			this->RecuerdaGuardar->UseVisualStyleBackColor = true;
			this->RecuerdaGuardar->Click += gcnew System::EventHandler(this, &MyForm4::RecuerdaGuardar_Click);
			// 
			// MOVEenPILA
			// 
			this->MOVEenPILA->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MOVEenPILA->Location = System::Drawing::Point(42, 174);
			this->MOVEenPILA->Name = L"MOVEenPILA";
			this->MOVEenPILA->Size = System::Drawing::Size(152, 32);
			this->MOVEenPILA->TabIndex = 74;
			this->MOVEenPILA->Text = L"MOVER";
			this->MOVEenPILA->UseVisualStyleBackColor = true;
			this->MOVEenPILA->Click += gcnew System::EventHandler(this, &MyForm4::MOVEenPILA_Click);
			// 
			// MOVEenCOLA
			// 
			this->MOVEenCOLA->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MOVEenCOLA->Location = System::Drawing::Point(641, 174);
			this->MOVEenCOLA->Name = L"MOVEenCOLA";
			this->MOVEenCOLA->Size = System::Drawing::Size(152, 32);
			this->MOVEenCOLA->TabIndex = 75;
			this->MOVEenCOLA->Text = L"MOVER";
			this->MOVEenCOLA->UseVisualStyleBackColor = true;
			this->MOVEenCOLA->Click += gcnew System::EventHandler(this, &MyForm4::MOVEenCOLA_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(39, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 76;
			this->label2->Text = L"P - Origen";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(162, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 77;
			this->label3->Text = L"P - Destino";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(635, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(158, 13);
			this->label4->TabIndex = 78;
			this->label4->Text = L"Seleccione Número de columna";
			// 
			// ofdImportar3
			// 
			this->ofdImportar3->FileName = L"openFileDialog1";
			// 
			// timer3
			// 
			this->timer3->Enabled = true;
			this->timer3->Interval = 1000;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm4::timer3_Tick);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(838, 414);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->MOVEenCOLA);
			this->Controls->Add(this->MOVEenPILA);
			this->Controls->Add(this->RecuerdaGuardar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ItsAboutTime);
			this->Controls->Add(this->textaCola);
			this->Controls->Add(this->textPila2);
			this->Controls->Add(this->textPila1);
			this->Controls->Add(this->Matriz);
			this->Controls->Add(this->checkCOLA);
			this->Controls->Add(this->checkPILA);
			this->Controls->Add(this->text);
			this->Controls->Add(this->AbrirJuego);
			this->Name = L"MyForm4";
			this->Text = L"MyForm4";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matriz))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: void ReestablecerMatriz() {
			Matriz->Rows->Clear();
			Matriz->Columns->Clear();
			Matriz->ColumnHeadersVisible = false;
			Matriz->RowHeadersVisible = false;
		};

		private: System::Void AbrirJuego_Click(System::Object^ sender, System::EventArgs^ e) {
		ofdImportar3->Filter = "Archivos separados por coma (txt) | *.txt";
		ofdImportar3->FileName = "";
		if (ofdImportar3->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			ReestablecerMatriz();
			array<String^>^ archivo_game_Complete = File::ReadAllLines(ofdImportar3->FileName);
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
						Matriz->Columns->Add(New_Column);
					}
					for (int i = 0; i < (archivo_game_Line->Length / archivo_game_Column->Length) - 1; i++)
					{
						Matriz->Rows->Add();
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
		
		private: System::Void MOVEenPILA_Click(System::Object^ sender, System::EventArgs^ e) {

			if (checkCOLA->Checked == true)
			{
				MessageBox::Show("Debe seleccionar unicamente la opcion PILA si quiere usar este movimineto"
					, "Error"
					, MessageBoxButtons::OK
					, MessageBoxIcon::Exclamation);
			}
			else if (checkPILA->Checked == false)
			{
				MessageBox::Show("No se selecciono niguna opción"
					, "Error"
					, MessageBoxButtons::OK
					, MessageBoxIcon::Exclamation);
			}
			else if (checkPILA->Checked == true) {


			}





		}

		//private: System::Void MOVEenCOLA_Click(System::Object^ sender, System::EventArgs^ e) {

		//	if (checkPILA->Checked == true)
		//	{
		//		MessageBox::Show("Debe seleccionar la opcion COLA si quiere usar este movimineto"
		//			, "Error"
		//			, MessageBoxButtons::OK
		//			, MessageBoxIcon::Exclamation);
		//	}
		//	else if (checkCOLA->Checked == false)
		//	{
		//		MessageBox::Show("No se selecciono niguna opción"
		//			, "Error"
		//			, MessageBoxButtons::OK
		//			, MessageBoxIcon::Exclamation);
		//	}
		//	else if (checkCOLA->Checked == true) {

		//		int Origen = Convert::ToInt32(textaCola->Text);

		//		if (Origen == 1) {

		//			//Node* temp = milist->ExtractAtStart();
		//			//milist->InsertAtEnd();

		//		}
		//		else if (Origen == 2) {



		//		}
		//		else if (Origen == 3) {



		//		}
		//		else if (Origen == 4) {



		//		}
		//		else if (Origen == 5) {



		//		}
		//		else if (Origen == 6) {



		//		}
		//		else if (Origen == 7) {



		//		}
		//		else if (Origen == 8) {



		//		}

		//	}

		//}

		private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
			Second++;
			if (Second == 60)
			{
				Second = 0;
				Minute++;
			}
			Sec = Convert::ToString(Second);
			Min = Convert::ToString(Minute);

			ItsAboutTime->Text = Min + ":" + Sec;
		}

		private: System::Void RecuerdaGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
			if ((Matriz->Columns->Count > 0) && (Matriz->Rows->Count > 0)) {
				sfdExportar3->Filter = "Archivos separados por coma (txt) | *.txt";
				if (sfdExportar3->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

					//Guardo el contenido del DataGridView en una sola cadena
					String^ linea = "";
					for (int i = 0; i < Matriz->Rows->Count; i++) {
						for (int j = 0; j < Matriz->Columns->Count; j++) {
							if (j == Matriz->Columns->Count - 1)

								linea += "" + Matriz->Rows[i]->Cells[j]->Value + ",X,";
							else
								if (nullptr == Matriz->Rows[i]->Cells[j]->Value)
								{
									linea += "" + "";
								}
								else {
									linea += "" + Matriz->Rows[i]->Cells[j]->Value + ",";
								}
						}
					}

					//Utilizo el objeto System::IO::File para guardar el texto
					//Importante haber llamado al namespace System::IO antes de usar File
					File::WriteAllText(sfdExportar3->FileName, linea);
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



		private: System::Void MOVEenCOLA_Click_1(System::Object^ sender, System::EventArgs^ e) {

			{

				if (checkPILA->Checked == true)
				{
					MessageBox::Show("Debe seleccionar la opcion COLA si quiere usar este movimineto"
						, "Error"
						, MessageBoxButtons::OK
						, MessageBoxIcon::Exclamation);
				}
				else if (checkCOLA->Checked == false)
				{
					MessageBox::Show("No se selecciono niguna opción"
						, "Error"
						, MessageBoxButtons::OK
						, MessageBoxIcon::Exclamation);
				}
				else if (checkCOLA->Checked == true) {

					int Origen = Convert::ToInt32(textaCola->Text);

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


		}
};
}
