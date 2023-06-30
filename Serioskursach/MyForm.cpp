#include "MyForm.h"
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;
FILE* f;
[STAThread]
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Serioskursach::MyForm form;
    Application::Run(% form);
  
}
