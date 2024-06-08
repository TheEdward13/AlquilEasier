#pragma once
#include "Inquilino.h" 

#ifndef _ALARMA_H
#define _ALARMA_H

using namespace System;
namespace AlquilEasierModel {
    public ref class Alarma {
    public:
        property int Id;
        property String^ Fecha;
        property String^ Hora;
        property bool Incendio;
        property bool Robo;
        property double Cantidad;

        property Inquilino^ Inquilino;//de quien es la alarma
        void ConsultarAlarma();
    };
}

#endif //_ALARMA_H