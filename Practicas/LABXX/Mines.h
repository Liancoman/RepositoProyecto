#define RENGLON 15
#define COLUMNA 15

typedef unsigned int uint8; 

void colocar_bombas(uint8 au8buscaminas[RENGLON][COLUMNA], uint8 u8bum);
void imprimir_tablero(uint8 au8tablero[RENGLON][COLUMNA], uint8 u8perder);
void revisar_alrededor(uint8 au8Tablero[RENGLON][COLUMNA],uint8 u8Fila, uint8 u8Columna);

