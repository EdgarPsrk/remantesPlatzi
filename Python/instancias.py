# class Coordenadas:
#     def __init__(self, x, y):
#         self.x = x
#         self.y = y

#     def distancia(self, otra_coordenada):
#         x_diff = (self.x - otra_coordenada.x)**2
#         y_diff = (self.y - otra_coordenada.y)**2    
#         return ( x_diff + y_diff)**0.5


# if __name__ == "__main__":
#     coord_1 = Coordenadas(3, 30)
#     coord_2 = Coordenadas(4, 8)
#     print(coord_1.distancia(coord_2))        


class Coordenada:
    def __init__(self, x, y):
        self.x = x
        self.y = y

#LAS FUNCIONES DENTRO DE LAS CLASES SE LLAMAN METODOS.

    #FUNCION1
    def modulo(self):
        x = (self.x)**2
        y = (self.y)**2
        u = (x + y)**0.5
        u = round(u, 2)
        return u 

    #FUNCION2
    def distancia(self, otra_coordenada):
        x_diff = (self.x - otra_coordenada.x)**2
        y_diff = (self.y - otra_coordenada.y)**2  
        vector = ( x_diff + y_diff)**0.5
        vector = round( vector, 2)
        return vector

if __name__ == "__main__":
    cooord = Coordenada(3, 4)
    print(cooord.modulo())  
    coord1 = Coordenada(4, 3)
    
    #LINSEA PARA SABER SI UNA COORDENADA ES INSTACIA DE COORDENADAS
    #LAS INSTANCIAS SON UNA CLASE DEFINIDA.
    print(isinstance(cooord, Coordenada))

    print(cooord.distancia(coord1))






class Lavadora:
    def __init__(self):
        pass

    def lavar(self, temperatura = "caliente"):
        self._llenar_tanque_agua(temperatura)
        self._jabon()
        self._lavar()
        self._centrifugar()


    def _llenar_tanque_agua(self, temperatura):
        print(f"Llenado el tanque con agua{temperatura}")


    def _jabon(self):
        print("añadiendo jabon")


    def _lavar(self):
        print("Lavando la ropa")


    def _centrifugar(self):
        print("centrifugando la ropa")  

        
        

if __name__ == "__main__":
    robotina = Lavadora
    robotina.lavar
