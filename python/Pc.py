from dis import dis
import imp

from matplotlib.pyplot import cla
from Disk import Disk
from Ram import Ram
from Processor import Processor


class Pc():

    def __init__(self, disk=Disk(), ram=Ram(), processor=Processor(), totalPrice=0):
        self.__disk = disk
        self.__ram = ram
        self.__processor = processor
        self.__totalPrice = totalPrice

    def setDisk(self, disk):
        self.__disk = disk

    def setRam(self, ram):
        self.__ram = ram

    def setProcessor(self, processor):
        self.__processor = processor

    def setTotalPrice(self, totalPrice):
        self.__totalPrice = totalPrice

    def getDisk(self):  
        return self.__disk

    def getRam(self):
        return self.__ram

    def getProcessor(self):
        return self.__processor

    def getTotalPrice(self):
        return self.__totalPrice
