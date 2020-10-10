#pragma once

namespace Proyecto1HansSempe1083920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	
	//Nodo
	struct Nodo {
		int dato;
		Nodo* siguiente;
	};

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvMatriz;
	protected:

	private: System::Windows::Forms::Button^ CrearMatriz;
	private: System::Windows::Forms::TextBox^ filas;
	private: System::Windows::Forms::TextBox^ columnas;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ importarDatos;
	private: System::Windows::Forms::TextBox^ txtPath;


	private: System::Windows::Forms::OpenFileDialog^ ofdImportar;
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
			this->dgvMatriz = (gcnew System::Windows::Forms::DataGridView());
			this->CrearMatriz = (gcnew System::Windows::Forms::Button());
			this->filas = (gcnew System::Windows::Forms::TextBox());
			this->columnas = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->importarDatos = (gcnew System::Windows::Forms::Button());
			this->txtPath = (gcnew System::Windows::Forms::TextBox());
			this->ofdImportar = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvMatriz
			// 
			this->dgvMatriz->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatriz->Location = System::Drawing::Point(12, 74);
			this->dgvMatriz->Name = L"dgvMatriz";
			this->dgvMatriz->Size = System::Drawing::Size(596, 318);
			this->dgvMatriz->TabIndex = 0;
			// 
			// CrearMatriz
			// 
			this->CrearMatriz->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CrearMatriz->Location = System::Drawing::Point(12, 12);
			this->CrearMatriz->Name = L"CrearMatriz";
			this->CrearMatriz->Size = System::Drawing::Size(182, 46);
			this->CrearMatriz->TabIndex = 1;
			this->CrearMatriz->Text = L"Preparar Matriz";
			this->CrearMatriz->UseVisualStyleBackColor = true;
			this->CrearMatriz->Click += gcnew System::EventHandler(this, &MyForm::CrearMatriz_Click);
			// 
			// filas
			// 
			this->filas->Location = System::Drawing::Point(200, 12);
			this->filas->Name = L"filas";
			this->filas->Size = System::Drawing::Size(100, 20);
			this->filas->TabIndex = 2;
			// 
			// columnas
			// 
			this->columnas->Location = System::Drawing::Point(200, 38);
			this->columnas->Name = L"columnas";
			this->columnas->Size = System::Drawing::Size(100, 20);
			this->columnas->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(306, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Filas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(306, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Columnas";
			// 
			// importarDatos
			// 
			this->importarDatos->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->importarDatos->Location = System::Drawing::Point(426, 12);
			this->importarDatos->Name = L"importarDatos";
			this->importarDatos->Size = System::Drawing::Size(182, 46);
			this->importarDatos->TabIndex = 6;
			this->importarDatos->Text = L"Importar Datos";
			this->importarDatos->UseVisualStyleBackColor = true;
			this->importarDatos->Click += gcnew System::EventHandler(this, &MyForm::importarDatos_Click);
			// 
			// txtPath
			// 
			this->txtPath->Location = System::Drawing::Point(614, 28);
			this->txtPath->Name = L"txtPath";
			this->txtPath->Size = System::Drawing::Size(218, 20);
			this->txtPath->TabIndex = 7;
			// 
			// ofdImportar
			// 
			this->ofdImportar->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(840, 404);
			this->Controls->Add(this->txtPath);
			this->Controls->Add(this->importarDatos);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->columnas);
			this->Controls->Add(this->filas);
			this->Controls->Add(this->CrearMatriz);
			this->Controls->Add(this->dgvMatriz);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void agregarPila(Nodo*&, int);
		void sacarPila(Nodo*&, int&);
		int numCalif, * calif;
		int dato;

#pragma endregion

		private: void ReestablecerMatriz() {
			dgvMatriz->Rows->Clear();
			dgvMatriz->Columns->Clear();
			dgvMatriz->ColumnHeadersVisible = false;
			dgvMatriz->RowHeadersVisible = false;
		};

		private: System::Void importarDatos_Click(System::Object^ sender, System::EventArgs^ e) {

			//Se agregan los filtros al OpenFileDialog
			ofdImportar->Filter = "Archivos separados por coma (csv) | *.csv";
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
					array<String^>^ archivoColumna = archivoLineas[0]->Split(',');
					if (archivoColumna->Length > 0) {
						int cantidadColumnas = archivoColumna->Length;

						//Agrega las columnas
						for (int i = 0; i < cantidadColumnas; i++) {
							//Crea una columna
							DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
							nuevacolumna->Width = 20;
							//Le agrega el tipo de columna que será
							DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
							nuevacolumna->CellTemplate = cellTemplate;
							//Inserta la columna
							dgvMatriz->Columns->Add(nuevacolumna);
						}

						//Agrega las filas de manera dinámica
						for (int i = 0; i < archivoLineas->Length; i++) {
							dgvMatriz->Rows->Add();
						}

						//Llena el DatagridView
						for (int i = 0; i < archivoLineas->Length; i++) {
							array<String^>^ fila = archivoLineas[i]->Split(',');
							int j = 0;

							//Si alguna fila tiene más o menos objetos no afecta al funcionamiento ya que utiliza la cantidad de elementos de la primer fila
							while ((j < cantidadColumnas) && (j < fila->Length)) {
								dgvMatriz->Rows[i]->Cells[j]->Value = fila[j];
								j++;
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











		private: System::Void CrearMatriz_Click(System::Object^ sender, System::EventArgs^ e) {

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

		void agregarPila(Nodo*& pila, int n) {
			Nodo* nuevo_nodo = new Nodo();
			nuevo_nodo->dato = n;
			nuevo_nodo->siguiente = pila;
			pila = nuevo_nodo;
			//cout << "\Elemento " << n << " ha sido agregado a PILA correctamente";
		}

		void sacarPila(Nodo*& pila, int& n) {
			Nodo* aux = pila;
			n = aux->dato;
			pila = aux->siguiente;
			delete aux;
		}
		
	
};
}
