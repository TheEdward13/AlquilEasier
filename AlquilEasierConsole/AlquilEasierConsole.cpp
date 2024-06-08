#include "pch.h"

using namespace AlquilEasierModel;
using namespace AlquilEasierService;
using namespace System::Collections::Generic;
using namespace System;

int main(array<System::String^>^ args)
{
    //De Roberto:
    //Generar archivo binario para propietario y sujetos de prueba (inquilino y personal)
    Propietario^ propietario = gcnew Propietario();
    propietario->Id = 1;
    propietario->Name = "Renzo";
    propietario->LastName = "Ramirez";
    propietario->Username = "reramirez";
    propietario->Password = "password";
    propietario->Status = "A";

    Inquilino^ inquilino = gcnew Inquilino();
    inquilino->Id = 2;
    inquilino->Name = "Melany";
    inquilino->LastName = "Espinoza";
    inquilino->Username = "mespinoza";
    inquilino->Password = "password";
    inquilino->Status = "A";

    Personal^ personal = gcnew Personal();
    personal->Id = 3;
    personal->Name = "Roberto";
    personal->LastName = "Niño";
    personal->Username = "rnino";
    personal->Password = "password";
    personal->Status = "A";

    Service::AddUsuario(propietario);
    Service::AddUsuario(inquilino);
    Service::AddUsuario(personal);

    return 0;
}
