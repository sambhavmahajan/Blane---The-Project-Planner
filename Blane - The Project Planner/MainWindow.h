#pragma once
#include "project.h"
#include <vector>
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <algorithm>
#include <algorithm>
static bool Status_Status = false;
static bool Priority_Status = false;
static std::vector<_Task> _tasks;
static bool compareTasksByPriorityLess(const _Task& task1, const _Task& task2) {
	return task1.Priority < task2.Priority;
}
static bool compareTasksByPriorityGreat(const _Task& task1, const _Task& task2) {
	return task1.Priority > task2.Priority;
}
static bool compareTasksByStatusLess(const _Task& task1, const _Task& task2) {
	return task1.Status < task2.Status;
}
static bool compareTasksByStatusGreat(const _Task& task1, const _Task& task2) {
	return task1.Status > task2.Status;
}
namespace BlaneTheProjectPlanner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ openProjectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveProjectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ taskStatus;

	private: System::Windows::Forms::RichTextBox^ taskDescription;

	private: System::Windows::Forms::TextBox^ taskName;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ taskPriority;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::ComboBox^ priorityChange;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ StatusChange;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openProjectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveProjectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->taskPriority = (gcnew System::Windows::Forms::ComboBox());
			this->taskStatus = (gcnew System::Windows::Forms::ComboBox());
			this->taskDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->taskName = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->StatusChange = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->priorityChange = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(799, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(367, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Blane - Project Planner";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(28, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Project Name:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1924, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openProjectToolStripMenuItem,
					this->saveProjectToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openProjectToolStripMenuItem
			// 
			this->openProjectToolStripMenuItem->Name = L"openProjectToolStripMenuItem";
			this->openProjectToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->openProjectToolStripMenuItem->Text = L"Open Project";
			// 
			// saveProjectToolStripMenuItem
			// 
			this->saveProjectToolStripMenuItem->Name = L"saveProjectToolStripMenuItem";
			this->saveProjectToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->saveProjectToolStripMenuItem->Text = L"Save Project";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::exitToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1788, 193);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 36);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Add Task";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1655, 594);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(209, 34);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Remove Task";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(33, 95);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1831, 475);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Task Name";
			this->columnHeader1->Width = 400;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Description";
			this->columnHeader2->Width = 1000;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Status";
			this->columnHeader3->Width = 300;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Priority";
			this->columnHeader4->Width = 220;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->taskPriority);
			this->groupBox1->Controls->Add(this->taskStatus);
			this->groupBox1->Controls->Add(this->taskDescription);
			this->groupBox1->Controls->Add(this->taskName);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(0, 827);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1924, 234);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"New Task";
			// 
			// taskPriority
			// 
			this->taskPriority->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->taskPriority->FormattingEnabled = true;
			this->taskPriority->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->taskPriority->Location = System::Drawing::Point(274, 201);
			this->taskPriority->Name = L"taskPriority";
			this->taskPriority->Size = System::Drawing::Size(1452, 28);
			this->taskPriority->TabIndex = 11;
			// 
			// taskStatus
			// 
			this->taskStatus->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->taskStatus->FormattingEnabled = true;
			this->taskStatus->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"In Progress", L"Not Started" });
			this->taskStatus->Location = System::Drawing::Point(128, 157);
			this->taskStatus->Name = L"taskStatus";
			this->taskStatus->Size = System::Drawing::Size(1598, 28);
			this->taskStatus->TabIndex = 10;
			// 
			// taskDescription
			// 
			this->taskDescription->Location = System::Drawing::Point(128, 69);
			this->taskDescription->Name = L"taskDescription";
			this->taskDescription->Size = System::Drawing::Size(1598, 81);
			this->taskDescription->TabIndex = 9;
			this->taskDescription->Text = L"";
			// 
			// taskName
			// 
			this->taskName->Location = System::Drawing::Point(128, 37);
			this->taskName->Name = L"taskName";
			this->taskName->Size = System::Drawing::Size(1598, 26);
			this->taskName->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(29, 204);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(239, 20);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Priority(1 being high, 5 being low)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 165);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Status";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Description:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Task Name:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->listView1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Location = System::Drawing::Point(0, 24);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1924, 803);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(1434, 47);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(215, 35);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Sort By Status";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainWindow::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(1655, 47);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(208, 39);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Sort By Priority";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainWindow::button4_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->StatusChange);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->priorityChange);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(33, 634);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1831, 163);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Change Properties";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1741, 82);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 29);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Change";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainWindow::button3_Click);
			// 
			// StatusChange
			// 
			this->StatusChange->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->StatusChange->FormattingEnabled = true;
			this->StatusChange->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"In Progress", L"Not Started" });
			this->StatusChange->Location = System::Drawing::Point(132, 38);
			this->StatusChange->Name = L"StatusChange";
			this->StatusChange->Size = System::Drawing::Size(1592, 28);
			this->StatusChange->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(33, 46);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Status";
			// 
			// priorityChange
			// 
			this->priorityChange->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->priorityChange->FormattingEnabled = true;
			this->priorityChange->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->priorityChange->Location = System::Drawing::Point(272, 83);
			this->priorityChange->Name = L"priorityChange";
			this->priorityChange->Size = System::Drawing::Size(1452, 28);
			this->priorityChange->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(27, 86);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(239, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Priority(1 being high, 5 being low)";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(194, 58);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(390, 31);
			this->textBox2->TabIndex = 6;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1061);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Blane - The Project Planner";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private:std::string ConvertStringTostring(String^ managedString) {
		return msclr::interop::marshal_as<std::string>(managedString);
	}
	private: String^ ConvertstringToString(std::string unmanagedString) {
		return marshal_as<String^>(unmanagedString);
	}
	private: void refreshList() {
		listView1->Items->Clear();
		for (const _Task &t : _tasks) {
			ListViewItem^ itm = gcnew ListViewItem(ConvertstringToString(t.Name));
			itm->SubItems->Add(ConvertstringToString(t.Description));
			String^ Status;
			if (t.Status == status::INPROGRESS) {
				Status = "In Progress";
			}
			else {
				Status = "Not Started";
			}
			String^ pr;
			switch (t.Priority) {
			case 1: pr = "1";
				break;
			case 2: pr = "2";
				break;
			case 3: pr = "3";
				break;
			case 4: pr = "4";
				break;
			case 5:
				pr = "5";
				break;
			}
			itm->SubItems->Add(Status);
			itm->SubItems->Add(pr);
			listView1->Items->Add(itm);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string name = ConvertStringTostring(taskName->Text->ToString());
		std::string description = ConvertStringTostring(taskDescription->Text->ToString());
		status st;
		if (taskStatus->Text == "In Progress") {
			st = status::INPROGRESS;
		}
		else {
			st = status::NOTSTARTED;
		}
		int priority = stoi(ConvertStringTostring(taskPriority->Text->ToString()));
		_Task t(name, description, st, priority);
		_tasks.push_back(t);
		refreshList();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listView1->SelectedItems->Count == 1) {
		_tasks.erase(_tasks.begin() + listView1->Items->IndexOf(listView1->SelectedItems[0]));
		listView1->Items->Remove(listView1->SelectedItems[0]);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listView1->SelectedItems->Count == 1) {
		int n = listView1->Items->IndexOf(listView1->SelectedItems[0]);
		_tasks[n].Priority = priorityChange->SelectedIndex + 1;
		if (StatusChange->SelectedIndex == 0) _tasks[n].Status = status::INPROGRESS;
		else _tasks[n].Status = status::NOTSTARTED;
		refreshList();
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Status_Status = !Status_Status;
	if (Status_Status) {
		std::sort(_tasks.begin(), _tasks.end(), compareTasksByStatusLess);
	}
	else {
		std::sort(_tasks.begin(), _tasks.end(), compareTasksByStatusGreat);
	}
	refreshList();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Priority_Status = !Priority_Status;
	if (Priority_Status) {
		std::sort(_tasks.begin(), _tasks.end(), compareTasksByPriorityLess);
	}
	else {
		std::sort(_tasks.begin(), _tasks.end(), compareTasksByPriorityGreat);
	}
	refreshList();
}
};
}
