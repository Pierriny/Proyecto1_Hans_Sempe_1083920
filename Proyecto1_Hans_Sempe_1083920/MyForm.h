#include "MyForm1.h";
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
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Button^ SeguirD;
	private: System::Windows::Forms::Button^ SeguirM;
	private: System::Windows::Forms::Button^ SeguirF;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SeguirD = (gcnew System::Windows::Forms::Button());
			this->SeguirM = (gcnew System::Windows::Forms::Button());
			this->SeguirF = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NuevoD = (gcnew System::Windows::Forms::Button());
			this->NuevoM = (gcnew System::Windows::Forms::Button());
			this->NuevoF = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(290, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(177, 32);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Seguir Juego";
			// 
			// SeguirD
			// 
			this->SeguirD->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SeguirD->Location = System::Drawing::Point(277, 137);
			this->SeguirD->Name = L"SeguirD";
			this->SeguirD->Size = System::Drawing::Size(209, 38);
			this->SeguirD->TabIndex = 16;
			this->SeguirD->Text = L"Difícil";
			this->SeguirD->UseVisualStyleBackColor = true;
			// 
			// SeguirM
			// 
			this->SeguirM->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SeguirM->Location = System::Drawing::Point(277, 93);
			this->SeguirM->Name = L"SeguirM";
			this->SeguirM->Size = System::Drawing::Size(209, 38);
			this->SeguirM->TabIndex = 15;
			this->SeguirM->Text = L"Medio";
			this->SeguirM->UseVisualStyleBackColor = true;
			// 
			// SeguirF
			// 
			this->SeguirF->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SeguirF->Location = System::Drawing::Point(277, 49);
			this->SeguirF->Name = L"SeguirF";
			this->SeguirF->Size = System::Drawing::Size(209, 38);
			this->SeguirF->TabIndex = 14;
			this->SeguirF->Text = L"Fácil";
			this->SeguirF->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(31, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 32);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Juego Nuevo";
			// 
			// NuevoD
			// 
			this->NuevoD->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NuevoD->Location = System::Drawing::Point(12, 137);
			this->NuevoD->Name = L"NuevoD";
			this->NuevoD->Size = System::Drawing::Size(209, 38);
			this->NuevoD->TabIndex = 12;
			this->NuevoD->Text = L"Difícil";
			this->NuevoD->UseVisualStyleBackColor = true;
			this->NuevoD->Click += gcnew System::EventHandler(this, &MyForm::NuevoD_Click_1);
			// 
			// NuevoM
			// 
			this->NuevoM->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NuevoM->Location = System::Drawing::Point(12, 93);
			this->NuevoM->Name = L"NuevoM";
			this->NuevoM->Size = System::Drawing::Size(209, 38);
			this->NuevoM->TabIndex = 11;
			this->NuevoM->Text = L"Medio";
			this->NuevoM->UseVisualStyleBackColor = true;
			this->NuevoM->Click += gcnew System::EventHandler(this, &MyForm::NuevoM_Click_1);
			// 
			// NuevoF
			// 
			this->NuevoF->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NuevoF->Location = System::Drawing::Point(12, 49);
			this->NuevoF->Name = L"NuevoF";
			this->NuevoF->Size = System::Drawing::Size(209, 38);
			this->NuevoF->TabIndex = 10;
			this->NuevoF->Text = L"Fácil";
			this->NuevoF->UseVisualStyleBackColor = true;
			this->NuevoF->Click += gcnew System::EventHandler(this, &MyForm::NuevoF_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 187);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->SeguirD);
			this->Controls->Add(this->SeguirM);
			this->Controls->Add(this->SeguirF);
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


	}



	private: System::Void NuevoD_Click_1(System::Object^ sender, System::EventArgs^ e) {


	}



};
}
