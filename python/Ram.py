class Ram():

    def __init__(self, capacity=0, price=0):
        self.__capacity = capacity
        self.__price = price

    def setCapacity(self, capacity):
        self.__capacity = capacity

    def setPrice(self, price):
        self.__price = price

    def getCapacity(self):
        return self.__capacity

    def getPrice(self):
        return self.__price
