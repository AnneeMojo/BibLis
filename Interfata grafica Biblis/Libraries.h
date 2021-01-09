#pragma once

#include <iostream>
#include <fstream>
#include <windows.h>
#include <MMsystem.h>
#include <mmsystem.h>
#include <graphics.h>
#include <queue>

using namespace std;


// ---------- MEMORAREA UNEI LISTE SIMPLU INLANTUITE ----------
struct nod
{
    int valoare;
    struct nod* urm;
};

// ---------- MEMORAREA UNEI STIVE ----------
struct stiva
{
    struct nod* varf;
    unsigned int nrElemente;
};
nod *prim;
stiva S;


// ---------- MEMORAREA UNEI LISTE DUBLU INLANTUITE ----------
struct nod_lista_dublu_inlantuita //REALIZATA DE ANDREI
{
    int element;    //ELEMENTUL MEMORAT
    nod_lista_dublu_inlantuita* urmator;    //NODUL URMATOR MEMORAT
    nod_lista_dublu_inlantuita* anterior;   //NODUL ANTERIOR MEMORAT
};
nod_lista_dublu_inlantuita* Prim = NULL;    //DECLARAREA LISTEI VIDE PE CARE O VOM UTILIZA

int numarElemente;     //DECLARARE NUMAR DE ELEMENTE CITITE LISTE DUBLU INLANTUITE

// ---------- MEMORAREA UNEI COZI ----------
struct nod_coada //REALIZAT DE ANDREI
{
    int element_coada;      //ELEMENTUL NODULUI DIN COADA
    nod_coada* urmatorul_din_coada;    //NOD URMATOR IN COADA MEMORAT
};
