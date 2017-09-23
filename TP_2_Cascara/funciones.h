#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */

int obtenerEspacioLibre(EPersona lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni);
/**  
 * carga los datos de una estructura que comprende los datos de una persona
 * \param lista el array de la estructura que pasa como parametro
 * \param recibe el tamaño del arraid
 * \return datos cargados
 *
 */     

void cargarPersonas(EPersona lista[], int TAM);
/** 
 * muestra los datos de todas las personas cargadas
 * \param recibe arraid de la estructura
 * \param tamaño del arraid
 * \return informacion de personas cargadas
 *
 */     

void mostrarTodasLasPersonas(EPersona[], int TAM);
/** 
 * Deja el estado de la estructura en 0, mediante el dni 
 * \param Estructura de la persona
 * \param tamaño del arraid
 * \return Valor en 0 del indice del estado del arraid seleccionado
 *
 */     

void borrarPersonas(EPersona[], int TAM);
/** 
 * Muestra individualmente dato de estructura
 * \param Estructura
 * \param  -
 * \return Visualizacion actual de la persona cargada
 *
 */     

void mostrarPersona(EPersona);
/**  
 * Orden alfabeticamente de los datos que han sido cargados
 * \param estructura de arraid
 * \param tamaño del arraid
 * \return Datos ordenados
 *
 */     

void ordenarPersonas(EPersona[], int TAM);
/** 
 * Cuenta las edades dividido en 3 rangos
 * \param estructura EPersona
 * \param  tamaño de arraid
 * \return  grafico visual de asteriscos con 3 rangos seleccionados
 *
 */     

void grafico (EPersona[]);










#endif // FUNCIONES_H_INCLUDED
