void liberaMapa();
void leMapa();
void alocaMapa();
void imprimeMapa();
int acabou();
void move(char direcao);

struct mapa{
    char** mapa;
    int linhas;
    int coluna;
};
typedef struct mapa MAPA;