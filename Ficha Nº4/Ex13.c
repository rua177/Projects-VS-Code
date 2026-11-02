#define MAX_AZ1 100
#define MAX_AZ2 200

typedef struct azulejo {
    float comp;
    float larg;
    int nCores;
} AZULEJO;

float areaParede(AZULEJO parede[MAX_AZ1][MAX_AZ2]) {
    float areaTotal = 0;
    
    for (int i = 0; i < MAX_AZ1; i++) {
        for (int j = 0; j < MAX_AZ2; j++) {
            areaTotal += parede[i][j].comp * parede[i][j].larg;
        }
    }
    
    return areaTotal;
}

float mediaCores(AZULEJO parede[MAX_AZ1][MAX_AZ2]) {
    int totalCores = 0;
    int totalAzulejos = MAX_AZ1 * MAX_AZ2;
    
    for (int i = 0; i < MAX_AZ1; i++) {
        for (int j = 0; j < MAX_AZ2; j++) {
            totalCores += parede[i][j].nCores;
        }
    }
    
    return (float)totalCores / totalAzulejos;
}

int main() {
    AZULEJO parede[MAX_AZ1][MAX_AZ2];
    


    return 0;
}

