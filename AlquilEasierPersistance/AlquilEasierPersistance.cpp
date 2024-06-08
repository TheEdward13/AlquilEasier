#include "pch.h"

#include "AlquilEasierPersistance.h"

using namespace System::IO;
using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;


//CÓDIGO PARA FORMATO BIN
void AlquilEasierPersistance::Persistance::PersistBinaryFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file;
    BinaryFormatter^ formatter = gcnew BinaryFormatter();
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        formatter->Serialize(file, persistObject);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (file != nullptr) file->Close();
    }
}
Object^ AlquilEasierPersistance::Persistance::LoadBinaryFile(String^ fileName)
{
    FileStream^ file;
    Object^ result;
    BinaryFormatter^ formatter;
    try {
        if (File::Exists(fileName)) {
            file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            formatter = gcnew BinaryFormatter();
            result = formatter->Deserialize(file);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (file != nullptr) file->Close();
    }
    return result;
}


//CRUD DE USUARIO
int AlquilEasierPersistance::Persistance::AddUsuario(Usuario^ usuario)
{
    usuariosListDB->Add(usuario);
    PersistBinaryFile(BIN_USUARIO_FILE_NAME, usuariosListDB);
    return 1;
}
List<Usuario^>^ AlquilEasierPersistance::Persistance::QueryAllUsuarios()
{
    usuariosListDB = (List<Usuario^>^)LoadBinaryFile(BIN_USUARIO_FILE_NAME);
    if (usuariosListDB == nullptr)
        usuariosListDB = gcnew List<Usuario^>();
    return usuariosListDB;
}


//CRUD DE DEPARTAMENTO
int AlquilEasierPersistance::Persistance::AddApartment(Departamento^ depa)
{
    depaListDB->Add(depa);
    PersistBinaryFile(BIN_DEPARTAMENTO_FILE_NAME, depaListDB);
    return 1;
}
int AlquilEasierPersistance::Persistance::ModifyApartment(Departamento^ depa)
{
    for (int i = 0; i < depaListDB->Count; i++) {
        if (depaListDB[i]->Id == depa->Id) {
            depaListDB[i] = depa;
            PersistBinaryFile(BIN_DEPARTAMENTO_FILE_NAME, depaListDB);
            return depa->Id;
        }
    }
    return 0;
}
int AlquilEasierPersistance::Persistance::DeleteApartment(int depaID)
{
    for (int i = 0; i < depaListDB->Count; i++) {
        if (depaListDB[i]->Id == depaID) {
            depaListDB->RemoveAt(i);
            PersistBinaryFile(BIN_DEPARTAMENTO_FILE_NAME, depaListDB);
            return depaID;
        }
    }
    return 0;
}



List<Departamento^>^ AlquilEasierPersistance::Persistance::ConsultaDepa()
{
    depaListDB = (List<Departamento^>^)LoadBinaryFile(BIN_DEPARTAMENTO_FILE_NAME);
    if (depaListDB== nullptr)
        depaListDB = gcnew List<Departamento^>();
    return depaListDB;
}
Departamento^ AlquilEasierPersistance::Persistance::ConsultaDepaByID(int depaID)
{
    depaListDB = (List<Departamento^>^)LoadBinaryFile(BIN_DEPARTAMENTO_FILE_NAME);
    for (int i = 0; i < depaListDB->Count; i++) {
        if (depaListDB[i]->Id == depaID) {
            return depaListDB[i];
        }
    }
    return nullptr;
}


//CRUD DE DEUDAS
int AlquilEasierPersistance::Persistance::AddDeuda(Deudas^ deuda)
{
    deudaListDB->Add(deuda);
    PersistBinaryFile(BIN_DEUDA_FILE_NAME, deudaListDB);
    return 1;
}

int AlquilEasierPersistance::Persistance::ModifyDeuda(Deudas^ deuda)
{
    for (int i = 0; i < deudaListDB->Count; i++) {
        //Modificar la busqueda por mes y año
        if (deudaListDB[i]->Id == deuda->Id) {
            deudaListDB[i] = deuda;
            PersistBinaryFile(BIN_DEUDA_FILE_NAME, deudaListDB);
            return deuda->Id;
        }
    }
    return 0;
}

int AlquilEasierPersistance::Persistance::DeleteDeuda(int deudaID)
{
    for (int i = 0; i < deudaListDB->Count; i++) {
        //Modificar el ID por mes y año
        if (deudaListDB[i]->Id == deudaID) {
            deudaListDB->RemoveAt(i);
            PersistBinaryFile(BIN_DEUDA_FILE_NAME, deudaListDB);
            return deudaID;
        }
    }
    return 0;
}

List<Deudas^>^ AlquilEasierPersistance::Persistance::ConsultaDeuda()
{
    //BUSCAR POR MES Y AÑO
    deudaListDB = (List<Deudas^>^)LoadBinaryFile(BIN_DEUDA_FILE_NAME);
    if (deudaListDB == nullptr)
        deudaListDB = gcnew List<Deudas^>();
    return deudaListDB;
}

int AlquilEasierPersistance::Persistance::AddHorario(Personal^ horario)
{
    horariosListDB->Add(horario);
    PersistBinaryFile(BIN_HORARIOS_FILE_NAME, horariosListDB);
    return 1;
}

List<Personal^>^ AlquilEasierPersistance::Persistance::ConsultaHorario()
{
    horariosListDB = (List<Personal^>^)LoadBinaryFile(BIN_HORARIOS_FILE_NAME);
    if (horariosListDB == nullptr)
        horariosListDB = gcnew List<Personal^>();
    return horariosListDB;
}

Personal^ AlquilEasierPersistance::Persistance::ConsultaHorarioPorFecha(int fecha)
{
    horariosListDB = (List<Personal^>^)LoadBinaryFile(BIN_HORARIOS_FILE_NAME);
    for (int i = 0; i < horariosListDB->Count; i++) {
        if (horariosListDB[i]->Fecha == fecha) {
            return horariosListDB[i];
        }
    }
    return nullptr;
}

int AlquilEasierPersistance::Persistance::RegistrarAlarma(Alarma^ alarma)
{
    alarmlistDB->Add(alarma);
    PersistBinaryFile(BIN_ALARMA_FILE_NAME, alarmlistDB);
    return 1;
}

List<Alarma^>^ AlquilEasierPersistance::Persistance::QuearyAllAlarma()
{
    alarmlistDB = (List<Alarma^>^)LoadBinaryFile(BIN_ALARMA_FILE_NAME);
    if (alarmlistDB == nullptr) {
        alarmlistDB = gcnew List<Alarma^>();
    }
    return alarmlistDB;

}




