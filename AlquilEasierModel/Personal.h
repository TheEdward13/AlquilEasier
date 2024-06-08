/**
 * Project Untitled
 */

#pragma once
#include "Usuario.h"

#ifndef _PERSONAL_H
#define _PERSONAL_H

using namespace System;
namespace AlquilEasierModel {
    [Serializable]
        public ref class Personal : public Usuario {
        public:
            property String^ HoraEntrada;
            property String^ HoraSalida;
            property int Fecha;

            void RegistrarPersonal();
            void ConsultarPersonal();
            void ConsultarEstadoDepa();
            void RegistrarEstadoDepa();

            Personal() {};
            Personal(int id, String^ nombre, String^ apellido, String^ telefono,
                String^ correo, String^ dni, String^ horarioEntrada, String^ horarioSalida, int fecha) :
                Usuario(id, nombre, apellido, telefono, correo, dni) {
                HoraEntrada = horarioEntrada;
                HoraSalida = horarioSalida;
                Fecha = fecha;
            }

    };
}

#endif //_PERSONAL_H