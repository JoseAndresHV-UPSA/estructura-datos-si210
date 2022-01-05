#include "MyForm.h"

using namespace MATRICES;

[STAThread]
int main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MATRICES::MyForm());
	return 0;
}