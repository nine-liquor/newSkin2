#pragma once

namespace newSkinInjector {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	static auto btnState{ false };
	static auto gameState{ false };
	static auto cheatState{ false };
	static auto clientState{ false };

	public ref class newSkin : public System::Windows::Forms::Form {
	public:
		newSkin(void) { InitializeComponent(); }
	public:
		void updateScreen() {
			while (true) {
				if (clientState) {
					this->label4->Text = L"建立";
					this->label4->ForeColor = System::Drawing::Color::FromArgb(255, 252, 220, 107);
				}
				else {
					this->label4->Text = L"未建立";
					this->label4->ForeColor = System::Drawing::Color::FromArgb(255, 245, 8, 83);
				}

				if (gameState) {
					this->label3->Text = L"建立";
					this->label3->ForeColor = System::Drawing::Color::FromArgb(255, 252, 220, 107);
					if (cheatState) {
						this->label2->Text = L"注入";
						this->label2->ForeColor = System::Drawing::Color::FromArgb(255, 252, 220, 107);
					}
					else {
						this->label2->Text = L"未注入";
						this->label2->ForeColor = System::Drawing::Color::FromArgb(255, 245, 8, 83);
					}
				}
				else {
					this->label3->Text = L"未建立";
					this->label3->ForeColor = System::Drawing::Color::FromArgb(255, 245, 8, 83);
					this->label2->Text = L"未注入";
					this->label2->ForeColor = System::Drawing::Color::FromArgb(255, 245, 8, 83);
				}
				Thread::Sleep(1000);
			}
		}
	protected:
		~newSkin() { if (components) delete components; }
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::ComponentModel::Container^ components;
	private: System::Windows::Forms::NotifyIcon^ notifyIcon;
	private: System::Windows::Forms::ContextMenu^ contextMenu;
	private: System::Windows::Forms::MenuItem^ menuItem;
	private: System::Windows::Forms::MenuItem^ menuItem2;
#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(newSkin::typeid));
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			   this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			   this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			   this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			   this->notifyIcon = (gcnew System::Windows::Forms::NotifyIcon());
			   this->contextMenu = (gcnew System::Windows::Forms::ContextMenu());
			   this->menuItem = (gcnew System::Windows::Forms::MenuItem());
			   this->menuItem2 = (gcnew System::Windows::Forms::MenuItem());
			   this->groupBox1->SuspendLayout();
			   this->groupBox2->SuspendLayout();
			   this->groupBox3->SuspendLayout();
			   this->groupBox4->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				   static_cast<System::Int32>(static_cast<System::Byte>(83)));
			   this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->button1->Location = System::Drawing::Point(12, 13);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(250, 50);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"开始";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &newSkin::button1_Click);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				   static_cast<System::Int32>(static_cast<System::Byte>(83)));
			   this->label1->Location = System::Drawing::Point(6, 16);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(68, 18);
			   this->label1->TabIndex = 1;
			   this->label1->Text = L"已停止";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				   static_cast<System::Int32>(static_cast<System::Byte>(83)));
			   this->label2->Location = System::Drawing::Point(6, 14);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(94, 18);
			   this->label2->TabIndex = 2;
			   this->label2->Text = L"未注入";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				   static_cast<System::Int32>(static_cast<System::Byte>(83)));
			   this->label3->Location = System::Drawing::Point(6, 14);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(82, 18);
			   this->label3->TabIndex = 3;
			   this->label3->Text = L"未建立";
			   // 
			   // groupBox1
			   // 
			   this->groupBox1->Controls->Add(this->label1);
			   this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->groupBox1->ForeColor = System::Drawing::Color::White;
			   this->groupBox1->Location = System::Drawing::Point(12, 69);
			   this->groupBox1->Name = L"groupBox1";
			   this->groupBox1->Size = System::Drawing::Size(250, 45);
			   this->groupBox1->TabIndex = 5;
			   this->groupBox1->TabStop = false;
			   this->groupBox1->Text = L"注入器状态";
			   // 
			   // groupBox2
			   // 
			   this->groupBox2->Controls->Add(this->label4);
			   this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->groupBox2->ForeColor = System::Drawing::Color::White;
			   this->groupBox2->Location = System::Drawing::Point(12, 120);
			   this->groupBox2->Name = L"groupBox2";
			   this->groupBox2->Size = System::Drawing::Size(250, 45);
			   this->groupBox2->TabIndex = 7;
			   this->groupBox2->TabStop = false;
			   this->groupBox2->Text = L"联盟客户端状态";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				   static_cast<System::Int32>(static_cast<System::Byte>(83)));
			   this->label4->Location = System::Drawing::Point(6, 14);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(82, 18);
			   this->label4->TabIndex = 0;
			   this->label4->Text = L"未建立";
			   // 
			   // groupBox3
			   // 
			   this->groupBox3->Controls->Add(this->label3);
			   this->groupBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->groupBox3->Font = (gcnew System::Drawing::Font(L"Arial", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->groupBox3->ForeColor = System::Drawing::Color::White;
			   this->groupBox3->Location = System::Drawing::Point(12, 171);
			   this->groupBox3->Name = L"groupBox3";
			   this->groupBox3->Size = System::Drawing::Size(250, 45);
			   this->groupBox3->TabIndex = 8;
			   this->groupBox3->TabStop = false;
			   this->groupBox3->Text = L"游戏运行状态";
			   // 
			   // groupBox4
			   // 
			   this->groupBox4->Controls->Add(this->label2);
			   this->groupBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->groupBox4->Font = (gcnew System::Drawing::Font(L"Arial", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->groupBox4->ForeColor = System::Drawing::Color::White;
			   this->groupBox4->Location = System::Drawing::Point(12, 222);
			   this->groupBox4->Name = L"groupBox4";
			   this->groupBox4->Size = System::Drawing::Size(250, 45);
			   this->groupBox4->TabIndex = 9;
			   this->groupBox4->TabStop = false;
			   this->groupBox4->Text = L"newSkin状态";
			   // 
			   // linkLabel1
			   // 
			   this->linkLabel1->AutoSize = true;
			   this->linkLabel1->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			   this->linkLabel1->LinkColor = System::Drawing::Color::Silver;
			   this->linkLabel1->Location = System::Drawing::Point(20, 274);
			   this->linkLabel1->Name = L"linkLabel1";
			   this->linkLabel1->Size = System::Drawing::Size(207, 14);
			   this->linkLabel1->TabIndex = 11;
			   this->linkLabel1->TabStop = true;
			   this->linkLabel1->Text = L"nine_liquor";
			   this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &newSkin::linkLabel1_LinkClicked);
			   //
			   // contextMenu
			   //
			   this->contextMenu->MenuItems->Add(this->menuItem);
			   this->contextMenu->MenuItems->Add(this->menuItem2);
			   //
			   // menuItem
			   //
			   this->menuItem2->Index = 0;
			   this->menuItem2->Text = L"开始";
			   this->menuItem2->Click += gcnew System::EventHandler(this, &newSkin::menuItem2_OnClick);
			   this->menuItem->Index = 1;
			   this->menuItem->Text = L"退出";
			   this->menuItem->Click += gcnew System::EventHandler(this, &newSkin::menuItem_OnClick);
			   //
			   // notifyIcon
			   //
			   this->notifyIcon->Text = L"newSkin";
			   this->notifyIcon->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->notifyIcon->Visible = false;
			   this->notifyIcon->ContextMenu = this->contextMenu;
			   this->notifyIcon->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &newSkin::notifyIcon_MouseDoubleClick);
			   // 
			   // newSkin
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(30)));
			   this->ClientSize = System::Drawing::Size(273, 297);
			   this->Controls->Add(this->linkLabel1);
			   this->Controls->Add(this->groupBox4);
			   this->Controls->Add(this->groupBox3);
			   this->Controls->Add(this->groupBox2);
			   this->Controls->Add(this->groupBox1);
			   this->Controls->Add(this->button1);
			   this->Cursor = System::Windows::Forms::Cursors::Arrow;
			   this->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->MaximizeBox = false;
			   this->Name = L"newSkin";
			   this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			   this->Text = L"newSkin";
			   this->Load += gcnew System::EventHandler(this, &newSkin::newSkin_Load);
			   this->Resize += gcnew System::EventHandler(this, &newSkin::newSkin_Resize);
			   this->groupBox1->ResumeLayout(false);
			   this->groupBox1->PerformLayout();
			   this->groupBox2->ResumeLayout(false);
			   this->groupBox2->PerformLayout();
			   this->groupBox3->ResumeLayout(false);
			   this->groupBox3->PerformLayout();
			   this->groupBox4->ResumeLayout(false);
			   this->groupBox4->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();
		   }
#pragma endregion
	private:
		System::Void newSkin_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			System::AppDomain::CurrentDomain->UnhandledException += gcnew System::UnhandledExceptionEventHandler(this, &newSkin::newSkin_ExceptionHandler);
		}
	private:
		System::Void newSkin_ExceptionHandler(System::Object^ sender, System::UnhandledExceptionEventArgs^ e)
		{
			const auto exception = dynamic_cast<System::Exception^>(e->ExceptionObject)->Message;
			MessageBox::Show(exception);
		}
	private:
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			btnState = !btnState;
			if (btnState) {
				this->button1->BackColor = System::Drawing::Color::FromArgb(255, 252, 220, 107);
				this->label1->ForeColor = System::Drawing::Color::FromArgb(255, 252, 220, 107);
				this->button1->Text = L"停止";
				this->label1->Text = L"正在运行";
				this->menuItem2->Text = L"停止";
			} else {
				this->button1->BackColor = System::Drawing::Color::FromArgb(255, 245, 8, 83);
				this->label1->ForeColor = System::Drawing::Color::FromArgb(255, 245, 8, 83);
				this->button1->Text = L"开始";
				this->label1->Text = L"已停止";
				this->menuItem2->Text = L"开始";
			}
		}
	private:
		System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
		{
			System::Diagnostics::Process::Start(L"https://github.com/R3nzTheCodeGOD/newSkin");
		}
	private:
		System::Void newSkin_Resize(System::Object^ sender, System::EventArgs^ e)
		{
			if (this->WindowState == FormWindowState::Minimized) {
				this->Hide();
				this->notifyIcon->Visible = true;
			}
		}
	private:
		System::Void notifyIcon_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		{
			this->Show();
			this->WindowState = FormWindowState::Normal;
			this->notifyIcon->Visible = false;
		}
	private:
		System::Void menuItem_OnClick(System::Object^ sender, System::EventArgs^ e)
		{
			this->Close();
		}
	private:
		System::Void menuItem2_OnClick(System::Object^ sender, System::EventArgs^ e)
		{
			this->button1_Click(nullptr, nullptr);
		}
	};
}
