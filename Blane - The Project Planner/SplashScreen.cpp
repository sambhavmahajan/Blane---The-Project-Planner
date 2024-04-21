#include "SplashScreen.h"
#include "MainWindow.h"
using namespace System;

using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);
	BlaneTheProjectPlanner::SplashScreen form;

	Application::Run(% form);

	BlaneTheProjectPlanner::MainWindow m;

	Application::Run(% m);

}