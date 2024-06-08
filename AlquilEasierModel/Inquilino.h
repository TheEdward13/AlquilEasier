/**
 * Project Untitled
 */

#pragma once
#include "Usuario.h"

#ifndef _INQUILINO_H
#define _INQUILINO_H

using namespace System;
namespace AlquilEasierModel {
    [Serializable]
        public ref class Inquilino : public Usuario {
        public:
            void Registro();
            void ModificarDatos();
            void RegistrarQuejas();
            void SituacionAccidentes();

            Inquilino() {};
            Inquilino(int id, String^ nombre, String^ apellido, String^ telefono,
                String^ correo, String^ dni) :
                Usuario(id, nombre, apellido, telefono, correo, dni) {}

    };
}

#endif //_INQUILINO_H