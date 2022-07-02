
#include "WelcomeForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
//array <String^>^ args
int main(array <String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Project1:: WelcomeForm F1;
	Application::Run(% F1);

}