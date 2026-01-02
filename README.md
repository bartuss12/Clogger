Clogger — Minimal Linux‑Powered USB eMMC Reader (F1C100S)
Clogger is a tiny, reproducible hardware project built around the Allwinner F1C100S, 
designed to read, clone, and analyze BGA153/BGA169 eMMC chips using nothing more than a Linux system running from an SD card. 
The goal is to create a fully open, hand‑solderable tool that exposes an attached eMMC device to a host PC over USB 
— just like a USB mass‑storage adapter, but built from scratch.

🔧 Goals

*Build a minimal F1C100S board that boots Linux entirely from an SD card

*Provide a UART‑accessible Linux shell for debugging and control

*Use USB gadget mode to expose the connected eMMC as a block device

*Support BGA153/BGA169 eMMC reballing using low‑cost stencils and solder paste

*Offer a fully reproducible Buildroot toolchain (U‑Boot + kernel + rootfs)

*Document the entire bring‑up process: boot flow, device tree, SD layout, and USB configuration

*Create a simple, reliable tool for eMMC backup, cloning, and recovery

29.12.2025 Work on first hardware version started
<img width="607" height="396" alt="image" src="https://github.com/user-attachments/assets/8b7fc57f-2140-4e00-a539-06f3c2acc1f5" />

31.12.2025 Added 3D models, added LEDs (for work without terminal), added decoupling capacitors, added line resistors
<img width="939" height="565" alt="image" src="https://github.com/user-attachments/assets/2d9657b3-0e20-4209-aa73-16335c3e46f5" />
