#pragma once

#ifndef _DEUDAS_H
#define _DEUDAS_H

using namespace System;
namespace AlquilEasierModel {
    [Serializable]
    public ref class Deudas {
    public:
        property int Id;
        property Double Agua;
        property Double Luz;
        property Double Internet;
        property Double Alquiler;
        property Double Deuda;
        property Double Seguridad;
        property int Month;
        property int Year;



        void RegistrarDeuda();
        void ConsultarDeuda();
        void ConsultarEstado();
    };

    [Serializable]
    public ref class fechas {
    public:
        property int Id;
        property String^ Month;
        property String^ Year;
    };

}

#endif //_DEUDAS_H