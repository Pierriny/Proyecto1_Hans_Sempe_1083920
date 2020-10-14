#include "Node.h";
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
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ columnas;
	private: System::Windows::Forms::TextBox^ filas;
	private: System::Windows::Forms::Button^ CrearMatriz;
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


	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtPath = (gcnew System::Windows::Forms::TextBox());
			this->importarDatos = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->columnas = (gcnew System::Windows::Forms::TextBox());
			this->filas = (gcnew System::Windows::Forms::TextBox());
			this->CrearMatriz = (gcnew System::Windows::Forms::Button());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->BeginInit();
			this->SuspendLayout();
			// 
			// txtPath
			// 
			this->txtPath->Location = System::Drawing::Point(598, 56);
			this->txtPath->Name = L"txtPath";
			this->txtPath->Size = System::Drawing::Size(246, 20);
			this->txtPath->TabIndex = 23;
			// 
			// importarDatos
			// 
			this->importarDatos->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->importarDatos->Location = System::Drawing::Point(410, 40);
			this->importarDatos->Name = L"importarDatos";
			this->importarDatos->Size = System::Drawing::Size(182, 46);
			this->importarDatos->TabIndex = 22;
			this->importarDatos->Text = L"Importar Datos";
			this->importarDatos->UseVisualStyleBackColor = true;
			this->importarDatos->Click += gcnew System::EventHandler(this, &MyForm1::importarDatos_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(312, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 16);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Columnas";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(312, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 16);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Filas";
			// 
			// columnas
			// 
			this->columnas->Location = System::Drawing::Point(206, 66);
			this->columnas->Name = L"columnas";
			this->columnas->Size = System::Drawing::Size(100, 20);
			this->columnas->TabIndex = 19;
			// 
			// filas
			// 
			this->filas->Location = System::Drawing::Point(206, 40);
			this->filas->Name = L"filas";
			this->filas->Size = System::Drawing::Size(100, 20);
			this->filas->TabIndex = 18;
			// 
			// CrearMatriz
			// 
			this->CrearMatriz->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CrearMatriz->Location = System::Drawing::Point(18, 40);
			this->CrearMatriz->Name = L"CrearMatriz";
			this->CrearMatriz->Size = System::Drawing::Size(182, 46);
			this->CrearMatriz->TabIndex = 17;
			this->CrearMatriz->Text = L"Preparar Matriz";
			this->CrearMatriz->UseVisualStyleBackColor = true;
			this->CrearMatriz->Click += gcnew System::EventHandler(this, &MyForm1::CrearMatriz_Click_1);
			// 
			// dgvMatriz
			// 
			this->dgvMatriz->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatriz->Location = System::Drawing::Point(252, 109);
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
			this->MoverENpila->Location = System::Drawing::Point(91, 109);
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
			this->MoverENcola->Location = System::Drawing::Point(691, 109);
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
			this->ColumnAmover->Location = System::Drawing::Point(638, 243);
			this->ColumnAmover->Name = L"ColumnAmover";
			this->ColumnAmover->Size = System::Drawing::Size(184, 26);
			this->ColumnAmover->TabIndex = 26;
			// 
			// MoverColas
			// 
			this->MoverColas->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MoverColas->Location = System::Drawing::Point(654, 275);
			this->MoverColas->Name = L"MoverColas";
			this->MoverColas->Size = System::Drawing::Size(152, 32);
			this->MoverColas->TabIndex = 27;
			this->MoverColas->Text = L"Mover";
			this->MoverColas->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(607, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(228, 16);
			this->label3->TabIndex = 28;
			this->label3->Text = L"En este modo solo puedes interactuar con una ";
			// 
			// GuardarJuego
			// 
			this->GuardarJuego->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GuardarJuego->Location = System::Drawing::Point(769, 426);
			this->GuardarJuego->Name = L"GuardarJuego";
			this->GuardarJuego->Size = System::Drawing::Size(75, 23);
			this->GuardarJuego->TabIndex = 29;
			this->GuardarJuego->Text = L"Guardar";
			this->GuardarJuego->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(607, 154);
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
			this->label5->Location = System::Drawing::Point(607, 170);
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
			this->label6->Location = System::Drawing::Point(12, 170);
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
			this->label7->Location = System::Drawing::Point(12, 154);
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
			this->label8->Location = System::Drawing::Point(12, 138);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(232, 16);
			this->label8->TabIndex = 32;
			this->label8->Text = L"En este modo  puedes interactuar con todas las ";
			// 
			// PilaO
			// 
			this->PilaO->Location = System::Drawing::Point(19, 249);
			this->PilaO->Name = L"PilaO";
			this->PilaO->Size = System::Drawing::Size(100, 20);
			this->PilaO->TabIndex = 35;
			// 
			// PilaD
			// 
			this->PilaD->Location = System::Drawing::Point(135, 249);
			this->PilaD->Name = L"PilaD";
			this->PilaD->Size = System::Drawing::Size(100, 20);
			this->PilaD->TabIndex = 36;
			// 
			// MoverPilas
			// 
			this->MoverPilas->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MoverPilas->Location = System::Drawing::Point(48, 275);
			this->MoverPilas->Name = L"MoverPilas";
			this->MoverPilas->Size = System::Drawing::Size(152, 32);
			this->MoverPilas->TabIndex = 37;
			this->MoverPilas->Text = L"Mover";
			this->MoverPilas->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(36, 230);
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
			this->label10->Location = System::Drawing::Point(155, 230);
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
			this->label11->Location = System::Drawing::Point(679, 224);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(92, 16);
			this->label11->TabIndex = 40;
			this->label11->Text = L"Columna a mover";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(856, 461);
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
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->columnas);
			this->Controls->Add(this->filas);
			this->Controls->Add(this->CrearMatriz);
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
			
			//Se agregan los filtros al OpenFileDialog
			ofdImportar->Filter = "Archivos separados por coma (txt) | *.txt";
			ofdImportar->FileName = "";

			//Unicamnte si el reultado de la apertura del archivo es exitosa se carga el archivo
			if (ofdImportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				ReestablecerMatriz(); //Se elimina cualquier contenido de la matriz
				txtPath->Text = ofdImportar->FileName;

				//Se utiliza el objeto File para leer el archivo solo cuando el FileName es correcto
				//Importante haber llamado al namespace System::IO antes de usar File
				array<String^>^ archivoLineas = File::ReadAllLines(ofdImportar->FileName);

				if (archivoLineas->Length > 0) {

					//Obtiene la cantidad de elementos de la primer linea y ese toma como cantidad de columnas
					
					array<String^>^ archivoColumna = archivoLineas[0]->Split('X');
					array<String^>^ archivoFilas = archivoLineas[0]->Split(',');

					if (archivoColumna->Length > 0) {

						int cantidadColumnas = archivoColumna->Length;
						int cantidadFlias = archivoFilas->Length;

						//Agrega las columnas
						for (int i = 0; i < cantidadColumnas; i++) {
							//Crea una columna
							DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
							nuevacolumna->Width = 20;
							//Le agrega el tipo de columna que ser�
							DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
							nuevacolumna->CellTemplate = cellTemplate;
							//Inserta la columna
							dgvMatriz->Columns->Add(nuevacolumna);
						}

						//Agrega las filas de manera din�mica
						for (int i = 0; i < cantidadFlias; i++) {
							dgvMatriz->Rows->Add();
						}





						//Llena el DatagridView

						//for (int i = 0; i < cantidadColumnas; i++) {
						//	array<String^>^ fila = archivoLineas[i]->Split(',');
						//	array<String^>^ Columna = archivoLineas[i]->Split('X');
						//	int j = 0;

							//Si alguna fila tiene m�s o menos objetos no afecta al funcionamiento ya que utiliza la cantidad de elementos de la primer fila
						//	while ((j < cantidadColumnas) && (j < cantidadFlias)) {
						//		dgvMatriz->Rows[i]->Cells[j]->Value = Columna[j];
						//		j++;
						//	}



						//}




					}
				}

			}
			else {
				// Si no se selecciona correctamente un elemento entonces falla
				MessageBox::Show("No se seleccion� ning�n archivo"
					, "Archivo no seleccionado"
					, MessageBoxButtons::OK
					, MessageBoxIcon::Exclamation);
			}

		}


		private: System::Void CrearMatriz_Click_1(System::Object^ sender, System::EventArgs^ e) {

			dgvMatriz->ColumnHeadersVisible = false;
			dgvMatriz->RowHeadersVisible = false;

			int Num_Fila = Convert::ToInt32(filas->Text);

			int Num_Columns = Convert::ToInt32(columnas->Text);

			for (int i = 0; i < Num_Columns; i++) {

				DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
				nuevacolumna->Width = 20;

				DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
				nuevacolumna->CellTemplate = cellTemplate;

				dgvMatriz->Columns->Add(nuevacolumna);
			}

			for (int i = 1; i < Num_Fila; i++) {

				dgvMatriz->Rows->Add();
			}
		}
		
		

		







private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
