#include <Windows.h>
#include <ctime>
#include <cstdlib>
#include <thread>

#include "newUI.hpp"
#include "Injector.hpp"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Threading;

[STAThread]
int main([[maybe_unused]] array<String^>^ args)
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	Injector::renameExe();

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	newSkinInjector::newSkin form;

	auto thread{ std::thread(Injector::run) };
	Thread^ screenThread{ gcnew Thread(gcnew ThreadStart(% form, &newSkinInjector::newSkin::updateScreen)) };
	screenThread->Start();

	Application::Run(%form);

	thread.detach();
	screenThread->Abort();

	return EXIT_SUCCESS;
}
