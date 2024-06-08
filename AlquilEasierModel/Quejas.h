#pragma once

#ifndef _QUEJAS_H
#define _QUEJAS_H

#include "Inquilino.h"

using namespace System;
namespace AlquilEasierModel {
    public ref class Quejas {
    public:
        property int Id;
        property bool Resuelto;
        property String^ Descripcion;
        property String^ Fecha;
    };
}

#endif //_QUEJAS_H