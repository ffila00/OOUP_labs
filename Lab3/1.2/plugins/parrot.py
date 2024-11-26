
class Parrot:
    def __init__(self, name):
        self.name = name
    
    def greet(self):
        print("Ljubimac {} pozdravlja: Mijau!".format(self.name))
    
    def menu(self):
        print("Ljubimac {} voli mlako mlijeko.".format(self.name))