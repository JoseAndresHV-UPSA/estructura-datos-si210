#include "MyForm.h"

using namespace COLASDINAMICAS;

[STAThread]
int main(cli::array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew COLASDINAMICAS::MyForm());
	return 0;
}