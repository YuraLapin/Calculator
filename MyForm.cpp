#include "MyForm.h"

#include <Windows.h>

using namespace Calculator;

int main() 
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}