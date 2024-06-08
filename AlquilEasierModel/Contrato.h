#pragma once

#ifndef _CONTRATO_H
#define _CONTRATO_H

using namespace System;
namespace AlquilEasierModel {
    public ref class Contrato {
    public:
        property int Id;
        property String^ FechaInicio;
        property String^ FechaFin;
        property String^ MetodoPago;

        void GenerarContrato();
        void RegistrarContrato();
        void ConsultarContrato();
    };
}

#endif //_CONTRATO_H