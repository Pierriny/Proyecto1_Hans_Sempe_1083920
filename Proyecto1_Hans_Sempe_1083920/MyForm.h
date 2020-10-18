#include "MyForm1.h";
#include "MyForm2.h";
#include "MyForm4.h";
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

	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ NuevoD;
	private: System::Windows::Forms::Button^ NuevoM;
	private: System::Windows::Forms::Button^ NuevoF;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NuevoD = (gcnew System::Windows::Forms::Button());
			this->NuevoM = (gcnew System::Windows::Forms::Button());
			this->NuevoF = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(79, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 32);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Jugar";
			// 
			// NuevoD
			// 
			this->NuevoD->BackColor = System::Drawing::Color::White;
			this->NuevoD->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NuevoD->Location = System::Drawing::Point(12, 137);
			this->NuevoD->Name = L"NuevoD";
			this->NuevoD->Size = System::Drawing::Size(209, 38);
			this->NuevoD->TabIndex = 12;
			this->NuevoD->Text = L"Difícil";
			this->NuevoD->UseVisualStyleBackColor = false;
			this->NuevoD->Click += gcnew System::EventHandler(this, &MyForm::NuevoD_Click_1);
			// 
			// NuevoM
			// 
			this->NuevoM->BackColor = System::Drawing::Color::White;
			this->NuevoM->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NuevoM->Location = System::Drawing::Point(12, 93);
			this->NuevoM->Name = L"NuevoM";
			this->NuevoM->Size = System::Drawing::Size(209, 38);
			this->NuevoM->TabIndex = 11;
			this->NuevoM->Text = L"Medio";
			this->NuevoM->UseVisualStyleBackColor = false;
			this->NuevoM->Click += gcnew System::EventHandler(this, &MyForm::NuevoM_Click_1);
			// 
			// NuevoF
			// 
			this->NuevoF->BackColor = System::Drawing::Color::White;
			this->NuevoF->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NuevoF->Location = System::Drawing::Point(12, 49);
			this->NuevoF->Name = L"NuevoF";
			this->NuevoF->Size = System::Drawing::Size(209, 38);
			this->NuevoF->TabIndex = 10;
			this->NuevoF->Text = L"Fácil";
			this->NuevoF->UseVisualStyleBackColor = false;
			this->NuevoF->Click += gcnew System::EventHandler(this, &MyForm::NuevoF_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(234, 187);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->NuevoD);
			this->Controls->Add(this->NuevoM);
			this->Controls->Add(this->NuevoF);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion

	private: System::Void NuevoF_Click_1(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ miNuevaVentana = gcnew MyForm1();
		miNuevaVentana->ShowDialog();
	}
	
	private: System::Void NuevoM_Click_1(System::Object^ sender, System::EventArgs^ e) {
		MyForm2^ miNuevaVentana2 = gcnew MyForm2();
		miNuevaVentana2->ShowDialog();
	}

	private: System::Void NuevoD_Click_1(System::Object^ sender, System::EventArgs^ e) {		
		MyForm4^ miNuevaVentana4 = gcnew MyForm4();
		miNuevaVentana4->ShowDialog();
	}

    };
}



