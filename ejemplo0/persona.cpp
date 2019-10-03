#include "persona.h"
#include <QDebug>

Persona::Persona(QObject *parent) : QObject(parent)
{

}
void Persona::habla(const QString &palabra){
    emit hablo(palabra);
}
void Persona::escucha(const QString &palabra){
    qDebug()<< this->nombre << "escucho: " << palabra;
}
