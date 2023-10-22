//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

///Punto de entrada a la aplicación///
int main() {
	//////Variables//////
	Texture textureCuadrado;
	Sprite cuadrado;

	float anguloRotacion = 0;


	//Cargamos la textura del archivo
	textureCuadrado.loadFromFile("imagenes/chessw.png"); //Estuve a punto de elegir el cuadrado negro para hacer la broma, pero prefiero aprobar jajaja

	//Cargamos el material del sprite
	cuadrado.setTexture(textureCuadrado);

	//Cambiamos el origen del cuadrado
	cuadrado.setOrigin(64, 64);

	//Posicionamos la plataforma final
	cuadrado.setPosition(400, 300);

	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(800, 600, 32),
		"Que ventana horrible");
	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();

		//Aumentamos el angulo de rotacion
		if (anguloRotacion < 360) {
			anguloRotacion += 0.10f;
		}
		else {
			anguloRotacion = 0;
		}

		//Modificamos rotacion del cuadrado
		cuadrado.setRotation(anguloRotacion);


		//Dibujamos la escena
		App.draw(cuadrado);

		// Mostramos la ventana
		App.display();
	}
	return 0;
}
