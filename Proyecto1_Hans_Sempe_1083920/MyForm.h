#pragma once

namespace Proyecto1HansSempe1083920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
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
	private: System::Windows::Forms::DataGridView^ Campo;
	private: System::Windows::Forms::Button^ CrearMatriz;
	private: System::Windows::Forms::TextBox^ filas;
	private: System::Windows::Forms::TextBox^ columnas;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
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
			this->Campo = (gcnew System::Windows::Forms::DataGridView());
			this->CrearMatriz = (gcnew System::Windows::Forms::Button());
			this->filas = (gcnew System::Windows::Forms::TextBox());
			this->columnas = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Campo))->BeginInit();
			this->SuspendLayout();
			// 
			// Campo
			// 
			this->Campo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Campo->Location = System::Drawing::Point(12, 74);
			this->Campo->Name = L"Campo";
			this->Campo->Size = System::Drawing::Size(820, 333);
			this->Campo->TabIndex = 0;
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
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(426, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(182, 46);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Importar Datos";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(614, 28);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(218, 20);
			this->textBox3->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(855, 419);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->columnas);
			this->Controls->Add(this->filas);
			this->Controls->Add(this->CrearMatriz);
			this->Controls->Add(this->Campo);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Campo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void CrearMatriz_Click(System::Object^ sender, System::EventArgs^ e) {

			Campo->ColumnHeadersVisible = false;
			Campo->RowHeadersVisible = false;

			int Num_Fila = Convert::ToInt32(filas->Text);
			
			int Num_Columns = Convert::ToInt32(columnas->Text);

			for (int i = 0; i < Num_Columns; i++) {

				DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
				nuevacolumna->Width = 20;

				DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
				nuevacolumna->CellTemplate = cellTemplate;

				Campo->Columns->Add(nuevacolumna);
			}

			for (int i = 1; i < Num_Fila; i++) {

				Campo->Rows->Add();
			}

		}


		


	

		

		

		

		

	};
}
