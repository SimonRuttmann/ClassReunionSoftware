#ifndef DATUM_H
#define DATUM_H
#include <string>
using namespace std;
class Datum{
public:
    int tag, jahr, monat, stunde, min, sekunde;
    string toString(){
        string datum = "";
        datum.append(to_string(tag) + " ");
        datum.append(to_string(monat) + " ");
        datum.append(to_string(jahr) + " ");
        datum.append(to_string(stunde) + " ");
        datum.append(to_string(min) + " ");
        datum.append(to_string(sekunde) + " ");
        return datum;
    }
};

#endif // DATUM_H
