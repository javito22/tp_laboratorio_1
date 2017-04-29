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
 * @param cantidad es el tamaño del array
 * @return el primer indice disponible y -1 si no hay lugares libres
 */
int obtenerEspacioLibre(EPersona lista[], int cantidad);
/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni es el dni a ser buscado en el array.
 * @param int  cantidad del array persona
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni, int cantidad);
/** \brief carga una personas con todos sus datos
 * \param lista[] estructura de personas a cargar
 * \param cantidadLista es el tamaño del array de personas
 * \param pos es la  posicion libre para guardar los datos de la persona en la estructura
 */
void cargarPersona(EPersona lista[], int cantidadLista, int pos);
/** \brief borra los datos de una persona de la estructura
 * \param lista[] es para la posicion buscar la posicion de la persona que se va a borrar
 * \param cantidadLista es el tamaño del array de personas
 */
void baja(EPersona lista[], int cantidad);
/** \brief Arma una lista con todas las personas alfabeticamente por nombre
 * \param lista[] es la estructura de personas para mostrar
 * \param cantidad es el tamaño del array de personas
 */
void listaDePersonas(EPersona lista[], int cantidad);
/** \brief muestra un gráfico de barras en el que se analizan las edades
 * \param menores int  contador de personas menores a 18 años
 * \param de19Hasta35 int   contador de personas de entre 19 y 35 años
 * \param masDe35 int  cant de personas con más de 35 años
 * \return grafico
 */
void graficar(int menos18, int cont19a35, int mas35);
/** \brief inicia a todos los estados de las personas en 0
 * \param lista[] es la estructura de personas a inicializar
 * \param cantidad tamaño del array de personas
 */
void iniciarEstados(EPersona lista[], int tamLista);
#endif // FUNCIONES_H_INCLUDED
