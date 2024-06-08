#pragma once

#ifndef _DEPARTAMENTO_H
#define _DEPARTAMENTO_H

using namespace System;

namespace AlquilEasierModel {
    [Serializable]
        public ref class Departamento {
        public:
            property int Id;
            property double Dimensiones;
            property double Precio;
            property bool Estado;
            property String^ Accidentes;
            property array<Byte>^ Photo;
            property int Piso;
            property int NumDep;
    };

}

#endif //_DEPARTAMENTO_H