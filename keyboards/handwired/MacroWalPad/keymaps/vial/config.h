#pragma once

//NOTE: per ora parto con una matrice 4x4 e poi implementerò una 6x4. La configurazione è già quella futura

// Definiamo le dimensioni MASSIME della matrice (quella futura 6x4)
#define MATRIX_ROWS 6
#define MATRIX_COLS 4

// Mappatura dei pin GPIO del Pi Pico. 
// Anche se ora usi solo 4 righe, dichiariamo già i pin GP6 e GP7 per il futuro.
#define MATRIX_ROW_PINS { GP2, GP3, GP4, GP5, GP6, GP7 }
#define MATRIX_COL_PINS { GP8, GP9, GP10, GP11 }

// Direzione del diodo. COL2ROW significa che il catodo (striscia) è sulla riga.
// Il firmware manderà un segnale basso sulle righe e leggerà lo stato dalle colonne.
#define DIODE_DIRECTION COL2ROW

// Identificativo Unico (UID) per Vial. 
// Vial lo usa per capire che questa è la TUA tastiera e non un'altra.
// Sostituisci questi 8 valori esadecimali a caso se vuoi, ma mantieni il formato.

#define VIAL_KEYBOARD_UID {0xFD, 0x5F, 0x2C, 0x2B, 0xC2, 0x41, 0x05, 0xA8}

// Combo di sblocco di sicurezza per Vial (lasciamo a 0,0 per semplicità)
#define VIAL_UNLOCK_COMBO {0, 0}
