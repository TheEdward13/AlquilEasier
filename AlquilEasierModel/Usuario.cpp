/**
 * Project Untitled
 */

#include "pch.h"
#include "Usuario.h"

 /**
  * Usuario implementation
  */

AlquilEasierModel::Usuario::Usuario()
{
}
AlquilEasierModel::Usuario::Usuario(int id, String^ nombre, String^ apellido, String^ telefono,
	String^ correo, String^ dni)
{
	this->Id = id;
	this->Nombre = nombre;
	this->Apellido = apellido;
	this->Telefono = telefono;
	this->Correo = correo;
	this->DNI = dni;
}
void AlquilEasierModel::Usuario::registrarUsuario() {



}

bool AlquilEasierModel::Usuario::verificarCredenciales() {
	return false;
}

void AlquilEasierModel::Usuario::modificarUsuario() {



}

void AlquilEasierModel::Usuario::eliminarUsuario() {



}