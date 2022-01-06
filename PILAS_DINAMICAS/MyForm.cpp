#include "MyForm.h"

using namespace PILASDINAMICAS;

[STAThread]
int main(cli::array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew PILASDINAMICAS::MyForm());
	return 0;
}

