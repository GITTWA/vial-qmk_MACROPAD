# Specifica l'architettura del chip (Raspberry Pi Pico)
MCU = RP2040
BOOTLOADER = rp2040

# Attiva il motore di Vial per la configurazione dinamica
VIAL_ENABLE = yes

# Ottimizzazione dello spazio: comprime il firmware per farlo stare nel chip
LTO_ENABLE = yes
