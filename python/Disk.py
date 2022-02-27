class Disk():

    def __init__(self, type="-", capacity=0, price=0):
        self.__type = type
        self.__capacity = capacity
        self.__price = price

    def setType(self, type):
        self.__type = type

    def setCapacity(self, capacity):
        self.__capacity = capacity

    def setPrice(self, price):
        self.__price = price

    def getType(self):
        return self.__type

    def getCapacity(self):
        return self.__capacity

    def getPrice(self):
        return self.__price
