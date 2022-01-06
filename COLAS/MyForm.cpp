#include "MyForm.h"

using namespace COLAS;

[STAThread]
int main(cli::array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew COLAS::MyForm());
	return 0;
}