#include <iostream>

class Stove {
    private:
        int temperature = 0;
    public:
        Stove(int temp) {
            setTemperature(temp);
        }


        int getTemperature() {
            return temperature;
        }
        void setTemperature(int temp) {

            if (temp < 0) {
                this -> temperature = 0;
            } else if (temp >= 10) {
                this -> temperature = 10;
            }
        }
};

int main() {

    Stove stove(100);

    std::cout << "Stove setting: " << stove.getTemperature() << std::endl;

    return 0;
}
