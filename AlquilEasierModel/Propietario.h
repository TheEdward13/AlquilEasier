/**
 * Project Untitled
 */

#pragma once
#include "Usuario.h"

#ifndef _PROPIETARIO_H
#define _PROPIETARIO_H

using namespace System;
namespace AlquilEasierModel {
    [Serializable]
        public ref class Propietario : public Usuario {
        public:

            void Registro();
            void ModificarDatos();
            void EstadoMantenimiento();
            void ControlServicios();
            void MensajesDeudas();
            void InformeQuejas();
            void SitucionAccidentes();

            Propietario() {};
            Propietario(int id, String^ nombre, String^ apellido, String^ telefono,
                String^ correo, String^ dni) :
                Usuario(id, nombre, apellido, telefono, correo, dni) {}

            /*Manager() {}
            Manager(int id, String^ username, String^ password, String^ name, String^ lastName,
                String^ status, double quota) :
                User(id, username, password, name, lastName, status) {
                Quota = quota;
            }*/

    };
}

#endif //_PROPIETARIO_H