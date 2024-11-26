import os
from importlib import import_module

def myfactory(module_name):
    module = import_module("plugins." + module_name)
    return getattr(module, module_name.capitalize())

def test():
    pets = []
    # obiđi svaku datoteku kazala plugins 
    for mymodule in os.listdir('plugins'):
        module_name, module_ext = os.path.splitext(mymodule)
        # ako se radi o datoteci s Pythonskim kodom ...
        if module_ext == '.py':
            # instanciraj ljubimca ...
            ljubimac = myfactory(module_name)('Ljubimac ' + str(len(pets)))
            # ... i dodaj ga u listu ljubimaca
            pets.append(ljubimac)

    # ispiši ljubimce
    for pet in pets:
        pet.greet()
        pet.menu()

test()