class Veiculos{
    private:
        int km;
        int gasolina;
        int consumo;

    public:
        int getConsumo();

        void setKm(int A);

        void setGasolina(int A);
};

int Veiculos::getConsumo(){
    return consumo;
}

void Veiculos::setKm(int A){
    km = A;
}

void Veiculos::setGasolina(int A){
    gasolina = A;
    consumo = km / gasolina;
}