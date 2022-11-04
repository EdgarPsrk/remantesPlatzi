from car import Car

class UberBan(Car):
    typeCarAccepted = []
    seatMaterial= []

    def __init__(self, license, driver, typeCarAccepted, seatMaterial):
        super.__init__(license, driver)
        self.typeCarAccepted = typeCarAccepted
        self.seatMaterial = seatMaterial