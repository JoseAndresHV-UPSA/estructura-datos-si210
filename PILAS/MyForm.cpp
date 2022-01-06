#include "MyForm.h"

using namespace PILAS;

[STAThread]
int main(cli::array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew PILAS::MyForm());
	return 0;
}