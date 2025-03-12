#include <stdio.h>

int main() {
    float dataSizeMB, transferSpeedKbps;
    
    printf("Enter the size of data in MB: ");
    scanf("%f", &dataSizeMB);
    printf("Enter the transfer speed in Kbps: ");
    scanf("%f", &transferSpeedKbps);
    
    float dataSizeKbps = dataSizeMB * 8388.608;
    float transferTimeSeconds = dataSizeKbps / transferSpeedKbps;
    float transferTimeMinutes = transferTimeSeconds / 60;
    
    printf("Time to transfer %.2f MB of data is %.2f minutes", dataSizeMB, transferTimeMinutes);
    
    return 0;
}
