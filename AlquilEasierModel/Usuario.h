#pragma once

#ifndef _USUARIO_H
#define _USUARIO_H

using namespace System;
namespace AlquilEasierModel {
    [Serializable]
    public ref class Usuario {
    public:
        property int Id;
        property String^ Nombre;
        property String^ Apellido;
        property String^ Telefono;
        property String^ Correo;
        property String^ DNI;


        //LOGIN
        property String^ Username;
        property String^ Password;
        property String^ Name;
        property String^ LastName;
        property String^ Status;

        void registrarUsuario();
        bool verificarCredenciales();
        void modificarUsuario();
        void eliminarUsuario();

        Usuario();
        Usuario(int Id, String^ Nombre, String^ Apellido, String^ Telefono,
            String^ Correo, String^ DNI);
    };

}
#endif //_USUARIO_H