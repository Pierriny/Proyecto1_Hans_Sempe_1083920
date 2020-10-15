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
	/// Resumen de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
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
	private: System::Windows::Forms::Label^ label11;
	protected:
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ MoverPilas2;

	private: System::Windows::Forms::TextBox^ PilaD2;

	private: System::Windows::Forms::TextBox^ PilaO2;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ GuardarJuego2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ MoverColas2;

	private: System::Windows::Forms::TextBox^ ColumnAmover2;

	private: System::Windows::Forms::CheckBox^ MoverENcola2;
	private: System::Windows::Forms::CheckBox^ MoverENpila2;


	private: System::Windows::Forms::TextBox^ txtPath2;

	private: System::Windows::Forms::Button^ importarDatos2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ columnas;
	private: System::Windows::Forms::TextBox^ filas;
	private: System::Windows::Forms::Button^ CrearMatriz;
	private: System::Windows::Forms::DataGridView^ dgvMatriz2;

	private: System::Windows::Forms::OpenFileDialog^ ofdImportar2;
	private: System::Windows::Forms::SaveFileDialog^ sfdExportar2;

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
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->MoverPilas2 = (gcnew System::Windows::Forms::Button());
			this->PilaD2 = (gcnew System::Windows::Forms::TextBox());
			this->PilaO2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->GuardarJuego2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->MoverColas2 = (gcnew System::Windows::Forms::Button());
			this->ColumnAmover2 = (gcnew System::Windows::Forms::TextBox());
			this->MoverENcola2 = (gcnew System::Windows::Forms::CheckBox());
			this->MoverENpila2 = (gcnew System::Windows::Forms::CheckBox());
			this->txtPath2 = (gcnew System::Windows::Forms::TextBox());
			this->importarDatos2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->columnas = (gcnew System::Windows::Forms::TextBox());
			this->filas = (gcnew System::Windows::Forms::TextBox());
			this->CrearMatriz = (gcnew System::Windows::Forms::Button());
			this->dgvMatriz2 = (gcnew System::Windows::Forms::DataGridView());
			this->ofdImportar2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sfdExportar2 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz2))->BeginInit();
			this->SuspendLayout();
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(673, 209);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(92, 16);
			this->label11->TabIndex = 65;
			this->label11->Text = L"Columna a mover";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(149, 215);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 16);
			this->label10->TabIndex = 64;
			this->label10->Text = L"Pila destino";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(30, 215);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 16);
			this->label9->TabIndex = 63;
			this->label9->Text = L"Pila origen";
			// 
			// MoverPilas2
			// 
			this->MoverPilas2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MoverPilas2->Location = System::Drawing::Point(42, 260);
			this->MoverPilas2->Name = L"MoverPilas2";
			this->MoverPilas2->Size = System::Drawing::Size(152, 32);
			this->MoverPilas2->TabIndex = 62;
			this->MoverPilas2->Text = L"Mover";
			this->MoverPilas2->UseVisualStyleBackColor = true;
			// 
			// PilaD2
			// 
			this->PilaD2->Location = System::Drawing::Point(129, 234);
			this->PilaD2->Name = L"PilaD2";
			this->PilaD2->Size = System::Drawing::Size(100, 20);
			this->PilaD2->TabIndex = 61;
			// 
			// PilaO2
			// 
			this->PilaO2->Location = System::Drawing::Point(13, 234);
			this->PilaO2->Name = L"PilaO2";
			this->PilaO2->Size = System::Drawing::Size(100, 20);
			this->PilaO2->TabIndex = 60;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(6, 155);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(171, 16);
			this->label6->TabIndex = 59;
			this->label6->Text = L"que esten hasta arriba y nada mas";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(6, 139);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(213, 16);
			this->label7->TabIndex = 58;
			this->label7->Text = L"columna a la vez, pero solo con los bloques";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(6, 123);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(232, 16);
			this->label8->TabIndex = 57;
			this->label8->Text = L"En este modo  puedes interactuar con todas las ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(601, 155);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 16);
			this->label5->TabIndex = 56;
			this->label5->Text = L"abajo y colocarla hasta arriba";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(601, 139);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(246, 16);
			this->label4->TabIndex = 55;
			this->label4->Text = L"columna a la vez, puedes mover la pieza de hasta ";
			// 
			// GuardarJuego2
			// 
			this->GuardarJuego2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GuardarJuego2->Location = System::Drawing::Point(763, 411);
			this->GuardarJuego2->Name = L"GuardarJuego2";
			this->GuardarJuego2->Size = System::Drawing::Size(75, 23);
			this->GuardarJuego2->TabIndex = 54;
			this->GuardarJuego2->Text = L"Guardar";
			this->GuardarJuego2->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(601, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(228, 16);
			this->label3->TabIndex = 53;
			this->label3->Text = L"En este modo solo puedes interactuar con una ";
			// 
			// MoverColas2
			// 
			this->MoverColas2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MoverColas2->Location = System::Drawing::Point(648, 260);
			this->MoverColas2->Name = L"MoverColas2";
			this->MoverColas2->Size = System::Drawing::Size(152, 32);
			this->MoverColas2->TabIndex = 52;
			this->MoverColas2->Text = L"Mover";
			this->MoverColas2->UseVisualStyleBackColor = true;
			// 
			// ColumnAmover2
			// 
			this->ColumnAmover2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ColumnAmover2->Location = System::Drawing::Point(632, 228);
			this->ColumnAmover2->Name = L"ColumnAmover2";
			this->ColumnAmover2->Size = System::Drawing::Size(184, 26);
			this->ColumnAmover2->TabIndex = 51;
			// 
			// MoverENcola2
			// 
			this->MoverENcola2->AutoSize = true;
			this->MoverENcola2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MoverENcola2->Location = System::Drawing::Point(685, 94);
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
			this->MoverENpila2->Location = System::Drawing::Point(85, 94);
			this->MoverENpila2->Name = L"MoverENpila2";
			this->MoverENpila2->Size = System::Drawing::Size(63, 26);
			this->MoverENpila2->TabIndex = 49;
			this->MoverENpila2->Text = L"Pila";
			this->MoverENpila2->UseVisualStyleBackColor = true;
			// 
			// txtPath2
			// 
			this->txtPath2->Location = System::Drawing::Point(592, 41);
			this->txtPath2->Name = L"txtPath2";
			this->txtPath2->Size = System::Drawing::Size(246, 20);
			this->txtPath2->TabIndex = 48;
			// 
			// importarDatos2
			// 
			this->importarDatos2->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->importarDatos2->Location = System::Drawing::Point(404, 25);
			this->importarDatos2->Name = L"importarDatos2";
			this->importarDatos2->Size = System::Drawing::Size(182, 46);
			this->importarDatos2->TabIndex = 47;
			this->importarDatos2->Text = L"Importar Datos";
			this->importarDatos2->UseVisualStyleBackColor = true;
			this->importarDatos2->Click += gcnew System::EventHandler(this, &MyForm2::importarDatos2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(306, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 16);
			this->label2->TabIndex = 46;
			this->label2->Text = L"Columnas";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(306, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 16);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Filas";
			// 
			// columnas
			// 
			this->columnas->Location = System::Drawing::Point(200, 51);
			this->columnas->Name = L"columnas";
			this->columnas->Size = System::Drawing::Size(100, 20);
			this->columnas->TabIndex = 44;
			// 
			// filas
			// 
			this->filas->Location = System::Drawing::Point(200, 25);
			this->filas->Name = L"filas";
			this->filas->Size = System::Drawing::Size(100, 20);
			this->filas->TabIndex = 43;
			// 
			// CrearMatriz
			// 
			this->CrearMatriz->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CrearMatriz->Location = System::Drawing::Point(12, 25);
			this->CrearMatriz->Name = L"CrearMatriz";
			this->CrearMatriz->Size = System::Drawing::Size(182, 46);
			this->CrearMatriz->TabIndex = 42;
			this->CrearMatriz->Text = L"Preparar Matriz";
			this->CrearMatriz->UseVisualStyleBackColor = true;
			// 
			// dgvMatriz2
			// 
			this->dgvMatriz2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatriz2->Location = System::Drawing::Point(255, 94);
			this->dgvMatriz2->Name = L"dgvMatriz2";
			this->dgvMatriz2->Size = System::Drawing::Size(340, 340);
			this->dgvMatriz2->TabIndex = 41;
			// 
			// ofdImportar2
			// 
			this->ofdImportar2->FileName = L"openFileDialog1";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 446);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->MoverPilas2);
			this->Controls->Add(this->PilaD2);
			this->Controls->Add(this->PilaO2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->GuardarJuego2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->MoverColas2);
			this->Controls->Add(this->ColumnAmover2);
			this->Controls->Add(this->MoverENcola2);
			this->Controls->Add(this->MoverENpila2);
			this->Controls->Add(this->txtPath2);
			this->Controls->Add(this->importarDatos2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->columnas);
			this->Controls->Add(this->filas);
			this->Controls->Add(this->CrearMatriz);
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

			//Se agregan los filtros al OpenFileDialog
			ofdImportar2->Filter = "Archivos separados por coma (txt) | *.txt";
			ofdImportar2->FileName = "";

			//Unicamnte si el reultado de la apertura del archivo es exitosa se carga el archivo
			if (ofdImportar2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				ReestablecerMatriz(); //Se elimina cualquier contenido de la matriz
				txtPath2->Text = ofdImportar2->FileName;

				//Se utiliza el objeto File para leer el archivo solo cuando el FileName es correcto
				//Importante haber llamado al namespace System::IO antes de usar File
				array<String^>^ archivoLineas = File::ReadAllLines(ofdImportar2->FileName);

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
							//Le agrega el tipo de columna que será
							DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
							nuevacolumna->CellTemplate = cellTemplate;
							//Inserta la columna
							dgvMatriz2->Columns->Add(nuevacolumna);
						}

						//Agrega las filas de manera dinámica
						for (int i = 0; i < cantidadFlias; i++) {
							dgvMatriz2->Rows->Add();
						}



						//Llena el DatagridView

						//for (int i = 0; i < cantidadColumnas; i++) {
						//	array<String^>^ fila = archivoLineas[i]->Split(',');
						//	array<String^>^ Columna = archivoLineas[i]->Split('X');
						//	int j = 0;

							//Si alguna fila tiene más o menos objetos no afecta al funcionamiento ya que utiliza la cantidad de elementos de la primer fila
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
				MessageBox::Show("No se seleccionó ningún archivo"
					, "Archivo no seleccionado"
					, MessageBoxButtons::OK
					, MessageBoxIcon::Exclamation);
			}
		}










};
}
