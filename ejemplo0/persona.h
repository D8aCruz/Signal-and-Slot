#ifndef PERSONA_H
#define PERSONA_H

#include <QObject>

class Persona : public QObject
{
    Q_OBJECT
public:
    explicit Persona(QObject *parent = nullptr);
    void setNombre(const QString &nombre){ this->nombre = nombre; }
    void habla(const QString &palabra);
signals:
    void hablo(QString);
public slots:
    void escucha(const QString &palabra);
private:
    QString nombre;
};

#endif // PERSONA_H
