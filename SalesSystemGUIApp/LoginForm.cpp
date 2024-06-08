#include "LoginForm.h"
#include "SalesSystemGUIApp.h"

//De Roberto:
//Control del Login
System::Void SalesSystemGUIApp::LoginForm::btnOK_Click(System::Object^ sender, System::EventArgs^ e)
{

	String^ username = txtUsername->Text;
	String^ password = txtPassword->Text;

	Usuario^ usuario = Service::ValidateUsuario(username, password);

	if (usuario != nullptr) {

		SalesSystemMainForm::Usuario = usuario;
		MessageBox::Show("Bienvenido(a) " + usuario->Name + " " + usuario->LastName);

		if (usuario->GetType() == Propietario::typeid) {

			ADMIN_interfaz^ admininterfaz = gcnew ADMIN_interfaz();
			admininterfaz->Show();
			
		}
		else if (usuario->GetType() == Inquilino::typeid) {
			USER_interfaz^ userinterfaz = gcnew USER_interfaz();
			userinterfaz->Show(); // Mostrar el formulario del inquilino
		}
		else if (usuario->GetType() == Personal::typeid) {
			PersonalForm^ personalForm = gcnew PersonalForm();
			personalForm->Show(); // Mostrar el formulario del personal
		}
		//else if (usuario->GetType() == Administrador::typeid) {
		//	ADMIN_interfaz^ adminForm = gcnew ADMIN_interfaz();
		//	adminForm->Show(); // Mostrar el formulario de administrador
		//}

		this->Close();
	}
	else {

		MessageBox::Show("Usuario y/o contraseña incorrectos.");

	}

}

System::Void SalesSystemGUIApp::LoginForm::LoginForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{

	if (SalesSystemMainForm::Usuario == nullptr)
		Application::Exit();

}

System::Void SalesSystemGUIApp::LoginForm::LoginForm_Shown(System::Object^ sender, System::EventArgs^ e) {

	txtUsername->Focus();

}
