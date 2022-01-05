#include "MyForm.h"

using namespace ENTEROS;

[STAThread]
int main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew ENTEROS::MyForm());
	return 0;
}