#include "MyForm.h"

using namespace COLASCIRCULARES;

[STAThread]
int main(cli::array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew COLASCIRCULARES::MyForm());
	return 0;
}