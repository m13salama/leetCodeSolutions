#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class ParkingSystem {
public:
    int big, medium, small;
    ParkingSystem(int big, int medium, int small) {
        init;
        this->big = big;
        this->medium = medium;
        this->small = small;
    }
    
    bool addCar(int carType) {
        init;
        switch(carType){
            case 1:
                if(big>0){
                    big--;
                    return true;
                }
                return false;
            case 2:
                if(medium>0){
                    medium--;
                    return true;
                }
                return false;
            case 3:
                if(small>0){
                    small--;
                    return true;
                }
                return false;
        }
        return true;
    }
};