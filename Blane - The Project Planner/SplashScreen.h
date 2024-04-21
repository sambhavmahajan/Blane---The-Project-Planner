#pragma once
namespace BlaneTheProjectPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Summary for SplashScreen
	/// </summary>
	public ref class SplashScreen : public System::Windows::Forms::Form
	{
	public:
		SplashScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SplashScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(54, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(613, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Blane - The Project Planner";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(422, 303);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(274, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Made by Sambhav Mahajan, Astha Raj";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 300);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(404, 23);
			this->progressBar1->TabIndex = 2;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &SplashScreen::timer1_Tick);
			// 
			// SplashScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumTurquoise;
			this->ClientSize = System::Drawing::Size(708, 341);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SplashScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SplashScreen";
			this->Load += gcnew System::EventHandler(this, &SplashScreen::SplashScreen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SplashScreen_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: int t = 0;
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		++t;
		progressBar1->Value += 25;
		if (t == 4) {
			timer1->Enabled = false;
			this->Close();
		}
	}
};
}
