#include "MyForm.h"

using namespace VECTORES;

[STAThread]
int main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew VECTORES::MyForm());
	return 0;
}

