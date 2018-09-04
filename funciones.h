
/** \brief suma dos numeros
 *
 * \param float recibe el numero a
 * \param float recibe el numero b
 * \return float retorna la suma de a y b
 *
 */
float sumar(float, float);

/** \brief resta dos numeros
 *
 * \param float recibe el numero a
 * \param float recibe el numero b
 * \return float retorna la resta de a y b
 *
 */
float restar(float, float);

/** \brief divide dos numeros
 *
 * \param float recibe el numero a
 * \param float recibe el numero b
 * \return float retorna la division de a y b
 *
 */
float dividir(float, float);

/** \brief valida que no se divida por 0
 *
 * \param float recibe el numero a
 * \param float recibe el numero b
 * \return float si el divisor es 0 muestra que no se puede dividir, sino, llama a la funcion restar y retorna el valor de la misma
 *
 */
float validarDivision(float, float);

/** \brief multiplica dos numeros
 *
 * \param float recibe el numero a
 * \param float recibe el numero b
 * \return float retorna la multiplicacion de a y b
 *
 */
float multiplicar(float, float);

/** \brief pide que el usuario ingrese un numero para operar
 *
 * \param char recibe el caracter de la letra que se va a mostrar en pantalla
 * \return float retorna el numero ingresado
 *
 */
float pedirNumero(char);


/** \brief muestra los resultados de las operaciones
 *
 * \param float recibe el numero a
 * \param float recibe el numero b
 * \return void no retorna ya que solo muestra
 *
 */
void mostrarResultados(float, float);


/** \brief valida que el numero para calcular el factorial sea mayor a 0, si es mayor a 0 llama a la funcion factorial(), si es menor, sale para ser mostrada como error en la funcion hacerOperaciones
 *
 * \param int recibe el numero que se desea calcular el factorial
 * \return int retorna una variable de retorno, que funciona como flag, si se devuelve 0 es porque el numero es mayor a 0, si es menor a 0 devolvera 1.
 *
 */
int validarFactorial(int);

/** \brief calcula el factorial de un numero
 *
 * \param int recibe el numero para calcular su factorial
 * \return int devuelve el factorial del numero.
 *
 */
int factorial(int);
