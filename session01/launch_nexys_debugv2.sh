#!/usr/bin/env bash
set -euo pipefail

ENV_NAME="core-v-mini-mcu"
REPO_DIR="$(pwd)"

SERIAL_DEV="/dev/serial/by-id/usb-Digilent_Digilent_USB_Device_210292BE3A36-if01-port0"
OPENOCD_CFG="./hw/vendor/x-heep/tb/core-v-mini-mcu-nexsys-hs2.cfg"

run_terminal() {
    local title="$1"
    local command="$2"

    gnome-terminal --title="$title" -- bash -lc "
        cd \"$REPO_DIR\"

        source \"\$(conda info --base)/etc/profile.d/conda.sh\"
        conda activate \"$ENV_NAME\"

        echo \"Running: $command\"
        echo

        $command

        echo
        echo \"Process finished. Press ENTER to close this terminal.\"
        read
    "
}

run_terminal "UART - picocom" \
    "picocom -b 9600 -r -l --imap lfcrlf \"$SERIAL_DEV\""

sleep 1

run_terminal "OpenOCD - Nexys" \
    "openocd -f \"$OPENOCD_CFG\""

sleep 2

run_terminal "GDB connect" \
    "make gdb_connect"