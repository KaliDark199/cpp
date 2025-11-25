// Ahora prácticaremos a como es que se usa la herencia en programación orientada a objetos:

#include <iostream>
#include <string>

//primero que nada se creara una clase base o madre

class Animales{
    public:
        std::string nombre;
        int edad;
        std::string juguete_favorito;
        std::string comida_favorita;
        std::string especie;

        // aquí creamos a que tipo de animal es por medio de un constructor
        Animales(std::string specie_animal, int edad_animal){
            especie = specie_animal;
            edad = edad_animal;

        }
    
        void comer(){
            std::cout << "la especie del animal es " << especie << " y tiene " << edad << " años de edad " << std::endl;
        }

        void mirar(){
            std::cout << "El " << especie << " de nombre " << nombre <<  " está mirando la  " << comida_favorita << std::endl;
        }

};

class Perro : public Animales{
    public:
        Perro(std::string especie,int edad_animal) : Animales("perro", edad_animal){
            especie = "perro";
        }

        void jugar(){
            std::cout << "El perro de nombre " << nombre << " está jugando con su juguete favorito que es " << juguete_favorito << std::endl;
        }
};

//se creara una instancia o objeto:
int main(){
    Animales gato("gato", 3);
    gato.nombre = "Michi";
    gato.comida_favorita= "pescado";
    gato.comer();

    Perro perro1 ("doberman", 5);
        perro1.nombre = "Rex";
        perro1.juguete_favorito = "pelota";
        perro1.jugar();
    
}  




