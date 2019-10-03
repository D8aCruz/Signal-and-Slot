#include <QCoreApplication>
#include "persona.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QObject *parent = new QObject;
    Persona *juan = new Persona(parent);
    Persona *pedro = new Persona(parent);
    juan->setNombre("Juan");
    pedro->setNombre("Pedro");
    QObject::connect(juan,SIGNAL(hablo(QString)),pedro,SLOT(escucha(QString)));

    juan->habla("Hola como estas?");
    pedro->habla("Bien grasias y tu?");
    juan->habla("tambien");

    delete  parent;
    return a.exec();
}
