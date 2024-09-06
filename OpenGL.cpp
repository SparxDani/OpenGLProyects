//// OpenGL.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
////
//#include <Windows.h>
//#include "IncludeGL.h"
//#include "Example.h"
//#include "Example1.h"
// 
// 
//#include <iostream>
//using namespace std;
//Example* _Example;
//void Render()
//{
//	((Example1*)_Example)->Render();
//}
//void KeyboardFunc(unsigned char key, int X, int Y )
//{
//	((Example1*)_Example)->KeyboardFunc(key,  X,  Y);
//	glutPostRedisplay(); 
//}
//void reSize(GLsizei width, GLsizei height) {  // GLsizei for non-negative integer
//   // Compute aspect ratio of the new window
//	if (height == 0) height = 1;                // To prevent divide by 0
//	GLfloat aspect = (GLfloat)width / (GLfloat)height;
//
//	// Set the viewport to cover the new window
//	glViewport(0, 0, width, height);
//
//	// Set the aspect ratio of the clipping volume to match the viewport
//	glMatrixMode(GL_PROJECTION);  // To operate on the Projection matrix
//	glLoadIdentity();             // Reset
//	// Enable perspective projection with fovy, aspect, zNear and zFar
//	gluPerspective(45.0f, aspect, 0.1f, 10000.0f);
//}
//
//void Idle()
//{
//	((Example1*)_Example)->Idle();
//}
//
//
//void init(void)
//{
//	_Example = new Example1();
//	((Example1*)_Example)->init();
//}
//int main(int argc, char** argv)
//{
//	GLuint width = 550;
//	GLuint heigth = 550;
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowSize(width, heigth);
//	glutInitWindowPosition(100, 100);
//	glutCreateWindow("hello");
//	
//	init();
//	
//	glutDisplayFunc(Render);
//	glutIdleFunc(Idle);
//	glutKeyboardFunc(KeyboardFunc);
//	glutReshapeFunc(reSize);
//	glutMainLoop();
//	
//	return 0;
//}
// OpenGL.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <Windows.h>
#include "IncludeGL.h"
#include "Figura.h"
#include "Figura2D.h"

#include <iostream>
using namespace std;

Figura* _Figura;

// Función que se encargará de renderizar las figuras seleccionadas
void Render()
{
    // Llamada a la función Render de la clase Figura2D
    ((Figura2D*)_Figura)->Render();
}

// Función que gestiona la entrada del teclado
void KeyboardFunc(unsigned char key, int X, int Y)
{
    // Llamada a la función que maneja el teclado en Figura2D
    ((Figura2D*)_Figura)->KeyboardFunc(key, X, Y);
    // Redibuja la escena después de detectar una entrada
    glutPostRedisplay();
}

// Función para manejar el redimensionamiento de la ventana
void reSize(GLsizei width, GLsizei height) {
    if (height == 0) height = 1; // Previene división por 0
    GLfloat aspect = (GLfloat)width / (GLfloat)height;

    // Establece el nuevo viewport para cubrir la ventana
    glViewport(0, 0, width, height);

    // Ajusta la proporción de aspecto del volumen de recorte
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f, aspect, 0.1f, 10000.0f); // Proyección en perspectiva
}

// Función que maneja el estado idle
void Idle()
{
    ((Figura2D*)_Figura)->Idle();
}

// Función de inicialización de la clase Figura2D
void init(void)
{
    _Figura = new Figura2D();  // Crea una instancia de Figura2D
    ((Figura2D*)_Figura)->init(); // Llama a su función init para configurar OpenGL
}

// Función principal que ejecuta el programa
int main(int argc, char** argv)
{
    GLuint width = 550;  // Ancho de la ventana
    GLuint height = 550; // Alto de la ventana

    // Inicialización de GLUT
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(width, height);
    glutInitWindowPosition(100, 100); // Posición inicial de la ventana
    glutCreateWindow("Dibujo de Figuras 2D");

    // Inicializa la clase Figura2D
    init();

    // Configura las funciones de renderizado, teclado, redimensionado e idle
    glutDisplayFunc(Render);
    glutIdleFunc(Idle);
    glutKeyboardFunc(KeyboardFunc);
    glutReshapeFunc(reSize);

    // Comienza el loop principal de GLUT
    glutMainLoop();

    return 0;
}
